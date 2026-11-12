#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ChainId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ShapeId.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STOREBODYID_OFFSET UNITYSDK_OFFSET(0x1D9BE8B0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STORECHAINID_OFFSET UNITYSDK_OFFSET(0x1D9BE8D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STOREJOINTID_OFFSET UNITYSDK_OFFSET(0x1D9BE8E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STORESHAPEID_OFFSET UNITYSDK_OFFSET(0x1D9BE8C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9BE870)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1D9BE890)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9BE850)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_1_OFFSET UNITYSDK_OFFSET(0x1D9BE810)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_2_OFFSET UNITYSDK_OFFSET(0x1D9BE820)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_3_OFFSET UNITYSDK_OFFSET(0x1D9BE830)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_4_OFFSET UNITYSDK_OFFSET(0x1D9BE840)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_OFFSET UNITYSDK_OFFSET(0x1D9BE800)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_1_OFFSET UNITYSDK_OFFSET(0x1D9BE7D0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_2_OFFSET UNITYSDK_OFFSET(0x1D9BE7E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_3_OFFSET UNITYSDK_OFFSET(0x1D9BE7F0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_OFFSET UNITYSDK_OFFSET(0x1D9BE7C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9BE8F0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Ids_TypeDefinitionIndex = 37617;

	class B2Ids : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId* StaticGet_b2_nullChainId()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Ids")->GetStaticField(0x17D70);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId* StaticGet_b2_nullContactId()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Ids")->GetStaticField(0x17D88);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId* StaticGet_b2_nullJointId()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Ids")->GetStaticField(0x17DA0);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId* StaticGet_b2_nullShapeId()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Ids")->GetStaticField(0x17DB8);
		}

		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId* StaticGet_b2_nullBodyId()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId*)UnitySDK::FromName("RPG.LittleGameShare.HoyoPhysics.Box2D", "B2Ids")->GetStaticField(0x17DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_CCTOR_OFFSET))();
		}

		static ::System::Boolean B2_IS_NULL(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NULL_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_1_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NULL_2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_2_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NULL_3(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NULL_3_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NON_NULL(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NON_NULL_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_1_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NON_NULL_2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_2_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NON_NULL_3(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_3_OFFSET))(a1);
		}

		static ::System::Boolean B2_IS_NON_NULL_4(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a1)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_IS_NON_NULL_4_OFFSET))(a1);
		}

		static ::System::Boolean B2_ID_EQUALS(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_OFFSET))(a1, a2);
		}

		static ::System::Boolean B2_ID_EQUALS_1(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean B2_ID_EQUALS_2(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId a2)
		{
			return ((::System::Boolean(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2_ID_EQUALS_2_OFFSET))(a1, a2);
		}

		static ::System::UInt64 b2StoreBodyId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId a1)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STOREBODYID_OFFSET))(a1);
		}

		static ::System::UInt64 b2StoreShapeId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId a1)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ShapeId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STORESHAPEID_OFFSET))(a1);
		}

		static ::System::UInt64 b2StoreChainId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId a1)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ChainId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STORECHAINID_OFFSET))(a1);
		}

		static ::System::UInt64 b2StoreJointId(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId a1)
		{
			return ((::System::UInt64(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2IDS_B2STOREJOINTID_OFFSET))(a1);
		}

	};
}
