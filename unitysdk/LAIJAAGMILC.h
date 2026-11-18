#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LAIJAAGMILC__CTOR_OFFSET UNITYSDK_OFFSET(0x16831E80)

inline static constexpr unsigned int LAIJAAGMILC_TypeDefinitionIndex = 88208;

class LAIJAAGMILC : public ::System::Object
{
public:
	::System::Int32 MMEKEHEOGAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIJAAGMILC__CTOR_OFFSET))(this);
	}
};
