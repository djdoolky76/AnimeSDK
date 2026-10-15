#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGIGMPBIBO;
namespace System { class String; }

#define BAFPKHMAKID_CTOR_OFFSET UNITYSDK_OFFSET(0x15BDCB60)
#define BAFPKHMAKID_GET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x15BDCB50)
#define BAFPKHMAKID_GET_HOST_OFFSET UNITYSDK_OFFSET(0x15BDCB10)
#define BAFPKHMAKID_GET_PORT_OFFSET UNITYSDK_OFFSET(0x15BDCB30)
#define BAFPKHMAKID_GET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x15BDCAF0)
#define BAFPKHMAKID_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BDCA70)
#define BAFPKHMAKID_SET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x15BDCB40)
#define BAFPKHMAKID_SET_HOST_OFFSET UNITYSDK_OFFSET(0x15BDCB00)
#define BAFPKHMAKID_SET_PORT_OFFSET UNITYSDK_OFFSET(0x15BDCB20)
#define BAFPKHMAKID_SET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x15BDCAE0)

	class BAFPKHMAKID : public ::System::Object
	{
	public:
		::System::String* _FightToken_k__BackingField; // 0x10
		::System::String* _Host_k__BackingField; // 0x18
		::System::UInt64 _RoomUID_k__BackingField; // 0x20
		::System::UInt16 _Port_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPKHMAKID_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::HPGIGMPBIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGIGMPBIBO*))((::PBYTE)hIl2Cpp + BAFPKHMAKID_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void set_RoomUID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BAFPKHMAKID_SET_ROOMUID_OFFSET))(this, a1);
		}

		::System::UInt64 get_RoomUID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPKHMAKID_GET_ROOMUID_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAFPKHMAKID_SET_HOST_OFFSET))(this, a1);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPKHMAKID_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Port(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + BAFPKHMAKID_SET_PORT_OFFSET))(this, a1);
		}

		::System::UInt16 get_Port()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPKHMAKID_GET_PORT_OFFSET))(this);
		}

		::System::Void set_FightToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAFPKHMAKID_SET_FIGHTTOKEN_OFFSET))(this, a1);
		}

		::System::String* get_FightToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAFPKHMAKID_GET_FIGHTTOKEN_OFFSET))(this);
		}

	};
