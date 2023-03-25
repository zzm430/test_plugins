#include "use_plugins/path_plan.h"
 
namespace path_ctrl
{
  PathPlan::PathPlan():plugin_loader("controller_plugins","move_controller::MoveController")
  {
    line_velocity = 1.0;
    angle_velocity = 0.5;
  };
 
  void PathPlan::init()
  {
    //根据输入参数（插件类名），通过插件加载对象创建相应的插件实例
    move_controller = plugin_loader.createInstance("move_controller::MoveController");
    //现在可以调用插件类的函数了
    move_controller->set_line_velocity(line_velocity);
    move_controller->set_angular_velocity(angle_velocity);
    move_controller->print_sth();
  }
 
}
