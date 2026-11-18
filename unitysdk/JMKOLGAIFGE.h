#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define JMKOLGAIFGE__CTOR_OFFSET UNITYSDK_OFFSET(0x152AE900)

inline static constexpr unsigned int JMKOLGAIFGE_TypeDefinitionIndex = 50367;

class JMKOLGAIFGE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKOLGAIFGE__CTOR_OFFSET))(this);
	}
};
