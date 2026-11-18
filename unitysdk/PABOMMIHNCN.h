#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PABOMMIHNCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBA7B0)

inline static constexpr unsigned int PABOMMIHNCN_TypeDefinitionIndex = 29041;

class PABOMMIHNCN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABOMMIHNCN__CTOR_OFFSET))(this);
	}
};
