#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_LIPNGCAFNMA_ILHBLGKCLLM_OFFSET UNITYSDK_OFFSET(0x1216D650)
#define MKFNBHDICNJ_LIPNGCAFNMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1216D640)

inline static constexpr unsigned int MKFNBHDICNJ_LIPNGCAFNMA_TypeDefinitionIndex = 61392;

class MKFNBHDICNJ_LIPNGCAFNMA : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LIPNGCAFNMA__CTOR_OFFSET))(this);
	}

	::System::Void ILHBLGKCLLM(::System::Boolean LNEGJKGCHMD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_LIPNGCAFNMA_ILHBLGKCLLM_OFFSET))(this, LNEGJKGCHMD);
	}
};
