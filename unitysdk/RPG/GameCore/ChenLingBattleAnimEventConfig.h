#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D554680)
#define RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAnimEventConfig_TypeDefinitionIndex = 15718;

	class ChenLingBattleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AnimNormalizedTime; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnAnimEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
