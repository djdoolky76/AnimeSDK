#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

#define HNMEKNBFJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x15381730)

inline static constexpr unsigned int HNMEKNBFJLI_TypeDefinitionIndex = 63546;

class HNMEKNBFJLI : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMEKNBFJLI__CTOR_OFFSET))(this);
	}
};
