#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKLLGBHAIPP_ADOEFAKEEEE;

#define JKLLGBHAIPP_HIMNAKDDCMP_IDNILHLMPLI_OFFSET UNITYSDK_OFFSET(0x1308EE50)
#define JKLLGBHAIPP_HIMNAKDDCMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1308EE40)

inline static constexpr unsigned int JKLLGBHAIPP_HIMNAKDDCMP_TypeDefinitionIndex = 56646;

class JKLLGBHAIPP_HIMNAKDDCMP : public ::System::Object
{
public:
	::JKLLGBHAIPP_ADOEFAKEEEE* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_HIMNAKDDCMP__CTOR_OFFSET))(this);
	}

	::System::Boolean IDNILHLMPLI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLLGBHAIPP_HIMNAKDDCMP_IDNILHLMPLI_OFFSET))(this);
	}
};
