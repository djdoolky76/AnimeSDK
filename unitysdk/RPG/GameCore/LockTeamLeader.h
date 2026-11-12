#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockTeamLeader; }

#define RPG_GAMECORE_LOCKTEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA35010)
#define RPG_GAMECORE_LOCKTEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA35020)
#define RPG_GAMECORE_LOCKTEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA34FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockTeamLeader_TypeDefinitionIndex = 21993;

	class LockTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKTEAMLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
