#pragma once
#include "unitysdk/unitysdk.h"

#define F65599DE982C83F0_A2E32EEE42BFFD94_OFFSET UNITYSDK_OFFSET(0x25248D0)
#define F65599DE982C83F0_F3A8A98F932574AB_OFFSET UNITYSDK_OFFSET(0x25247C0)
#define F65599DE982C83F0__CTOR_OFFSET UNITYSDK_OFFSET(0x25249F0)

inline static constexpr unsigned int F65599DE982C83F0_TypeDefinitionIndex = 5327;

class F65599DE982C83F0
{
public:
	::System::Void A2E32EEE42BFFD94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F65599DE982C83F0_A2E32EEE42BFFD94_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F65599DE982C83F0__CTOR_OFFSET))(this);
	}

	::System::Void F3A8A98F932574AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F65599DE982C83F0_F3A8A98F932574AB_OFFSET))(this);
	}
};
