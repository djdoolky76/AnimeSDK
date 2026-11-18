#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define KLOIBEEPCKE__CTOR_OFFSET UNITYSDK_OFFSET(0x157F9390)

inline static constexpr unsigned int KLOIBEEPCKE_TypeDefinitionIndex = 60731;

class KLOIBEEPCKE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOIBEEPCKE__CTOR_OFFSET))(this);
	}
};
