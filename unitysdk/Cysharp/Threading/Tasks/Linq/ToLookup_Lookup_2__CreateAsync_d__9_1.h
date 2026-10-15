#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ArraySegment_1.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToLookup_Lookup_2__CreateAsync_d__9_1_TypeDefinitionIndex = 45691;

	template <typename T1, typename T2>
	struct alignas(8) ToLookup_Lookup_2__CreateAsync_d__9_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Object*> __t__builder; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::System::ArraySegment_1<T2> source; // 0x0
		::System::Func_3<T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T1>>* keySelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_3<T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T2>>* elementSelector; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, ::System::Object*>* _dict_5__2; // 0x0
		::Il2CppArray<T2>* _arr_5__3; // 0x0
		::System::Int32 _c_5__4; // 0x0
		::System::Int32 _i_5__5; // 0x0
		T2 _key_5__6; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Object* __u__2; // 0x0
	};
}
