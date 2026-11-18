#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define PNBMHLNFLML__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2AA80)

inline static constexpr unsigned int PNBMHLNFLML_TypeDefinitionIndex = 89586;

class PNBMHLNFLML : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNBMHLNFLML__CTOR_OFFSET))(this);
	}
};
