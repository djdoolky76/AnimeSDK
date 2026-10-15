#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreatePlayerTeam; }

#define RPG_GAMECORE_CREATEPLAYERTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B7260)
#define RPG_GAMECORE_CREATEPLAYERTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B7270)
#define RPG_GAMECORE_CREATEPLAYERTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B7220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreatePlayerTeam_TypeDefinitionIndex = 23395;

	class CreatePlayerTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x18
		::System::Boolean Hide; // 0x1C
		::System::Boolean ForbiddenPassiveSkill; // 0x1D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePlayerTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePlayerTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreatePlayerTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreatePlayerTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEPLAYERTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
