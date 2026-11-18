#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DEIHJIOMPKO__CTOR_OFFSET UNITYSDK_OFFSET(0x13E40180)

inline static constexpr unsigned int DEIHJIOMPKO_TypeDefinitionIndex = 52713;

class DEIHJIOMPKO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIHJIOMPKO__CTOR_OFFSET))(this);
	}
};
