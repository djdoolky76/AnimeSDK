#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECEMBKOMBGB;
class IEEFHIBKECH;

#define ECEMBKOMBGB_FDBNOBLLJJI_GJMEDDIKLJK_OFFSET UNITYSDK_OFFSET(0x10F1D270)
#define ECEMBKOMBGB_FDBNOBLLJJI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1D260)

inline static constexpr unsigned int ECEMBKOMBGB_FDBNOBLLJJI_TypeDefinitionIndex = 77245;

class ECEMBKOMBGB_FDBNOBLLJJI : public ::System::Object
{
public:
	::ECEMBKOMBGB* KLHPEBKNIFB; // 0x10
	::IEEFHIBKECH* OCALHHLFBAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB_FDBNOBLLJJI__CTOR_OFFSET))(this);
	}

	::System::Void GJMEDDIKLJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB_FDBNOBLLJJI_GJMEDDIKLJK_OFFSET))(this);
	}
};
