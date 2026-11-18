#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CDDPJFPHIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1B9B0)

inline static constexpr unsigned int CDDPJFPHIOC_TypeDefinitionIndex = 82335;

class CDDPJFPHIOC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDPJFPHIOC__CTOR_OFFSET))(this);
	}
};
