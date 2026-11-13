#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UnloadBattleEvent; }

#define RPG_GAMECORE_UNLOADBATTLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED36030)
#define RPG_GAMECORE_UNLOADBATTLEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED36040)
#define RPG_GAMECORE_UNLOADBATTLEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED36000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadBattleEvent_TypeDefinitionIndex = 23405;

	class UnloadBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UnloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UnloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADBATTLEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
