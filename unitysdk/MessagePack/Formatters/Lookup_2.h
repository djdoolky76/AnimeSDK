#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace MessagePack::Formatters
{
	template <typename T1, typename T2>
	class Lookup_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, ::System::Linq::IGrouping_2<T1, T2>*>* groupings; // 0x0
	};
}
