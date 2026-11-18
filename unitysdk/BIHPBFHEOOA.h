#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGCIKNJMBOB.h"

#define BIHPBFHEOOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F542850)

inline static constexpr unsigned int BIHPBFHEOOA_TypeDefinitionIndex = 28813;

class BIHPBFHEOOA : public ::PGCIKNJMBOB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHPBFHEOOA__CTOR_OFFSET))(this);
	}
};
