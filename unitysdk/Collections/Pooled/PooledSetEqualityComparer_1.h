#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Collections::Pooled
{
	template <typename T>
	class PooledSetEqualityComparer_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* _comparer; // 0x0
	};
}
