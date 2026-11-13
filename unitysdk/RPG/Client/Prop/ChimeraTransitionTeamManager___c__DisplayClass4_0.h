#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraTransitionTeamManager; }
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4EE580)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS4_0__TRANSITIONTO_B__0_OFFSET UNITYSDK_OFFSET(0x1A4EF1F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraTransitionTeamManager___c__DisplayClass4_0_TypeDefinitionIndex = 81170;

	class ChimeraTransitionTeamManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraTransitionTeamManager* __4__this; // 0x10
		::System::Action* transitionFinishCallback; // 0x18
		::System::Int32 toIndex; // 0x20
		::System::Int32 fromIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _TransitionTo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS4_0__TRANSITIONTO_B__0_OFFSET))(this);
		}

	};
}
