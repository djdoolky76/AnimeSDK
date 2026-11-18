#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABCLPCFBFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1349FA00)

inline static constexpr unsigned int ABCLPCFBFBO_TypeDefinitionIndex = 89676;

class ABCLPCFBFBO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCLPCFBFBO__CTOR_OFFSET))(this);
	}
};
