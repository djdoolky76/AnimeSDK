#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CEIELOPNPOI__CTOR_OFFSET UNITYSDK_OFFSET(0x14F1EE60)

inline static constexpr unsigned int CEIELOPNPOI_TypeDefinitionIndex = 75974;

class CEIELOPNPOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIELOPNPOI__CTOR_OFFSET))(this);
	}
};
