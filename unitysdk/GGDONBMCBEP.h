#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GGDONBMCBEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DCDA0)

inline static constexpr unsigned int GGDONBMCBEP_TypeDefinitionIndex = 34073;

class GGDONBMCBEP : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDONBMCBEP__CTOR_OFFSET))(this);
	}
};
