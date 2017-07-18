#ifndef CONSTS_H
#define CONSTS_H

constexpr int N_ROBOTS = 6;
constexpr int MAX_SUGGESTIONS = 30;
constexpr int MAX_SUGGESTION_SPOTS = 30;

// Units are SI: m, m/s, s, ...

constexpr float LINE_WIDTH = 0.010;
constexpr float FIELD_WIDTH = 8.090;
constexpr float FIELD_HEIGHT = 6.050;
constexpr float GOAL_WIDTH = 1.000;
constexpr float GOAL_DEPTH = 0.180;
constexpr float GOAL_WALL_WIDTH = 0.020;
constexpr float CENTER_CIRCLE_RADIUS = 0.500;
constexpr float DEFENSE_RADIUS = 1.000;
constexpr float DEFENSE_STRETCH = 0.500;
constexpr float BOUNDARY_WIDTH = 0.500;
constexpr float REFEREE_WIDTH = 0.250;
constexpr float ROBOT_RADIUS = 0.180 / 2;
constexpr float BALL_RADIUS = 0.043 / 2;
constexpr float ROBOT_MAX_SPEED = 1.0;
constexpr float ROBOT_KICK_SPEED = 6.0;
constexpr float MAX_PASS_DISTANCE = 2.5;

constexpr const char *PROGRAM_NAME =
    "AI for RoboIME"; // TODO: better name maybe?
constexpr int GUI_DEFAULT_WIDTH = 944;
constexpr int GUI_DEFAULT_HEIGHT = 740;

enum _ParamGroup {
  MAX_ATTACK = 0,
  MIN_ATTACK = 1,
  MAX_CONQUER = 2,
  MIN_CONQUER = 3
};

extern const int *const PARAM_GROUP;
extern bool PARAM_GROUP_AUTOSELECT;
extern bool PARAM_GROUP_CONQUER;
extern float PARAM_GROUP_THRESHOLD;
extern float PARAM_GROUP_CONQUER_TIME;
void set_param_group(int new_param_group);

enum FineOptimize { NO_OPTIMIZE, OPTIMIZE_ALL, OPTIMIZE_BEST };
extern FineOptimize FINE_OPTIMIZE;

#ifdef _CONST_IMPL
#define PARAM(TYPE, NAME, DEFAULT) _CONST_IMPL(TYPE, NAME, DEFAULT)
#else
#define PARAM(TYPE, NAME, DEFAULT) extern TYPE NAME;
#endif

PARAM(bool, CONSTANT_RATE, true);
PARAM(bool, KICK_IF_NO_PASS, false);
PARAM(int, DECISION_RATE, 7);
PARAM(int, RAMIFICATION_NUMBER, 5000);
PARAM(int, FULL_CHANGE_PERCENTAGE, 100);
PARAM(int, MAX_DEPTH, 0);
PARAM(float, KICK_POS_VARIATION, 0.150);
PARAM(float, MIN_GAP_TO_KICK, 18.0);
PARAM(float, DESIRED_PASS_DIST, 2.0);
PARAM(float, WEIGHT_BALL_POS, 0);
PARAM(float, WEIGHT_MOVE_DIST_MAX, 0);
PARAM(float, WEIGHT_MOVE_DIST_TOTAL, 0);
PARAM(float, WEIGHT_MOVE_CHANGE, 2);
PARAM(float, WEIGHT_PASS_CHANGE, 2);
PARAM(float, WEIGHT_KICK_CHANGE, 2);
PARAM(float, TOTAL_MAX_GAP_RATIO, 0.5);
PARAM(float, WEIGHT_CLOSE_TO_BALL, 1000);
PARAM(float, WEIGHT_ENEMY_CLOSE_TO_BALL, 1000);
PARAM(float, WEIGHT_HAS_BALL, 5000);
PARAM(float, WEIGHT_ATTACK, 1000);
PARAM(float, WEIGHT_SEE_ENEMY_GOAL, 10);
PARAM(float, WEIGHT_BLOCK_GOAL, 180);
PARAM(float, WEIGHT_BLOCK_ATTACKER, 5000);
PARAM(float, WEIGHT_GOOD_RECEIVERS, 0);
PARAM(float, WEIGHT_RECEIVERS_NUM, 20);
PARAM(float, WEIGHT_ENEMY_RECEIVERS_NUM, 20);
PARAM(float, DIST_GOAL_PENAL, 2000);
PARAM(float, DIST_GOAL_TO_PENAL, 1.0);
PARAM(float, MOVE_RADIUS_0, 0.5);
PARAM(float, MOVE_RADIUS_1, 2.0);
PARAM(float, MOVE_RADIUS_2, 7.0);

enum Weight {
  _WEIGHT_BALL_POS,
  _WEIGHT_MOVE_DIST_MAX,
  _WEIGHT_MOVE_DIST_TOTAL,
  _WEIGHT_MOVE_CHANGE,
  _WEIGHT_PASS_CHANGE,
  _WEIGHT_KICK_CHANGE,
  _WEIGHT_CLOSE_TO_BALL,
  _WEIGHT_ENEMY_CLOSE_TO_BALL,
  _WEIGHT_HAS_BALL,
  _WEIGHT_ATTACK,
  _WEIGHT_SEE_ENEMY_GOAL,
  _WEIGHT_BLOCK_GOAL,
  _WEIGHT_BLOCK_ATTACKER,
  _WEIGHT_GOOD_RECEIVERS,
  _WEIGHT_RECEIVERS_NUM,
  _WEIGHT_ENEMY_RECEIVERS_NUM,
  _WEIGHT_PENALS,
  W_SIZE
};

#ifndef _CONST_IMPL
#undef PARAM
#endif

#endif
