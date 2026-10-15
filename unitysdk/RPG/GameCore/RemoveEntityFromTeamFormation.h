#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveEntityFromTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9577F0)
#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D957800)
#define RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9577C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEntityFromTeamFormation_TypeDefinitionIndex = 22638;

	class RemoveEntityFromTeamFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean RemainInTeam; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEntityFromTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEntityFromTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEntityFromTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEENTITYFROMTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
