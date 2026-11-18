#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LFHAMAKIEFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF4840)

inline static constexpr unsigned int LFHAMAKIEFC_TypeDefinitionIndex = 83150;

class LFHAMAKIEFC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHAMAKIEFC__CTOR_OFFSET))(this);
	}
};
