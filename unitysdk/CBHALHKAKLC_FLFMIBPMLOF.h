#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIOGGGIHCAE;
class CBHALHKAKLC;

#define CBHALHKAKLC_FLFMIBPMLOF_BJJIAENKKPM_OFFSET UNITYSDK_OFFSET(0x10E2D8C0)
#define CBHALHKAKLC_FLFMIBPMLOF_ECKNAODNAMI_OFFSET UNITYSDK_OFFSET(0x10E2DE90)
#define CBHALHKAKLC_FLFMIBPMLOF_NDKCIDLBHCD_OFFSET UNITYSDK_OFFSET(0x10E2DF00)
#define CBHALHKAKLC_FLFMIBPMLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x10E2D8B0)

inline static constexpr unsigned int CBHALHKAKLC_FLFMIBPMLOF_TypeDefinitionIndex = 55872;

class CBHALHKAKLC_FLFMIBPMLOF : public ::System::Object
{
public:
	::AIOGGGIHCAE* MGIKMJMLMBE; // 0x10
	::CBHALHKAKLC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FLFMIBPMLOF__CTOR_OFFSET))(this);
	}

	::System::Void BJJIAENKKPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FLFMIBPMLOF_BJJIAENKKPM_OFFSET))(this);
	}

	::System::Void ECKNAODNAMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FLFMIBPMLOF_ECKNAODNAMI_OFFSET))(this);
	}

	::System::Void NDKCIDLBHCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_FLFMIBPMLOF_NDKCIDLBHCD_OFFSET))(this);
	}
};
