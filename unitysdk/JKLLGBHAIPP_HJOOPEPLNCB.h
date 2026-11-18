#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGOGPKIHKIB;

#define JKLLGBHAIPP_HJOOPEPLNCB_NICKECOLIBG_OFFSET UNITYSDK_OFFSET(0x13AD5050)
#define JKLLGBHAIPP_HJOOPEPLNCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD5040)

inline static constexpr unsigned int JKLLGBHAIPP_HJOOPEPLNCB_TypeDefinitionIndex = 56655;

class JKLLGBHAIPP_HJOOPEPLNCB : public ::System::Object
{
public:
	::DGOGPKIHKIB* BKHJCPBKKKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_HJOOPEPLNCB__CTOR_OFFSET))(this);
	}

	::System::Boolean NICKECOLIBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_HJOOPEPLNCB_NICKECOLIBG_OFFSET))(this);
	}
};
