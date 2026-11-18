#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KBNPANPAFMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13C51530)

inline static constexpr unsigned int KBNPANPAFMJ_TypeDefinitionIndex = 86282;

class KBNPANPAFMJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNPANPAFMJ__CTOR_OFFSET))(this);
	}
};
