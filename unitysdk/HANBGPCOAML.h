#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HANBGPCOAML__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF8110)

inline static constexpr unsigned int HANBGPCOAML_TypeDefinitionIndex = 18736;

class HANBGPCOAML : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANBGPCOAML__CTOR_OFFSET))(this);
	}
};
