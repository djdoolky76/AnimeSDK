#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class INEJBHOCLDB;

#define GDBADFKOFFG_KJNOBKFNBEG_OOOCCGHCAOH_OFFSET UNITYSDK_OFFSET(0x13249440)
#define GDBADFKOFFG_KJNOBKFNBEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13249430)

inline static constexpr unsigned int GDBADFKOFFG_KJNOBKFNBEG_TypeDefinitionIndex = 74133;

class GDBADFKOFFG_KJNOBKFNBEG : public ::System::Object
{
public:
	::INEJBHOCLDB* DPPFJDCEIOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_KJNOBKFNBEG__CTOR_OFFSET))(this);
	}

	::System::Void OOOCCGHCAOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_KJNOBKFNBEG_OOOCCGHCAOH_OFFSET))(this);
	}
};
