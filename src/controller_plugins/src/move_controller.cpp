#include "controller_plugins/move_controller.h"
//注册插件，这里的参数为:(实现类，基类)
PLUGINLIB_EXPORT_CLASS(move_controller::MoveController,move_controller::MoveController)
 
namespace move_controller
{
  void MoveController::set_line_velocity(const double& line_vel)
  {
    line_velocity = line_vel;
    printf("set line velocity to %f.\n",line_vel);
  }
 
  void MoveController::set_angular_velocity(const double& angular_vel)
  {
    angular_velocity = angular_vel;
    printf("set angular velocity to %f.\n",angular_vel);    
  }
 
  void MoveController::print_sth()
  {
    printf("line velocity %f, angular velocity %f.\n",line_velocity,angular_velocity);
  }
 
}
