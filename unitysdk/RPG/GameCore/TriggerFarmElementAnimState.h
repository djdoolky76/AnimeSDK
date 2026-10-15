#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerFarmElementAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC52C10)
#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC52C20)
#define RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC52BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerFarmElementAnimState_TypeDefinitionIndex = 22092;

	class TriggerFarmElementAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AnimStateName; // 0x18
		::System::Single NormalizedTimeStart; // 0x20
		::System::Single TransitionDuration; // 0x24
		::System::Boolean FixedTransitionDuration; // 0x28
		::System::Boolean WatiAnimFinish; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerFarmElementAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerFarmElementAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERFARMELEMENTANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
