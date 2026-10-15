#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NNAGJHEBNJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9AA00)
#define NNAGJHEBNJD_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xBC9A9C0)
#define NNAGJHEBNJD_GET_ONLINEID_OFFSET UNITYSDK_OFFSET(0xBC9A9E0)
#define NNAGJHEBNJD_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0xBC9A9D0)
#define NNAGJHEBNJD_SET_ONLINEID_OFFSET UNITYSDK_OFFSET(0xBC9A9F0)

	class NNAGJHEBNJD : public ::System::Object
	{
	public:
		::System::String* _AccountID_k__BackingField; // 0x10
		::System::String* _OnlineID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGJHEBNJD_CTOR_OFFSET))(this);
		}

		::System::String* get_AccountID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGJHEBNJD_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNAGJHEBNJD_SET_ACCOUNTID_OFFSET))(this, a1);
		}

		::System::String* get_OnlineID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAGJHEBNJD_GET_ONLINEID_OFFSET))(this);
		}

		::System::Void set_OnlineID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNAGJHEBNJD_SET_ONLINEID_OFFSET))(this, a1);
		}

	};
