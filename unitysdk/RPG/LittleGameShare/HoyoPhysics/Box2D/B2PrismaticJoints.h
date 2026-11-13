#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2StepContext; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2World; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTFORCE_OFFSET UNITYSDK_OFFSET(0xC8DC5A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTTORQUE_OFFSET UNITYSDK_OFFSET(0xC8DC930)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PREPAREPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xC8DE190)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLELIMIT_OFFSET UNITYSDK_OFFSET(0xC8E77E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLEMOTOR_OFFSET UNITYSDK_OFFSET(0xC8E7A30)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLESPRING_OFFSET UNITYSDK_OFFSET(0xC8E7510)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETLOWERLIMIT_OFFSET UNITYSDK_OFFSET(0xC8E78A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC8E7C60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC8E7BA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xC8E7B50)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPEED_OFFSET UNITYSDK_OFFSET(0xC8E7EA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xC8E76E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xC8E7630)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTARGETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xC8E7790)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xC8E7CB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETUPPERLIMIT_OFFSET UNITYSDK_OFFSET(0xC8E78F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISLIMITENABLED_OFFSET UNITYSDK_OFFSET(0xC8E7850)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISMOTORENABLED_OFFSET UNITYSDK_OFFSET(0xC8E7AA0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISSPRINGENABLED_OFFSET UNITYSDK_OFFSET(0xC8E7580)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETLIMITS_OFFSET UNITYSDK_OFFSET(0xC8E7940)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMAXMOTORFORCE_OFFSET UNITYSDK_OFFSET(0xC8E7C00)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMOTORSPEED_OFFSET UNITYSDK_OFFSET(0xC8E7AF0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGDAMPINGRATIO_OFFSET UNITYSDK_OFFSET(0xC8E7680)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGHERTZ_OFFSET UNITYSDK_OFFSET(0xC8E75D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETTARGETTRANSLATION_OFFSET UNITYSDK_OFFSET(0xC8E7730)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2SOLVEPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xC8E0930)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2WARMSTARTPRISMATICJOINT_OFFSET UNITYSDK_OFFSET(0xC8DF250)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2PrismaticJoints_TypeDefinitionIndex = 37658;

	class B2PrismaticJoints : public ::System::Object
	{
	public:
		static ::System::Void b2PrismaticJoint_EnableSpring(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLESPRING_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsSpringEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISSPRINGENABLED_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGHERTZ_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetSpringHertz(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGHERTZ_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETSPRINGDAMPINGRATIO_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetSpringDampingRatio(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPRINGDAMPINGRATIO_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetTargetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETTARGETTRANSLATION_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetTargetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTARGETTRANSLATION_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_EnableLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLELIMIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsLimitEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISLIMITENABLED_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetLowerLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETLOWERLIMIT_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetUpperLimit(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETUPPERLIMIT_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetLimits(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETLIMITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void b2PrismaticJoint_EnableMotor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ENABLEMOTOR_OFFSET))(a1, a2);
		}

		static ::System::Boolean b2PrismaticJoint_IsMotorEnabled(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_ISMOTORENABLED_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMOTORSPEED_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetMotorSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORSPEED_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMOTORFORCE_OFFSET))(a1);
		}

		static ::System::Void b2PrismaticJoint_SetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId, ::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_SETMAXMOTORFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2PrismaticJoint_GetMaxMotorForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETMAXMOTORFORCE_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetTranslation(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETTRANSLATION_OFFSET))(a1);
		}

		static ::System::Single b2PrismaticJoint_GetSpeed(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PRISMATICJOINT_GETSPEED_OFFSET))(a1);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2 b2GetPrismaticJointForce(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTFORCE_OFFSET))(a1, a2);
		}

		static ::System::Single b2GetPrismaticJointTorque(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Single(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2World*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2GETPRISMATICJOINTTORQUE_OFFSET))(a1, a2);
		}

		static ::System::Void b2PreparePrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2PREPAREPRISMATICJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2WarmStartPrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2WARMSTARTPRISMATICJOINT_OFFSET))(a1, a2);
		}

		static ::System::Void b2SolvePrismaticJoint(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2StepContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2PRISMATICJOINTS_B2SOLVEPRISMATICJOINT_OFFSET))(a1, a2, a3);
		}

	};
}
