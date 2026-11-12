#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2GETREVOLUTEJOINTFORCE_OFFSET UNITYSDK_OFFSET(0x1D9C2980)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2GETREVOLUTEJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0x1D9C2BE0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2PREPAREREVOLUTEJOINT_OFFSET UNITYSDK_OFFSET(0x1D9C4940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLELIMIT_OFFSET UNITYSDK_OFFSET(0x1D9CEC90)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLEMOTOR_OFFSET UNITYSDK_OFFSET(0x1D9CEEF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLESPRING_OFFSET UNITYSDK_OFFSET(0x1D9CE810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETANGLE_OFFSET UNITYSDK_OFFSET(0x1D9CEAF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0x1D9CED60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMAXMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1D9CF130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x1D9CF020)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1D9CF070)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1D9CE9F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1D9CE940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETTARGETANGLE_OFFSET UNITYSDK_OFFSET(0x1D9CEAA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0x1D9CEDB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISLIMITENABLED_OFFSET UNITYSDK_OFFSET(0x1D9CED00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISMOTORENABLED_OFFSET UNITYSDK_OFFSET(0x1D9CEF60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISSPRINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D9CE880)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETLIMITS_OFFSET UNITYSDK_OFFSET(0x1D9CEE00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETMAXMOTORTORQUE_OFFSET UNITYSDK_OFFSET(0x1D9CF0D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0x1D9CEFC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0x1D9CE990)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0x1D9CE8E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETTARGETANGLE_OFFSET UNITYSDK_OFFSET(0x1D9CEA40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2SOLVEREVOLUTEJOINT_OFFSET UNITYSDK_OFFSET(0x1D9C7A40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2WARMSTARTREVOLUTEJOINT_OFFSET UNITYSDK_OFFSET(0x1D9C59A0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2RevoluteJoints_TypeDefinitionIndex = 37668;

	class B2RevoluteJoints : public ::System::Object
	{
	public:
		static ::System::Void b2RevoluteJoint_EnableSpring(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLESPRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2RevoluteJoint_IsSpringEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISSPRINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2RevoluteJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2RevoluteJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetTargetAngle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETTARGETANGLE_OFFSET))(a1, a2);
		}

		static ::System::Single b2RevoluteJoint_GetTargetAngle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETTARGETANGLE_OFFSET))(a1);
		}

		static ::System::Single b2RevoluteJoint_GetAngle(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETANGLE_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_EnableLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLELIMIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2RevoluteJoint_IsLimitEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISLIMITENABLED_OFFSET))(a1);
		}

		static ::System::Single b2RevoluteJoint_GetLowerLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETLOWERLIMIT_OFFSET))(a1);
		}

		static ::System::Single b2RevoluteJoint_GetUpperLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETUPPERLIMIT_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetLimits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETLIMITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2RevoluteJoint_EnableMotor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ENABLEMOTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2RevoluteJoint_IsMotorEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_ISMOTORENABLED_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETMOTORSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2RevoluteJoint_GetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMOTORSPEED_OFFSET))(a1);
		}

		static ::System::Single b2RevoluteJoint_GetMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMOTORTORQUE_OFFSET))(a1);
		}

		static ::System::Void b2RevoluteJoint_SetMaxMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_SETMAXMOTORTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Single b2RevoluteJoint_GetMaxMotorTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2REVOLUTEJOINT_GETMAXMOTORTORQUE_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetRevoluteJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2GETREVOLUTEJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetRevoluteJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2GETREVOLUTEJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PrepareRevoluteJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2PREPAREREVOLUTEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartRevoluteJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2WARMSTARTREVOLUTEJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolveRevoluteJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2REVOLUTEJOINTS_B2SOLVEREVOLUTEJOINT_OFFSET))(a1, a2, a3);
		}

	};
}
