#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNOEJBLCINK__CTOR_OFFSET UNITYSDK_OFFSET(0x155C28C0)

inline static constexpr unsigned int JNOEJBLCINK_TypeDefinitionIndex = 80206;

class JNOEJBLCINK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOEJBLCINK__CTOR_OFFSET))(this);
	}
};
