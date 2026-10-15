#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

namespace ZLinq::Linq
{
	template <typename T>
	struct alignas(8) FromNonGenericEnumerable_1
	{
		::System::Collections::IEnumerable* _source_P; // 0x0
		::System::Collections::IEnumerator* enumerator; // 0x0
	};
}
