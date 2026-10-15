#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoAnimatorStateSimpleEvent_Event.h"
namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class MonoAnimatorStateSimpleEvent; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_CTOR_OFFSET UNITYSDK_OFFSET(0xD725640)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xD7255E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_Event_SetCharacterAtlasFace_TypeDefinitionIndex = 68523;

	class MonoAnimatorStateSimpleEvent_Event_SetCharacterAtlasFace : public ::RPG::Client::MonoAnimatorStateSimpleEvent_Event
	{
	public:
		::System::Int32 EmotionIndex; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::CharacterAtlasFace* AtlasFace; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_CTOR_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK(::RPG::Client::MonoAnimatorStateSimpleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAnimatorStateSimpleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_EVENT_SETCHARACTERATLASFACE_OIBKPJEGPOK_OFFSET))(this, a1);
		}

	};
}
