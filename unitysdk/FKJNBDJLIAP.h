#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define FKJNBDJLIAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1429CF10)

inline static constexpr unsigned int FKJNBDJLIAP_TypeDefinitionIndex = 87692;

class FKJNBDJLIAP : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJNBDJLIAP__CTOR_OFFSET))(this);
	}
};
