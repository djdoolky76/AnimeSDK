#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPECLFAEAHB__CTOR_OFFSET UNITYSDK_OFFSET(0x161699E0)

inline static constexpr unsigned int EPECLFAEAHB_TypeDefinitionIndex = 80484;

class EPECLFAEAHB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPECLFAEAHB__CTOR_OFFSET))(this);
	}
};
