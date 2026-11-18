#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OEOOCCLAIAP__CTOR_OFFSET UNITYSDK_OFFSET(0xE149380)

inline static constexpr unsigned int OEOOCCLAIAP_TypeDefinitionIndex = 68187;

class OEOOCCLAIAP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEOOCCLAIAP__CTOR_OFFSET))(this);
	}
};
