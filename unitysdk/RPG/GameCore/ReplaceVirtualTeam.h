#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReplaceVirtualTeam; }

#define RPG_GAMECORE_REPLACEVIRTUALTEAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D988000)
#define RPG_GAMECORE_REPLACEVIRTUALTEAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D988010)
#define RPG_GAMECORE_REPLACEVIRTUALTEAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987FC0)

namespace RPG::GameCore
{
	class ReplaceVirtualTeam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceVirtualTeam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceVirtualTeam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACEVIRTUALTEAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
