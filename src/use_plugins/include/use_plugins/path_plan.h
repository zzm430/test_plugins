#ifndef __PATH_PLAN_H__
#define __PATH_PLAN_H__
 
#include <boost/shared_ptr.hpp>
#include <pluginlib/class_loader.h>
#include <controller_plugins/move_controller.h>
 
namespace path_ctrl
{
  class PathPlan
  {
    public:
      PathPlan();
      ~PathPlan(){};
      void init();
 
    private:
      pluginlib::ClassLoader<move_controller::MoveController> plugin_loader;
      boost::shared_ptr<move_controller::MoveController> move_controller;
      double line_velocity;
      double angle_velocity;
  };
 
}
 
#endif
