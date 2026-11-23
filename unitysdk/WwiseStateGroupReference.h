#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISESTATEGROUPREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x19CD3A0)
#define WWISESTATEGROUPREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseStateGroupReference_TypeDefinitionIndex = 21563;

class WwiseStateGroupReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEGROUPREFERENCE__CTOR_OFFSET))(this);
	}

	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISESTATEGROUPREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}
};
