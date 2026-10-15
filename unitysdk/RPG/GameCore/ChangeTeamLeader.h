#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeTeamLeader; }

#define RPG_GAMECORE_CHANGETEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5687D0)
#define RPG_GAMECORE_CHANGETEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5687E0)
#define RPG_GAMECORE_CHANGETEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D568790)

namespace RPG::GameCore
{
	class ChangeTeamLeader : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGETEAMLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
