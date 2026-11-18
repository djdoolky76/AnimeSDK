#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CPOELCBCIDP__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1EB70)

inline static constexpr unsigned int CPOELCBCIDP_TypeDefinitionIndex = 64211;

class CPOELCBCIDP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOELCBCIDP__CTOR_OFFSET))(this);
	}
};
