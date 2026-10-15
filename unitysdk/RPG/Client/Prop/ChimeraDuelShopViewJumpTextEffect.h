#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraDuelShopViewEffectBase.h"
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder; }
namespace RPG::Client::Prop { class ChimeraDuelShopViewJumpTextEffect_UpgradeEffect; }
namespace System { class Action; }
namespace System { class Nullable; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC732B0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xDC73250)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xDC73270)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xDC73290)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET UNITYSDK_OFFSET(0xDC73A60)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET UNITYSDK_OFFSET(0xDC73260)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET UNITYSDK_OFFSET(0xDC73280)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET UNITYSDK_OFFSET(0xDC732A0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET UNITYSDK_OFFSET(0xDC73780)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET UNITYSDK_OFFSET(0xDC73320)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET UNITYSDK_OFFSET(0xDC732C0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET UNITYSDK_OFFSET(0xDC73710)

namespace RPG::Client::Prop
{
	class ChimeraDuelShopViewJumpTextEffect : public ::RPG::Client::Prop::ChimeraDuelShopViewEffectBase
	{
	public:
		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* _Upgrade_k__BackingField; // 0x10
		::System::Nullable* _DeltaAttack_k__BackingField; // 0x18
		::System::UInt32 _TargetUniqueID; // 0x20
		::System::Nullable* _DeltaHealth_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_CTOR_OFFSET))(this, a1);
		}

		::System::Nullable* get_DeltaAttack()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAATTACK_OFFSET))(this);
		}

		::System::Void set_DeltaAttack(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAATTACK_OFFSET))(this, a1);
		}

		::System::Nullable* get_DeltaHealth()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_DELTAHEALTH_OFFSET))(this);
		}

		::System::Void set_DeltaHealth(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_DELTAHEALTH_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* get_Upgrade()
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_GET_UPGRADE_OFFSET))(this);
		}

		::System::Void set_Upgrade(::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_SET_UPGRADE_OFFSET))(this, a1);
		}

		::System::Void VisitTargets(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_VISITTARGETS_OFFSET))(this, a1);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreate(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect* TryCreateForCoreflame(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_TRYCREATEFORCOREFLAME_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder* PrepareUpgrade(::RPG::Client::ChimeraDuelGameSessionChimera* a1, ::RPG::Client::ChimeraDuelGameSessionChimera* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::Prop::ChimeraDuelShopViewJumpTextEffect_UpgradeBuilder*(*)(::RPG::Client::ChimeraDuelGameSessionChimera*, ::RPG::Client::ChimeraDuelGameSessionChimera*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT_PREPAREUPGRADE_OFFSET))(a1, a2, a3);
		}

		static ::System::Nullable* _IgnoreZero(::System::Int32 a1)
		{
			return ((::System::Nullable*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPVIEWJUMPTEXTEFFECT__IGNOREZERO_OFFSET))(a1);
		}

	};
}
