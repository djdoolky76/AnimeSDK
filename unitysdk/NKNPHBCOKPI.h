#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEGPHLDNAF.h"

#define NKNPHBCOKPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E771370)

inline static constexpr unsigned int NKNPHBCOKPI_TypeDefinitionIndex = 94640;

class NKNPHBCOKPI : public ::AJEGPHLDNAF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNPHBCOKPI__CTOR_OFFSET))(this);
	}
};
