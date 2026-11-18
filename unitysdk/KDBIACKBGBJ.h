#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KDBIACKBGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C539B0)

inline static constexpr unsigned int KDBIACKBGBJ_TypeDefinitionIndex = 70610;

class KDBIACKBGBJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBIACKBGBJ__CTOR_OFFSET))(this);
	}
};
