#pragma once
#include "unitysdk/unitysdk.h"

#define MBKNJNFHCFB_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D9C0ED0)
#define MBKNJNFHCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C0F20)

inline static constexpr unsigned int MBKNJNFHCFB_TypeDefinitionIndex = 93849;

class MBKNJNFHCFB
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x28
	::System::Int32 EKOHIAJDIEC; // 0x2C
	::System::Int32 JBNIIHBJAJD; // 0x30
	::System::Int32 AMHFLBPBKLL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKNJNFHCFB__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKNJNFHCFB_AIMAIGLGDBE_OFFSET))(this);
	}
};
