#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KMBLGMHPHKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D18B0)

inline static constexpr unsigned int KMBLGMHPHKL_TypeDefinitionIndex = 88697;

class KMBLGMHPHKL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBLGMHPHKL__CTOR_OFFSET))(this);
	}
};
