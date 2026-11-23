#pragma once
#include "unitysdk/unitysdk.h"

#define F36326D3497211E2_A2E32EEE42BFFD94_OFFSET UNITYSDK_OFFSET(0x2486770)
#define F36326D3497211E2_F3A8A98F932574AB_OFFSET UNITYSDK_OFFSET(0x2486640)
#define F36326D3497211E2__CTOR_OFFSET UNITYSDK_OFFSET(0x2486890)

inline static constexpr unsigned int F36326D3497211E2_TypeDefinitionIndex = 4533;

class F36326D3497211E2
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F36326D3497211E2__CTOR_OFFSET))(this);
	}

	::System::Void F3A8A98F932574AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F36326D3497211E2_F3A8A98F932574AB_OFFSET))(this);
	}

	::System::Void A2E32EEE42BFFD94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F36326D3497211E2_A2E32EEE42BFFD94_OFFSET))(this);
	}
};
