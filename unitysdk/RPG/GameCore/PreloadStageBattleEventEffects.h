#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PreloadStageBattleEventEffects; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9129A0)
#define RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9129B0)
#define RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D912970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadStageBattleEventEffects_TypeDefinitionIndex = 23431;

	class PreloadStageBattleEventEffects : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadStageBattleEventEffects* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadStageBattleEventEffects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PreloadStageBattleEventEffects* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PreloadStageBattleEventEffects*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PRELOADSTAGEBATTLEEVENTEFFECTS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
