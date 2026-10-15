#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define JNHLMGOBJLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB280120)

	class JNHLMGOBJLH : public ::System::Object
	{
	public:
		::System::String* InviteCode; // 0x10
		::System::UInt32 InviteCntCur; // 0x18
		::System::UInt32 InviteCntMax; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHLMGOBJLH_CTOR_OFFSET))(this);
		}

	};
