#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattlePresetEnhancementConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D559E10)
#define RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D559CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattlePresetEnhancementConfig_TypeDefinitionIndex = 15692;

	class ChenLingBattlePresetEnhancementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 EnhancementID; // 0x10
		::System::UInt32 EnhancementLevel; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePresetEnhancementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePresetEnhancementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPRESETENHANCEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
