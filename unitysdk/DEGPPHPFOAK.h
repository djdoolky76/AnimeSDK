#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DEGPPHPFOAK__CTOR_OFFSET UNITYSDK_OFFSET(0x120686A0)

inline static constexpr unsigned int DEGPPHPFOAK_TypeDefinitionIndex = 64760;

class DEGPPHPFOAK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGPPHPFOAK__CTOR_OFFSET))(this);
	}
};
