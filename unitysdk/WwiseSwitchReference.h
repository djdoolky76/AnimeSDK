#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseGroupValueObjectReference.h"

class WwiseObjectReference;
class WwiseSwitchGroupReference;

#define WWISESWITCHREFERENCE_A999A18B43511000_OFFSET UNITYSDK_OFFSET(0x2913A30)
#define WWISESWITCHREFERENCE_AB3A89AB03A5AD55_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define WWISESWITCHREFERENCE_B18F7A7BA2E6F82A_OFFSET UNITYSDK_OFFSET(0x2913A20)
#define WWISESWITCHREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x29136C0)
#define WWISESWITCHREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseSwitchReference_TypeDefinitionIndex = 21572;

class WwiseSwitchReference : public ::WwiseGroupValueObjectReference
{
public:
	::WwiseSwitchGroupReference* WwiseSwitchGroupReference; // 0x30

	::System::Void A999A18B43511000(::WwiseObjectReference* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_A999A18B43511000_OFFSET))(this, E937D4885DAA1AE8);
	}

	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE__CTOR_OFFSET))(this);
	}

	::WwiseObjectReference* AB3A89AB03A5AD55()
	{
		return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_AB3A89AB03A5AD55_OFFSET))(this);
	}

	::A2F3E384E505AFEB B18F7A7BA2E6F82A()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESWITCHREFERENCE_B18F7A7BA2E6F82A_OFFSET))(this);
	}
};
