#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/SpinLock.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ArrayPool_1; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class MinimumQueue_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class ArrayPool_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::Cysharp::Threading::Tasks::Internal::MinimumQueue_1<::Il2CppArray<T>*>*>* buckets; // 0x0
		::Il2CppArray<::System::Threading::SpinLock>* locks; // 0x0
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "ArrayPool`1")->GetStaticField(0x0);
		}

		static ::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>** StaticGet_Shared()
		{
			return (::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "ArrayPool`1")->GetStaticField(0x0);
		}

		// static const ::System::Object DefaultMaxNumberOfArraysPerBucket; // 0x0
	};
}
