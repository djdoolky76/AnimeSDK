#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define FIBPEDFNIAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1579B8B0)
#define FIBPEDFNIAF_GET_ROOMCARDBEFORE_OFFSET UNITYSDK_OFFSET(0x1579BA50)
#define FIBPEDFNIAF_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x1579BA40)
#define FIBPEDFNIAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1579B8C0)
#define FIBPEDFNIAF_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1579B960)

	class FIBPEDFNIAF : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCardBefore_k__BackingField; // 0x10
		::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::RPG::Client::IRogueTournPersonaRoomCardInGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + FIBPEDFNIAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBPEDFNIAF_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBPEDFNIAF_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBPEDFNIAF_GET_ROOMCARD_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCardBefore()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBPEDFNIAF_GET_ROOMCARDBEFORE_OFFSET))(this);
		}

	};
