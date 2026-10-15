#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ArraySegment_1.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Lookup_2__CreateAsync_d__7_1_TypeDefinitionIndex = 45689;

	template <typename T1, typename T2>
	struct alignas(8) ToLookup_Lookup_2__CreateAsync_d__7_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::System::ArraySegment_1<T2> source; // 0x0
		::System::Func_2<T2, ::Cysharp::Threading::Tasks::UniTask>* keySelector; // 0x0
		::System::Func_2<T2, ::Cysharp::Threading::Tasks::UniTask>* elementSelector; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, ::System::Object*>* _dict_5__2; // 0x0
		::Il2CppArray<T2>* _arr_5__3; // 0x0
		::System::Int32 _c_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0
		T2 _key_5__6; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Object* __u__2; // 0x0
	};
}
