#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NNOCGNKOIHP;

#define NNOCGNKOIHP_FMMNLGEFNDC_DMFBOOHFEPL_OFFSET UNITYSDK_OFFSET(0x10DACCC0)
#define NNOCGNKOIHP_FMMNLGEFNDC__CTOR_OFFSET UNITYSDK_OFFSET(0x10DACCB0)

inline static constexpr unsigned int NNOCGNKOIHP_FMMNLGEFNDC_TypeDefinitionIndex = 79144;

class NNOCGNKOIHP_FMMNLGEFNDC : public ::System::Object
{
public:
	::NNOCGNKOIHP* KLHPEBKNIFB; // 0x10
	::System::Int32 FJHBHALGCKO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOCGNKOIHP_FMMNLGEFNDC__CTOR_OFFSET))(this);
	}

	::System::Boolean DMFBOOHFEPL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOCGNKOIHP_FMMNLGEFNDC_DMFBOOHFEPL_OFFSET))(this);
	}
};
