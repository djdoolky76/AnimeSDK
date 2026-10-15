#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersExcelValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ADE60)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7ADE70)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ADD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersExcelValueGetterConfig_TypeDefinitionIndex = 21420;

	class LittleGameAbilityTeamTowersExcelValueGetterConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::Int32 ParamIndex; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSEXCELVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
