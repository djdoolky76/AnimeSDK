#pragma once
#include "unitysdk/unitysdk.h"

#define PNLCFEDDDIO_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D9A6140)
#define PNLCFEDDDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A6190)

inline static constexpr unsigned int PNLCFEDDDIO_TypeDefinitionIndex = 93861;

class PNLCFEDDDIO
{
public:
	::System::Int32 DGGADANAHDC; // 0x28
	::System::Int32 AMHFLBPBKLL; // 0x2C
	::System::UInt32 BKLGNCBNEGM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLCFEDDDIO__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLCFEDDDIO_AIMAIGLGDBE_OFFSET))(this);
	}
};
