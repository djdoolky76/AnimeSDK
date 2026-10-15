#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryAnimState; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C3FD0)
#define RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C3EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryAnimState_TypeDefinitionIndex = 16029;

	class ClockParkStoryAnimState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartAnim; // 0x10
		::System::String* LoopAnim; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryAnimState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryAnimState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYANIMSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
