#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOGADEDMKCC;
class HADLNOGNKCB;

#define HADLNOGNKCB_BOHFNCBNIGD_DKDOFAOLINP_OFFSET UNITYSDK_OFFSET(0x14922780)
#define HADLNOGNKCB_BOHFNCBNIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x14922770)

inline static constexpr unsigned int HADLNOGNKCB_BOHFNCBNIGD_TypeDefinitionIndex = 50683;

class HADLNOGNKCB_BOHFNCBNIGD : public ::System::Object
{
public:
	::GOGADEDMKCC* PMNGFGEJGKI; // 0x10
	::HADLNOGNKCB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADLNOGNKCB_BOHFNCBNIGD__CTOR_OFFSET))(this);
	}

	::System::Void DKDOFAOLINP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADLNOGNKCB_BOHFNCBNIGD_DKDOFAOLINP_OFFSET))(this);
	}
};
