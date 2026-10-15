#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LMPDPBHFNJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C91C090)

	class LMPDPBHFNJO : public ::System::Object
	{
	public:
		::System::UInt32 AHNBPKAGAIL; // 0x10
		::System::UInt32 LGLNBDKFBKB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPDPBHFNJO_CTOR_OFFSET))(this);
		}

	};
