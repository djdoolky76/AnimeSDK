#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_HOFIMDBIOOB_EFEIPCDNGFN_OFFSET UNITYSDK_OFFSET(0x13A88520)
#define PCMENEMPLGF_HOFIMDBIOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A88510)

inline static constexpr unsigned int PCMENEMPLGF_HOFIMDBIOOB_TypeDefinitionIndex = 62863;

class PCMENEMPLGF_HOFIMDBIOOB : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 IPBFNIPPMBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_HOFIMDBIOOB__CTOR_OFFSET))(this);
	}

	::System::Void EFEIPCDNGFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_HOFIMDBIOOB_EFEIPCDNGFN_OFFSET))(this);
	}
};
