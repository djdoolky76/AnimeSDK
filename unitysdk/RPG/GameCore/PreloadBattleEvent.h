#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadBattleEvent; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PRELOADBATTLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D911B40)
#define RPG_GAMECORE_PRELOADBATTLEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D911B50)
#define RPG_GAMECORE_PRELOADBATTLEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D911B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadBattleEvent_TypeDefinitionIndex = 22979;

	class PreloadBattleEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* BattleEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADBATTLEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
