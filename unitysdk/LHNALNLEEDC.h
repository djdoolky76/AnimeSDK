#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LHNALNLEEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15252F60)

inline static constexpr unsigned int LHNALNLEEDC_TypeDefinitionIndex = 60640;

class LHNALNLEEDC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNALNLEEDC__CTOR_OFFSET))(this);
	}
};
