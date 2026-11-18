#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMHIOADBIPH.h"

#define IJDMEKNFDHL__CTOR_OFFSET UNITYSDK_OFFSET(0xB937680)

inline static constexpr unsigned int IJDMEKNFDHL_TypeDefinitionIndex = 60257;

class IJDMEKNFDHL : public ::JMHIOADBIPH
{
public:
	::System::Int32 JIMILCJFBCI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMEKNFDHL__CTOR_OFFSET))(this);
	}
};
