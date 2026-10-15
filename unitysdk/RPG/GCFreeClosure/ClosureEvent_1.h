#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ActionClosure_1.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GCFreeClosure
{
	template <typename T>
	struct alignas(8) ClosureEvent_1
	{
		::System::Collections::Generic::List_1<::RPG::GCFreeClosure::ActionClosure_1<T>>* _calleeList; // 0x0
		::System::Int32 _depth; // 0x0
		::System::Int32 _sparseIndex; // 0x0
	};
}
