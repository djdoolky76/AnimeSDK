#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEEFEEEFNOM.h"
#include "unitysdk/System/ValueType.h"

namespace Nap::NapECS { template <typename T> class QuickList_1; }
namespace System { class Delegate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFNFGAKGMEJ_OIOCDLMKFHN_OFFSET UNITYSDK_OFFSET(0x16A974D0)

inline static constexpr unsigned int IFNFGAKGMEJ_TypeDefinitionIndex = 49791;

struct alignas(8) IFNFGAKGMEJ
{
	::Il2CppArray<::Nap::NapECS::QuickList_1<::GEEFEEEFNOM>*>* KFCAFFEMCDM; // 0x10
	::System::Boolean AAOLHAMFALH; // 0x18
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::System::Delegate*>* DNNJFODGDEA; // 0x20

	/*
	static ::IFNFGAKGMEJ OIOCDLMKFHN()
	{
		return ((::IFNFGAKGMEJ(*)())((::PBYTE)hIl2Cpp + IFNFGAKGMEJ_OIOCDLMKFHN_OFFSET))();
	}
	*/
};
