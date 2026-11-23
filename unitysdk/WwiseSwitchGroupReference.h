#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISESWITCHGROUPREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x2913A20)
#define WWISESWITCHGROUPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseSwitchGroupReference_TypeDefinitionIndex = 21567;

class WwiseSwitchGroupReference : public ::WwiseObjectReference
{
public:
	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHGROUPREFERENCE__CTOR_OFFSET))(this);
	}
};
