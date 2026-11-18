#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABONPELIB.h"

#define MNLOAKBOOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x12743D00)

inline static constexpr unsigned int MNLOAKBOOFE_TypeDefinitionIndex = 80301;

class MNLOAKBOOFE : public ::BKABONPELIB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLOAKBOOFE__CTOR_OFFSET))(this);
	}
};
