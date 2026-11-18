#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EEEBHAGDBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x14149840)

inline static constexpr unsigned int EEEBHAGDBOB_TypeDefinitionIndex = 57053;

class EEEBHAGDBOB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEEBHAGDBOB__CTOR_OFFSET))(this);
	}
};
