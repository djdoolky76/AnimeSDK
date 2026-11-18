#pragma once
#include "unitysdk/unitysdk.h"

#define DOPMKFBMJKC_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1E71D640)
#define DOPMKFBMJKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71D690)

inline static constexpr unsigned int DOPMKFBMJKC_TypeDefinitionIndex = 93480;

class DOPMKFBMJKC
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x28
	::System::Int32 DLCPIJDBOKP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMKFBMJKC__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPMKFBMJKC_AIMAIGLGDBE_OFFSET))(this);
	}
};
