#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS191_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE396CB0)
#define RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS191_0___TRIGGERPERFORMANCEANDEXITMUSEUM_B__0_OFFSET UNITYSDK_OFFSET(0xE397A80)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumModule___c__DisplayClass191_0_TypeDefinitionIndex = 68273;

	class MuseumModule___c__DisplayClass191_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* adventurePhase; // 0x10
		::System::String* customString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS191_0_CTOR_OFFSET))(this);
		}

		::System::Void __TriggerPerformanceAndExitMuseum_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMMODULE___C__DISPLAYCLASS191_0___TRIGGERPERFORMANCEANDEXITMUSEUM_B__0_OFFSET))(this);
		}

	};
}
