#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODBPKEIPHC;

#define IODBPKEIPHC_ABFFGDKNINK_MHDDGPHOKNF_OFFSET UNITYSDK_OFFSET(0x141FF1A0)
#define IODBPKEIPHC_ABFFGDKNINK__CTOR_OFFSET UNITYSDK_OFFSET(0x141FF190)

inline static constexpr unsigned int IODBPKEIPHC_ABFFGDKNINK_TypeDefinitionIndex = 75691;

class IODBPKEIPHC_ABFFGDKNINK : public ::System::Object
{
public:
	::IODBPKEIPHC* KLHPEBKNIFB; // 0x10
	::System::Int32 OPPBAOFBOLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODBPKEIPHC_ABFFGDKNINK__CTOR_OFFSET))(this);
	}

	::System::Void MHDDGPHOKNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODBPKEIPHC_ABFFGDKNINK_MHDDGPHOKNF_OFFSET))(this);
	}
};
