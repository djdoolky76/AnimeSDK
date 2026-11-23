#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISETRIGGERREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x2913790)
#define WWISETRIGGERREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseTriggerReference_TypeDefinitionIndex = 21577;

class WwiseTriggerReference : public ::WwiseObjectReference
{
public:
	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISETRIGGERREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISETRIGGERREFERENCE__CTOR_OFFSET))(this);
	}
};
