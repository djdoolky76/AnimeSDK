#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KFLAGNBAPOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2C6270)

inline static constexpr unsigned int KFLAGNBAPOD_TypeDefinitionIndex = 79788;

class KFLAGNBAPOD : public ::System::Object
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFLAGNBAPOD__CCTOR_OFFSET))();
	}
};
