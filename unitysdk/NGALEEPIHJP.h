#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NGALEEPIHJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA0FD0)

	class NGALEEPIHJP : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::System::String* KBEPAIAFLHL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGALEEPIHJP_CTOR_OFFSET))(this);
		}

	};
