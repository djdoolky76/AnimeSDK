#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { template <typename T> class Action_1; }

#define MKFNBHDICNJ_ADPODDIPELN_OFNLAACBHLI_OFFSET UNITYSDK_OFFSET(0x14D8B4F0)
#define MKFNBHDICNJ_ADPODDIPELN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D8B4E0)

inline static constexpr unsigned int MKFNBHDICNJ_ADPODDIPELN_TypeDefinitionIndex = 61351;

class MKFNBHDICNJ_ADPODDIPELN : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_ADPODDIPELN__CTOR_OFFSET))(this);
	}

	::System::Void OFNLAACBHLI(::System::Boolean CDNMJGCLGCI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_ADPODDIPELN_OFNLAACBHLI_OFFSET))(this, CDNMJGCLGCI);
	}
};
