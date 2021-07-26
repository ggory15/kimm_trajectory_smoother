#include "kimm_trajectory/bindings/fwd.hpp"
#include <eigenpy/geometry.hpp>

#include "kimm_trajectory/bindings/expose_Path.hpp"
#include "kimm_trajectory/bindings/expose_Trajectory.hpp"

namespace bp = boost::python;
using namespace kimmtraj::python;

BOOST_PYTHON_MODULE(libkimm_trajectory_pywrap)
{
  eigenpy::enableEigenPy();
  eigenpy::exposeAngleAxis();
  eigenpy::exposeQuaternion();

  typedef Eigen::Matrix<double,6,6> Matrix6d;
  typedef Eigen::Matrix<double,6,1> Vector6d;
  typedef Eigen::Matrix<double,6,Eigen::Dynamic> Matrix6x;
  typedef Eigen::Matrix<double,3,Eigen::Dynamic> Matrix3x;
  
  eigenpy::enableEigenPySpecific<Matrix6d>();
  eigenpy::enableEigenPySpecific<Vector6d>();
  eigenpy::enableEigenPySpecific<Matrix6x>();
  eigenpy::enableEigenPySpecific<Matrix3x>();
  eigenpy::enableEigenPySpecific<Eigen::MatrixXd>();
  eigenpy::enableEigenPySpecific<Eigen::Vector3d>();
  
  expose_Path();  
  expose_Trajectory();
}