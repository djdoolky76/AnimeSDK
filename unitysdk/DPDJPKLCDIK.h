#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DPDJPKLCDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x15880CA0)

inline static constexpr unsigned int DPDJPKLCDIK_TypeDefinitionIndex = 60912;

class DPDJPKLCDIK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDJPKLCDIK__CTOR_OFFSET))(this);
	}
};
