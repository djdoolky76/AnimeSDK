#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LOEOKOBPNBA__CTOR_OFFSET UNITYSDK_OFFSET(0x14037480)

inline static constexpr unsigned int LOEOKOBPNBA_TypeDefinitionIndex = 84805;

class LOEOKOBPNBA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEOKOBPNBA__CTOR_OFFSET))(this);
	}
};
