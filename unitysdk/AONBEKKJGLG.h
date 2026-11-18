#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define AONBEKKJGLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1821DEC0)

inline static constexpr unsigned int AONBEKKJGLG_TypeDefinitionIndex = 39946;

class AONBEKKJGLG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBEKKJGLG__CTOR_OFFSET))(this);
	}
};
