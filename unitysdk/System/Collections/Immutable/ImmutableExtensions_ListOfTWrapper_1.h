#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableExtensions_ListOfTWrapper_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<T>* _collection; // 0x0
	};
}
