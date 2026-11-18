#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OCKFCFGIDIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1005B710)

inline static constexpr unsigned int OCKFCFGIDIE_TypeDefinitionIndex = 46034;

class OCKFCFGIDIE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKFCFGIDIE__CTOR_OFFSET))(this);
	}
};
