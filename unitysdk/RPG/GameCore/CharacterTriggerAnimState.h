#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterTriggerAnimState; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579A30)
#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D579A40)
#define RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5799F0)

namespace RPG::GameCore
{
	class CharacterTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CharacterUniqueName; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetAlias; // 0x20
		::System::Boolean ForceStart; // 0x28
		::System::Boolean AutoExitToDefault; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* AnimStateName; // 0x30
		::RPG::GameCore::DynamicString* AnimStateNameDS; // 0x38
		::System::Single NormalizedTimeStart; // 0x40
		::System::Single NormalizedTransitionDuration; // 0x44
		::System::Single NormalizedTimeWait; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
