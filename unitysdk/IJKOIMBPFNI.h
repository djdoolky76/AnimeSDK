#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAIGDLAGBLF.h"
#include "unitysdk/OIDGABHGFKB.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define IJKOIMBPFNI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2E81F10)

	struct alignas(8) IJKOIMBPFNI
	{
		::Unity::Collections::NativeArray_1<::MAIGDLAGBLF> AEDLPMMANHD; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::OIDGABHGFKB> NDGNDPEFLKA; // 0x20
		::System::Byte _padding1[0x8];
		::System::Single GBJBPHEGNDK; // 0x30
		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IJKOIMBPFNI_EXECUTE_OFFSET))(this, a1);
		}

	};
