#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBMMKDOEHDB.h"

#define LDEGCFKBNNK__CTOR_OFFSET UNITYSDK_OFFSET(0x186569C0)

inline static constexpr unsigned int LDEGCFKBNNK_TypeDefinitionIndex = 50250;

class LDEGCFKBNNK : public ::CBMMKDOEHDB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEGCFKBNNK__CTOR_OFFSET))(this);
	}
};
