#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TakeMission; }

#define RPG_GAMECORE_TAKEMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB540D0)
#define RPG_GAMECORE_TAKEMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB540E0)
#define RPG_GAMECORE_TAKEMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB540A0)

namespace RPG::GameCore
{
	class TakeMission : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakeMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TakeMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TakeMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAKEMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
