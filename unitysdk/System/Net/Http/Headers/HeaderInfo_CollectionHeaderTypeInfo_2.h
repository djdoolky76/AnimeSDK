#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Net::Http::Headers { template <typename T> class TryParseListDelegate_1; }

namespace System::Net::Http::Headers
{
	template <typename T1, typename T2>
	class HeaderInfo_CollectionHeaderTypeInfo_2
	{
	public:
		::System::Int32 minimalCount; // 0x0
		::System::String* separator; // 0x0
		::System::Net::Http::Headers::TryParseListDelegate_1<T1>* parser; // 0x0
	};
}
