#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KEFFKNKEDMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C54520)

inline static constexpr unsigned int KEFFKNKEDMA_TypeDefinitionIndex = 41293;

class KEFFKNKEDMA : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEFFKNKEDMA__CTOR_OFFSET))(this);
	}
};
