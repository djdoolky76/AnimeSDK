#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCKCKBEGCCM.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Battle
{
	inline static constexpr unsigned int AbilityEventMaskList_1_TypeDefinitionIndex = 39303;

	template <typename T>
	struct alignas(8) AbilityEventMaskList_1
	{
		::System::Int32 Count; // 0x0
		::System::Collections::Generic::List_1<T>* Instance; // 0x0
		::System::Collections::Generic::List_1<::MCKCKBEGCCM>* OnPreEventMask; // 0x0
		::System::Collections::Generic::List_1<::MCKCKBEGCCM>* OnEventMask; // 0x0
		::System::Collections::Generic::List_1<::MCKCKBEGCCM>* OnPostEventMask; // 0x0
		::System::Collections::Generic::List_1<::MCKCKBEGCCM>* OnResolvedEventMask; // 0x0
		::System::Collections::Generic::List_1<::MCKCKBEGCCM>* OnEventFromAnyoneMask; // 0x0
	};
}
