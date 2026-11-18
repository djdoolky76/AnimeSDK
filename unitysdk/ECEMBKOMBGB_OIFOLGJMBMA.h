#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECEMBKOMBGB;
class IEEFHIBKECH;

#define ECEMBKOMBGB_OIFOLGJMBMA_GIEJAOBNJCH_OFFSET UNITYSDK_OFFSET(0x10F1D2B0)
#define ECEMBKOMBGB_OIFOLGJMBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x10F1D2A0)

inline static constexpr unsigned int ECEMBKOMBGB_OIFOLGJMBMA_TypeDefinitionIndex = 77244;

class ECEMBKOMBGB_OIFOLGJMBMA : public ::System::Object
{
public:
	::IEEFHIBKECH* OCALHHLFBAF; // 0x10
	::ECEMBKOMBGB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB_OIFOLGJMBMA__CTOR_OFFSET))(this);
	}

	::System::Void GIEJAOBNJCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEMBKOMBGB_OIFOLGJMBMA_GIEJAOBNJCH_OFFSET))(this);
	}
};
