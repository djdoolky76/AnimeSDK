#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CCIFBECMLCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC4A80)

inline static constexpr unsigned int CCIFBECMLCJ_TypeDefinitionIndex = 74262;

class CCIFBECMLCJ : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIFBECMLCJ__CTOR_OFFSET))(this);
	}
};
