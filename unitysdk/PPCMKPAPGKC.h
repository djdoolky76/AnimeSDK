#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PPCMKPAPGKC__CTOR_OFFSET UNITYSDK_OFFSET(0x20068370)

inline static constexpr unsigned int PPCMKPAPGKC_TypeDefinitionIndex = 6969;

class PPCMKPAPGKC : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCMKPAPGKC__CTOR_OFFSET))(this);
	}
};
