#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersForbidRotateEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F25C3E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F25C3F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F25C350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersForbidRotateEffectConfig_TypeDefinitionIndex = 21754;

	class LittleGameAbilityTeamTowersForbidRotateEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
