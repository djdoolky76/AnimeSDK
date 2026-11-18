#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JONEKEPEJIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC8D80)

inline static constexpr unsigned int JONEKEPEJIH_TypeDefinitionIndex = 28941;

class JONEKEPEJIH : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JONEKEPEJIH__CTOR_OFFSET))(this);
	}
};
