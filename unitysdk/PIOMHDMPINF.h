#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIOMHDMPINF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F4830)

inline static constexpr unsigned int PIOMHDMPINF_TypeDefinitionIndex = 65866;

class PIOMHDMPINF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOMHDMPINF__CTOR_OFFSET))(this);
	}
};
