#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { class String; }

#define FGEKJENHIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157592D0)
#define FGEKJENHIIJ_GET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x15759470)
#define FGEKJENHIIJ_GET_ROOMCARD_OFFSET UNITYSDK_OFFSET(0x15759460)
#define FGEKJENHIIJ_SET_ISFROMCARDWASH_OFFSET UNITYSDK_OFFSET(0x15759480)
#define FGEKJENHIIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x157592E0)
#define FGEKJENHIIJ_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15759380)

	class FGEKJENHIIJ : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaRoomCardInGame* _RoomCard_k__BackingField; // 0x10
		::System::Boolean _IsFromCardWash_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::NHHMEPILLHL a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::NHHMEPILLHL))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* get_RoomCard()
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_GET_ROOMCARD_OFFSET))(this);
		}

		::System::Boolean get_IsFromCardWash()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_GET_ISFROMCARDWASH_OFFSET))(this);
		}

		::System::Void set_IsFromCardWash(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGEKJENHIIJ_SET_ISFROMCARDWASH_OFFSET))(this, a1);
		}

	};
