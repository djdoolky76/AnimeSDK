#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2DistanceJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MotorJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2MouseJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2PrismaticJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2RevoluteJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Version.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WeldJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WheelJointDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2WorldDef.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/b2FilterJointDef.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2GETLENGTHUNITSPERMETER_OFFSET UNITYSDK_OFFSET(0xC8C0030)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2GETVERSION_OFFSET UNITYSDK_OFFSET(0xC8BFFB0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2SETLENGTHUNITSPERMETER_OFFSET UNITYSDK_OFFSET(0xC8BFFD0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_10_OFFSET UNITYSDK_OFFSET(0xC8C0130)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_11_OFFSET UNITYSDK_OFFSET(0xC8C0140)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_1_OFFSET UNITYSDK_OFFSET(0xC8C00A0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_2_OFFSET UNITYSDK_OFFSET(0xC8C00B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_3_OFFSET UNITYSDK_OFFSET(0xC8C00C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_4_OFFSET UNITYSDK_OFFSET(0xC8C00D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_5_OFFSET UNITYSDK_OFFSET(0xC8C00E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_6_OFFSET UNITYSDK_OFFSET(0xC8C00F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_7_OFFSET UNITYSDK_OFFSET(0xC8C0100)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_8_OFFSET UNITYSDK_OFFSET(0xC8C0110)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_9_OFFSET UNITYSDK_OFFSET(0xC8C0120)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_OFFSET UNITYSDK_OFFSET(0xC8C0090)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8C0150)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Cores_TypeDefinitionIndex = 37564;

	class B2Cores : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_b2_lengthUnitsPerMeter()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Cores")->GetStaticField(0x55F0);
		}

		// static const ::System::Object B2_SIMD_WIDTH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_CCTOR_OFFSET))();
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Version b2GetVersion()
		{
			return ((::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Version(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2GETVERSION_OFFSET))();
		}

		static ::System::Void b2SetLengthUnitsPerMeter(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2SETLENGTHUNITSPERMETER_OFFSET))(a1);
		}

		static ::System::Single b2GetLengthUnitsPerMeter()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2GETLENGTHUNITSPERMETER_OFFSET))();
		}

		static ::System::Void B2_CHECK_DEF(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WheelJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WeldJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_1_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2PrismaticJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_2_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_3(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2RevoluteJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_3_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_4(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FilterJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_4_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_5(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MouseJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_5_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_6(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2MotorJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_6_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_7(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2DistanceJointDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_7_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_8(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_8_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_9(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_9_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_10(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2WorldDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_10_OFFSET))(a1);
		}

		static ::System::Void B2_CHECK_DEF_11(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef a1)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeDef))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CORES_B2_CHECK_DEF_11_OFFSET))(a1);
		}

	};
}
