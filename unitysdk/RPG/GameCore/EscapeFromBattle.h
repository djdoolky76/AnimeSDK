#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EscapeFromBattle; }

#define RPG_GAMECORE_ESCAPEFROMBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D681780)
#define RPG_GAMECORE_ESCAPEFROMBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D681790)
#define RPG_GAMECORE_ESCAPEFROMBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D681750)

namespace RPG::GameCore
{
	class EscapeFromBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TriggerNpcMonsterEscape; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EscapeFromBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EscapeFromBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EscapeFromBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ESCAPEFROMBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
