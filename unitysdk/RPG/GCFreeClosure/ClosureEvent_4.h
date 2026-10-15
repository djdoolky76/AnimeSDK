#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_4.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GCFreeClosure
{
	inline static constexpr unsigned int ClosureEvent_4_TypeDefinitionIndex = 6448;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) ClosureEvent_4
	{
		::System::Collections::Generic::List_1<::RPG::GCFreeClosure::ActionClosure_4<T1, T2, T3, T4>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
