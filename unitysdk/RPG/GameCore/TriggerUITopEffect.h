#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerUITopEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERUITOPEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5F9E0)
#define RPG_GAMECORE_TRIGGERUITOPEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5FA20)
#define RPG_GAMECORE_TRIGGERUITOPEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5F980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerUITopEffect_TypeDefinitionIndex = 23152;

	class TriggerUITopEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ModifierName; // 0x20
		::RPG::GameCore::UITopEffectType Type; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUITopEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUITopEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerUITopEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerUITopEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERUITOPEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
