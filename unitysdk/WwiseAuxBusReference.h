#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A2F3E384E505AFEB.h"
#include "unitysdk/WwiseObjectReference.h"

#define WWISEAUXBUSREFERENCE_E54861D6C29167A7_OFFSET UNITYSDK_OFFSET(0x165D460)
#define WWISEAUXBUSREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x29137A0)

inline static constexpr unsigned int WwiseAuxBusReference_TypeDefinitionIndex = 21575;

class WwiseAuxBusReference : public ::WwiseObjectReference
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEAUXBUSREFERENCE__CTOR_OFFSET))(this);
	}

	::A2F3E384E505AFEB E54861D6C29167A7()
	{
		return ((::A2F3E384E505AFEB(*)(::PVOID))((::PBYTE)hIl2Cpp + WWISEAUXBUSREFERENCE_E54861D6C29167A7_OFFSET))(this);
	}
};
