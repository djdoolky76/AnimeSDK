#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_BGEBNOGKPAE_HDJDFMMNACG_OFFSET UNITYSDK_OFFSET(0x17D45A40)
#define MKFNBHDICNJ_BGEBNOGKPAE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D45A30)

inline static constexpr unsigned int MKFNBHDICNJ_BGEBNOGKPAE_TypeDefinitionIndex = 61354;

class MKFNBHDICNJ_BGEBNOGKPAE : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BEICELLCEAC; // 0x18
	::System::Action* HKEBHFKHBCC; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BGEBNOGKPAE__CTOR_OFFSET))(this);
	}

	::System::Void HDJDFMMNACG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BGEBNOGKPAE_HDJDFMMNACG_OFFSET))(this);
	}
};
