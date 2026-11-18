#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FCOGKFMPNGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14ABC750)

inline static constexpr unsigned int FCOGKFMPNGN_TypeDefinitionIndex = 48862;

class FCOGKFMPNGN : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOGKFMPNGN__CTOR_OFFSET))(this);
	}
};
