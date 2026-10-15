#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

namespace Collections::Pooled
{
	template <typename T>
	class ICollectionDebugView_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::ICollection_1<T>* _collection; // 0x0
	};
}
