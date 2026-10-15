#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int WeakDictionary_2_TypeDefinitionIndex = 38691;

	template <typename T1, typename T2>
	class WeakDictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* buckets; // 0x0
		::System::Int32 size; // 0x0
		::System::Threading::SpinLock gate; // 0x0
		::System::Single loadFactor; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* keyEqualityComparer; // 0x0
	};
}
