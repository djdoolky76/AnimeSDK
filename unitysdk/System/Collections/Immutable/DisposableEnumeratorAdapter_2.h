#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	template <typename T1, typename T2>
	struct alignas(8) DisposableEnumeratorAdapter_2
	{
		::System::Collections::Generic::IEnumerator_1<T1>* _enumeratorObject; // 0x0
		T2 _enumeratorStruct; // 0x0
	};
}
