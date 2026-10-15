#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;

#define OBCBNMHLAJA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD372C0)
#define OBCBNMHLAJA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD37160)

	class OBCBNMHLAJA : public ::System::Object
	{
	public:
		::KFELGAIGHAP* FHNFLOPBOAG; // 0x10
		::KFELGAIGHAP* GEJDEFABOJM; // 0x18
		::System::Boolean OOPCCJLOGEG; // 0x20
		::System::Boolean FJOJGCGNNOO; // 0x21
		::System::Boolean LAMKDFKBGFA; // 0x22
		::System::Byte _padding0[0x1];
		::System::Int32 GMDBHJKEAEI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBNMHLAJA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBNMHLAJA_DISPOSE_OFFSET))(this);
		}

	};
