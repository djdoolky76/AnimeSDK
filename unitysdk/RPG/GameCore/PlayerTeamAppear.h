#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerTeamAppear; }

#define RPG_GAMECORE_PLAYERTEAMAPPEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C6D0)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93C6E0)
#define RPG_GAMECORE_PLAYERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93C6A0)

namespace RPG::GameCore
{
	class PlayerTeamAppear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* DelayAppearTimeList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERTEAMAPPEAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
