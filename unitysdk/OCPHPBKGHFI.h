#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCPHPBKGHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x12921BD0)

inline static constexpr unsigned int OCPHPBKGHFI_TypeDefinitionIndex = 58983;

class OCPHPBKGHFI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPHPBKGHFI__CTOR_OFFSET))(this);
	}
};
