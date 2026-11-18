#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define NLEOMGPIEID__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CE10)

inline static constexpr unsigned int NLEOMGPIEID_TypeDefinitionIndex = 28833;

class NLEOMGPIEID : public ::CGGLJLECNJM
{
public:
	::System::UInt64 OMBMPIALEAK; // 0x20
	::System::UInt64 FALJABIBPNH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLEOMGPIEID__CTOR_OFFSET))(this);
	}
};
