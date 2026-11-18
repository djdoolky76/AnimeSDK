#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJPBCLJDOKA.h"

#define CPMCFNNFLEN__CTOR_OFFSET UNITYSDK_OFFSET(0x18318530)

inline static constexpr unsigned int CPMCFNNFLEN_TypeDefinitionIndex = 87457;

class CPMCFNNFLEN : public ::OJPBCLJDOKA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMCFNNFLEN__CTOR_OFFSET))(this);
	}
};
