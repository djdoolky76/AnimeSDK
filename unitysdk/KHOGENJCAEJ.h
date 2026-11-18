#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHOGENJCAEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CC730)

inline static constexpr unsigned int KHOGENJCAEJ_TypeDefinitionIndex = 86896;

class KHOGENJCAEJ : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOGENJCAEJ__CTOR_OFFSET))(this);
	}
};
