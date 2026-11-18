#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_MADNFBAPMHH_ENGKEMALIHH_OFFSET UNITYSDK_OFFSET(0x10774B90)
#define MKFNBHDICNJ_MADNFBAPMHH__CTOR_OFFSET UNITYSDK_OFFSET(0x10774B80)

inline static constexpr unsigned int MKFNBHDICNJ_MADNFBAPMHH_TypeDefinitionIndex = 61340;

class MKFNBHDICNJ_MADNFBAPMHH : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* ELKFKMKLPAH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MADNFBAPMHH__CTOR_OFFSET))(this);
	}

	::System::Void ENGKEMALIHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MADNFBAPMHH_ENGKEMALIHH_OFFSET))(this);
	}
};
