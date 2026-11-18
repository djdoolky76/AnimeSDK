#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LHEEMCHJNNP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DFCDC0)

inline static constexpr unsigned int LHEEMCHJNNP_TypeDefinitionIndex = 76611;

class LHEEMCHJNNP : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEEMCHJNNP__CTOR_OFFSET))(this);
	}
};
