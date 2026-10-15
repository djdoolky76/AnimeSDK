#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMFOPIJNNDI.h"
#include "unitysdk/RPG/Client/IsometricViewPuzzleEvent.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define LLPOJMOFPPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB779370)
#define LLPOJMOFPPP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB779380)
#define LLPOJMOFPPP_GET_ANCHORKEY_OFFSET UNITYSDK_OFFSET(0xB7793F0)
#define LLPOJMOFPPP_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB7793D0)
#define LLPOJMOFPPP_SET_ANCHORKEY_OFFSET UNITYSDK_OFFSET(0xB779400)
#define LLPOJMOFPPP_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB7793E0)

inline static constexpr unsigned int LLPOJMOFPPP_TypeDefinitionIndex = 56642;

	class LLPOJMOFPPP : public ::HMFOPIJNNDI
	{
	public:
		::System::String* _AnchorKey_k__BackingField; // 0x18
		::RPG::Client::IsometricViewPuzzleEvent _EventId_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::IsometricViewPuzzleEvent a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::IsometricViewPuzzleEvent, ::System::String*))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::Client::IsometricViewPuzzleEvent get_EventId()
		{
			return ((::RPG::Client::IsometricViewPuzzleEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_EventId(::RPG::Client::IsometricViewPuzzleEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IsometricViewPuzzleEvent))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_SET_EVENTID_OFFSET))(this, a1);
		}

		::System::String* get_AnchorKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_GET_ANCHORKEY_OFFSET))(this);
		}

		::System::Void set_AnchorKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LLPOJMOFPPP_SET_ANCHORKEY_OFFSET))(this, a1);
		}

	};
