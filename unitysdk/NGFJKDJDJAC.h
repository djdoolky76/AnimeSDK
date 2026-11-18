#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNAGFFCCOHI.h"

#define NGFJKDJDJAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12101330)

inline static constexpr unsigned int NGFJKDJDJAC_TypeDefinitionIndex = 74593;

class NGFJKDJDJAC : public ::JNAGFFCCOHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFJKDJDJAC__CTOR_OFFSET))(this);
	}
};
