#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AALOAKLDMGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16434460)

inline static constexpr unsigned int AALOAKLDMGE_TypeDefinitionIndex = 57623;

class AALOAKLDMGE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AALOAKLDMGE__CTOR_OFFSET))(this);
	}
};
