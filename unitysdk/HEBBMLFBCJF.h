#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HEBBMLFBCJF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D88090)

inline static constexpr unsigned int HEBBMLFBCJF_TypeDefinitionIndex = 82919;

class HEBBMLFBCJF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBBMLFBCJF__CTOR_OFFSET))(this);
	}
};
