#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ANGACDMAEHC__CTOR_OFFSET UNITYSDK_OFFSET(0x16D97D90)

inline static constexpr unsigned int ANGACDMAEHC_TypeDefinitionIndex = 72304;

class ANGACDMAEHC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGACDMAEHC__CTOR_OFFSET))(this);
	}
};
