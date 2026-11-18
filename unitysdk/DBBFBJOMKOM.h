#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBBFBJOMKOM__CTOR_OFFSET UNITYSDK_OFFSET(0x153550D0)

inline static constexpr unsigned int DBBFBJOMKOM_TypeDefinitionIndex = 92278;

class DBBFBJOMKOM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBBFBJOMKOM__CTOR_OFFSET))(this);
	}
};
