#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHDOBIDOECN__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47100)

inline static constexpr unsigned int DHDOBIDOECN_TypeDefinitionIndex = 73368;

class DHDOBIDOECN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHDOBIDOECN__CTOR_OFFSET))(this);
	}
};
