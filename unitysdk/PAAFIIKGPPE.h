#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIPEGPGHAJI.h"

#define PAAFIIKGPPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA166C0)

inline static constexpr unsigned int PAAFIIKGPPE_TypeDefinitionIndex = 93478;

class PAAFIIKGPPE : public ::BIPEGPGHAJI
{
public:
	::System::Single MCIOEMBKHAG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAAFIIKGPPE__CTOR_OFFSET))(this);
	}
};
