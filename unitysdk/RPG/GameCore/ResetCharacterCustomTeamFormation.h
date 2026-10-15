#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetCharacterCustomTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D2F0)
#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95D300)
#define RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95D2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetCharacterCustomTeamFormation_TypeDefinitionIndex = 22647;

	class ResetCharacterCustomTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean DelyRefresh; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetCharacterCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetCharacterCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETCHARACTERCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
