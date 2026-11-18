#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KOEGDOLMNCD__CTOR_OFFSET UNITYSDK_OFFSET(0x15229D80)

inline static constexpr unsigned int KOEGDOLMNCD_TypeDefinitionIndex = 70084;

class KOEGDOLMNCD : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEGDOLMNCD__CTOR_OFFSET))(this);
	}
};
