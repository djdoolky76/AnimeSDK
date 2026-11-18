#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MELDNFKKBME__CTOR_OFFSET UNITYSDK_OFFSET(0x14D732F0)

inline static constexpr unsigned int MELDNFKKBME_TypeDefinitionIndex = 88282;

class MELDNFKKBME : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELDNFKKBME__CTOR_OFFSET))(this);
	}
};
