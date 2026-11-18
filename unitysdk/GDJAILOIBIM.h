#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GDJAILOIBIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116E3040)
#define GDJAILOIBIM__CTOR_OFFSET UNITYSDK_OFFSET(0x116E2FE0)

inline static constexpr unsigned int GDJAILOIBIM_TypeDefinitionIndex = 76716;

class GDJAILOIBIM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJAILOIBIM__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJAILOIBIM_DISPOSE_OFFSET))(this);
	}
};
