#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIGOKBLHCAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF3FA0)

inline static constexpr unsigned int HIGOKBLHCAP_TypeDefinitionIndex = 47506;

class HIGOKBLHCAP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGOKBLHCAP__CTOR_OFFSET))(this);
	}
};
