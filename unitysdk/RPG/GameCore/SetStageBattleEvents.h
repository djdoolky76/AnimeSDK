#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetStageBattleEvents; }
namespace RPG::GameCore { class StageBattleEventConfig; }

#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC28E0)
#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC28F0)
#define RPG_GAMECORE_SETSTAGEBATTLEEVENTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC28B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStageBattleEvents_TypeDefinitionIndex = 23458;

	class SetStageBattleEvents : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>* EventList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStageBattleEvents* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStageBattleEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetStageBattleEvents* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetStageBattleEvents*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTAGEBATTLEEVENTS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
