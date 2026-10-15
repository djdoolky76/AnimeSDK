#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace RPG::GameCore { class ClockParkStoryCharacterTriggerAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C41E0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C41F0)
#define RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C41B0)

namespace RPG::GameCore
{
	class ClockParkStoryCharacterTriggerAnimState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::RPG::GameCore::ClockParkStoryAnimState* AnimState; // 0x20
		::System::String* WaitAnimName; // 0x28
		::System::Single WaitAnimNormalized; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* WaittedTriggerString; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryCharacterTriggerAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCHARACTERTRIGGERANIMSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
