#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseGroupValueObjectReference.h"

class WwiseObjectReference;
class WwiseStateGroupReference;

#define WWISESTATEREFERENCE_A999A18B43511000_OFFSET UNITYSDK_OFFSET(0x2913950)
#define WWISESTATEREFERENCE_AB3A89AB03A5AD55_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define WWISESTATEREFERENCE_B18F7A7BA2E6F82A_OFFSET UNITYSDK_OFFSET(0x19CD3A0)
#define WWISESTATEREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x1FC6CD0)
#define WWISESTATEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseStateReference_TypeDefinitionIndex = 21573;

class WwiseStateReference : public ::WwiseGroupValueObjectReference
{
public:
	::WwiseStateGroupReference* WwiseStateGroupReference; // 0x30

	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}

	::WwiseObjectReference* AB3A89AB03A5AD55()
	{
		return ((::WwiseObjectReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_AB3A89AB03A5AD55_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE__CTOR_OFFSET))(this);
	}

	::A2F3E384E505AFEB B18F7A7BA2E6F82A()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_B18F7A7BA2E6F82A_OFFSET))(this);
	}

	::System::Void A999A18B43511000(::WwiseObjectReference* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::WwiseObjectReference*))((::PBYTE)hIl2Cpp + WWISESTATEREFERENCE_A999A18B43511000_OFFSET))(this, E937D4885DAA1AE8);
	}
};
