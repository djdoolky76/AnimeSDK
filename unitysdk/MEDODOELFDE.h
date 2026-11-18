#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MEDODOELFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D73270)

inline static constexpr unsigned int MEDODOELFDE_TypeDefinitionIndex = 53506;

class MEDODOELFDE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDODOELFDE__CTOR_OFFSET))(this);
	}
};
