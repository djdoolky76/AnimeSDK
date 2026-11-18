#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HLBKMCIJCIK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D33190)

inline static constexpr unsigned int HLBKMCIJCIK_TypeDefinitionIndex = 58754;

class HLBKMCIJCIK : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBKMCIJCIK__CTOR_OFFSET))(this);
	}
};
