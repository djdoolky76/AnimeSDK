#pragma once
#include "unitysdk/unitysdk.h"

#define HNNHKPKCMJD_LKMPGINCCBI_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2A3F0)

	struct alignas(4) HNNHKPKCMJD_LKMPGINCCBI
	{
		::System::UInt32 KNEFCBAALDF; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 AFMHLAGCIGD; // 0x18
		::System::UInt64 KIPHACEMCNG; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + HNNHKPKCMJD_LKMPGINCCBI_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
