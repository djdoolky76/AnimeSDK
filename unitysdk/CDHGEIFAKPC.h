#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define CDHGEIFAKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F307940)

inline static constexpr unsigned int CDHGEIFAKPC_TypeDefinitionIndex = 29018;

class CDHGEIFAKPC : public ::CGGLJLECNJM
{
public:
	::System::UInt64 FALJABIBPNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDHGEIFAKPC__CTOR_OFFSET))(this);
	}
};
