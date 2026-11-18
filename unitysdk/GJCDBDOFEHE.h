#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define GJCDBDOFEHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE52140)

inline static constexpr unsigned int GJCDBDOFEHE_TypeDefinitionIndex = 93355;

class GJCDBDOFEHE : public ::BIPEGPGHAJI
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJCDBDOFEHE__CTOR_OFFSET))(this);
	}
};
