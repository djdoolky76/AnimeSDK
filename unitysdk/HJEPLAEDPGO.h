#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HJEPLAEDPGO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A1B010)

inline static constexpr unsigned int HJEPLAEDPGO_TypeDefinitionIndex = 72056;

class HJEPLAEDPGO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEPLAEDPGO__CTOR_OFFSET))(this);
	}
};
