#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define EDIEJFOCPDA__CTOR_OFFSET UNITYSDK_OFFSET(0x20068310)

inline static constexpr unsigned int EDIEJFOCPDA_TypeDefinitionIndex = 6965;

class EDIEJFOCPDA : public ::System::Attribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIEJFOCPDA__CTOR_OFFSET))(this);
	}
};
