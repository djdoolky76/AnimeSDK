#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KJBIFIJCBCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C714DF0)

	class KJBIFIJCBCJ : public ::System::Object
	{
	public:
		::System::Boolean HLPPCHOKOGC; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 GECCGKAHDOB; // 0x14
		::System::UInt64 BNBNFBMOAKN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBIFIJCBCJ_CTOR_OFFSET))(this);
		}

	};
