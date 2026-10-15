#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace RPG::GameCore { class ChenLingBattleLaserSplitConfig; }
namespace RPG::GameCore { class ChenLingBattleTriggerCallback; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5863D0)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5863E0)
#define RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586270)

namespace RPG::GameCore
{
	class ChenLingBattleLaserSplitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ScaleMultiplier; // 0x10
		::System::Single DamageMultiplier; // 0x14
		::System::String* FireAttachPointName; // 0x18
		::RPG::GameCore::ChenLingBattleTriggerCallback* OnHitCallback; // 0x20
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* EffectTiers; // 0x28
		::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* HitEffectTiers; // 0x30
		::System::UInt32 TotalLines; // 0x38
		::System::Single Radius; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleLaserSplitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleLaserSplitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleLaserSplitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleLaserSplitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLELASERSPLITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
