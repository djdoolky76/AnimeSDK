#pragma once
#include "unitysdk/unitysdk.h"
namespace Spine { template <typename T> class ExposedList_1; }

namespace Spine
{
	template <typename T>
	struct alignas(8) ExposedList_1_Enumerator
	{
		::Spine::ExposedList_1<T>* l; // 0x0
		::System::Int32 next; // 0x0
		::System::Int32 ver; // 0x0
		T current; // 0x0
	};
}
