#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ImmutableList_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class ImmutableList_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* data; // 0x0
		static ::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>** StaticGet_Empty()
		{
			return (::Cysharp::Threading::Tasks::Internal::ImmutableList_1<T>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "ImmutableList`1")->GetStaticField(0x0);
		}

	};
}
