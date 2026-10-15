#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Generic
{
	template <typename T1, typename T2>
	struct alignas(8) SortedDictionary_2_Enumerator
	{
		::System::Object* _treeEnum; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
	};
}
