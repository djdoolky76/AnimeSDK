#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;

#define PCMENEMPLGF_NBHKHPDGIFK_FMLLIPDGIEJ_OFFSET UNITYSDK_OFFSET(0x173146C0)
#define PCMENEMPLGF_NBHKHPDGIFK__CTOR_OFFSET UNITYSDK_OFFSET(0x173146B0)

inline static constexpr unsigned int PCMENEMPLGF_NBHKHPDGIFK_TypeDefinitionIndex = 62828;

class PCMENEMPLGF_NBHKHPDGIFK : public ::System::Object
{
public:
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x10
	::System::Int32 GMDOFLBIICM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NBHKHPDGIFK__CTOR_OFFSET))(this);
	}

	::System::Void FMLLIPDGIEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NBHKHPDGIFK_FMLLIPDGIEJ_OFFSET))(this);
	}
};
