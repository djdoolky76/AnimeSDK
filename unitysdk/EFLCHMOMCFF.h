#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EFLCHMOMCFF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A87640)

inline static constexpr unsigned int EFLCHMOMCFF_TypeDefinitionIndex = 47332;

class EFLCHMOMCFF : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLCHMOMCFF__CTOR_OFFSET))(this);
	}
};
