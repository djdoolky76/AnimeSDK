#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OEOOCCDLCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE38D90)

	class OEOOCCDLCKJ : public ::System::Object
	{
	public:
		::System::UInt32 BIOFDPICHLC; // 0x10
		::System::UInt32 NMBKAIEIAPE; // 0x14
		::System::UInt32 GLABGHEAGMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOOCCDLCKJ_CTOR_OFFSET))(this);
		}

	};
