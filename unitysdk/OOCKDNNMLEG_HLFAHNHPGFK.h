#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APNCODNOFLH_IOLGAFLHBCM.h"
#include "unitysdk/System/Object.h"

class OOCKDNNMLEG_JMHGEALKLAB;

#define OOCKDNNMLEG_HLFAHNHPGFK_HDGOENOOELJ_OFFSET UNITYSDK_OFFSET(0x16F8A560)
#define OOCKDNNMLEG_HLFAHNHPGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F8A550)

inline static constexpr unsigned int OOCKDNNMLEG_HLFAHNHPGFK_TypeDefinitionIndex = 81857;

class OOCKDNNMLEG_HLFAHNHPGFK : public ::System::Object
{
public:
	::OOCKDNNMLEG_JMHGEALKLAB* FGBNBFHOKAA; // 0x10
	::APNCODNOFLH_IOLGAFLHBCM EHBPALFEBFA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HLFAHNHPGFK__CTOR_OFFSET))(this);
	}

	::System::Single HDGOENOOELJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCKDNNMLEG_HLFAHNHPGFK_HDGOENOOELJ_OFFSET))(this);
	}
};
