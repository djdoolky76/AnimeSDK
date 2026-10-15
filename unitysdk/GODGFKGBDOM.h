#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GODGFKGBDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6483B0)

	class GODGFKGBDOM : public ::System::Object
	{
	public:
		::System::UInt32 CABBFBKCBCE; // 0x10
		::System::Int32 JGLNCOJIIHA; // 0x14
		::System::Int32 MNDFOPKBHKP; // 0x18
		::System::Int32 CFNAKPADAEB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODGFKGBDOM_CTOR_OFFSET))(this);
		}

	};
