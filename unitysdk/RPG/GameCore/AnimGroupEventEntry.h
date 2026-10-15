#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimGroupEventEntry; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMGROUPEVENTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C4F30)
#define RPG_GAMECORE_ANIMGROUPEVENTENTRY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimGroupEventEntry_TypeDefinitionIndex = 16293;

	class AnimGroupEventEntry : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Single NormalizedTime; // 0x18
		::System::Single ExitNormalizedTime; // 0x1C
		::System::Boolean EnterInTransition; // 0x20
		::System::Boolean ExitInTransition; // 0x21
		::System::Boolean ReEnterOnStateLoop; // 0x22
		::System::Boolean ResetOnSameStateEnter; // 0x23
		::System::Boolean ResetOnSameStateChange; // 0x24
		::System::Boolean DisallowExitTriggeredOnStateUpdate; // 0x25
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTENTRY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnimGroupEventEntry* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnimGroupEventEntry*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMGROUPEVENTENTRY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
