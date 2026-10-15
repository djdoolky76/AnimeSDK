#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UnLockTeamLeader; }

#define RPG_GAMECORE_UNLOCKTEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC72840)
#define RPG_GAMECORE_UNLOCKTEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC72850)
#define RPG_GAMECORE_UNLOCKTEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC72800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnLockTeamLeader_TypeDefinitionIndex = 21606;

	class UnLockTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnLockTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnLockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOCKTEAMLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
