#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterTeamAppear; }

#define RPG_GAMECORE_MONSTERTEAMAPPEAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BA380)
#define RPG_GAMECORE_MONSTERTEAMAPPEAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BA390)
#define RPG_GAMECORE_MONSTERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BA350)

namespace RPG::GameCore
{
	class MonsterTeamAppear : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Single>* DelayAppearTimeList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterTeamAppear* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterTeamAppear*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEAMAPPEAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
