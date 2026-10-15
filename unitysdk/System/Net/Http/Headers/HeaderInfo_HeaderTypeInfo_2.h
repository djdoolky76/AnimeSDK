#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Http/Headers/HeaderInfo.h"
namespace System::Net::Http::Headers { template <typename T> class TryParseDelegate_1; }

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HeaderInfo_HeaderTypeInfo_2_TypeDefinitionIndex = 3789;

	template <typename T1, typename T2>
	class HeaderInfo_HeaderTypeInfo_2 : public ::System::Net::Http::Headers::HeaderInfo
	{
	public:
		::System::Net::Http::Headers::TryParseDelegate_1<T1>* parser; // 0x0
	};
}
