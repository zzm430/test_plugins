#ifndef __MOVE_CONTROLLER_H_
#define __MOVE_CONTROLLER_H_
 
#include <pluginlib/class_list_macros.h>
namespace move_controller
{
  class MoveController
  {
    public:
      MoveController(){};
      ~MoveController(){};
      void set_line_velocity(const double& line_vel);
      void set_angular_velocity(const double& angular_vel);
      void print_sth();
    private:
      double line_velocity;
      double angular_velocity;
 
  };
 
}
 
#endif
