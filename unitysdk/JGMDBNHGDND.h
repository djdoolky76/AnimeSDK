#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

#define JGMDBNHGDND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDAE5D0)
#define JGMDBNHGDND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAE580)
#define JGMDBNHGDND_ONNEW_OFFSET UNITYSDK_OFFSET(0x1DDAE6F0)
#define JGMDBNHGDND_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DDAE660)

	class JGMDBNHGDND : public ::System::IO::MemoryStream
	{
	public:
		::System::Boolean LJLAPMEGMEA; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDBNHGDND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGMDBNHGDND_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDBNHGDND_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGMDBNHGDND_ONNEW_OFFSET))(this);
		}

	};
