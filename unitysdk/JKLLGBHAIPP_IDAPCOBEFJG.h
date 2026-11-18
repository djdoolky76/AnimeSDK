#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKLLGBHAIPP_HJOOPEPLNCB;

#define JKLLGBHAIPP_IDAPCOBEFJG_OCONGAMAEBC_OFFSET UNITYSDK_OFFSET(0x17B2FFB0)
#define JKLLGBHAIPP_IDAPCOBEFJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2FFA0)

inline static constexpr unsigned int JKLLGBHAIPP_IDAPCOBEFJG_TypeDefinitionIndex = 56647;

class JKLLGBHAIPP_IDAPCOBEFJG : public ::System::Object
{
public:
	::JKLLGBHAIPP_HJOOPEPLNCB* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_IDAPCOBEFJG__CTOR_OFFSET))(this);
	}

	::System::Boolean OCONGAMAEBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_IDAPCOBEFJG_OCONGAMAEBC_OFFSET))(this);
	}
};
