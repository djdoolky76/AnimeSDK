#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISERTPCREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x2913940)
#define WWISERTPCREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseRtpcReference_TypeDefinitionIndex = 21560;

class WwiseRtpcReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISERTPCREFERENCE__CTOR_OFFSET))(this);
	}

	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISERTPCREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}
};
