#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> class Func_12; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_12__CombineLatest_TypeDefinitionIndex = 45303;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class CombineLatest_12__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T4>* source4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T5>* source5; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T6>* source6; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T7>* source7; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T8>* source8; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T9>* source9; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T10>* source10; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T11>* source11; // 0x0
		::System::Func_12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator1; // 0x0
		::System::Object* awaiter1; // 0x0
		::System::Boolean hasCurrent1; // 0x0
		::System::Boolean running1; // 0x0
		T12 current1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* enumerator2; // 0x0
		::System::Object* awaiter2; // 0x0
		::System::Boolean hasCurrent2; // 0x0
		::System::Boolean running2; // 0x0
		T12 current2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>* enumerator3; // 0x0
		::System::Object* awaiter3; // 0x0
		::System::Boolean hasCurrent3; // 0x0
		::System::Boolean running3; // 0x0
		T12 current3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T4>* enumerator4; // 0x0
		::System::Object* awaiter4; // 0x0
		::System::Boolean hasCurrent4; // 0x0
		::System::Boolean running4; // 0x0
		T12 current4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T5>* enumerator5; // 0x0
		::System::Object* awaiter5; // 0x0
		::System::Boolean hasCurrent5; // 0x0
		::System::Boolean running5; // 0x0
		T12 current5; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T6>* enumerator6; // 0x0
		::System::Object* awaiter6; // 0x0
		::System::Boolean hasCurrent6; // 0x0
		::System::Boolean running6; // 0x0
		T12 current6; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T7>* enumerator7; // 0x0
		::System::Object* awaiter7; // 0x0
		::System::Boolean hasCurrent7; // 0x0
		::System::Boolean running7; // 0x0
		T12 current7; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T8>* enumerator8; // 0x0
		::System::Object* awaiter8; // 0x0
		::System::Boolean hasCurrent8; // 0x0
		::System::Boolean running8; // 0x0
		T12 current8; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T9>* enumerator9; // 0x0
		::System::Object* awaiter9; // 0x0
		::System::Boolean hasCurrent9; // 0x0
		::System::Boolean running9; // 0x0
		T12 current9; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T10>* enumerator10; // 0x0
		::System::Object* awaiter10; // 0x0
		::System::Boolean hasCurrent10; // 0x0
		::System::Boolean running10; // 0x0
		T12 current10; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T11>* enumerator11; // 0x0
		::System::Object* awaiter11; // 0x0
		::System::Boolean hasCurrent11; // 0x0
		::System::Boolean running11; // 0x0
		T12 current11; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Boolean syncRunning; // 0x0
		T12 result; // 0x0
		static ::System::Action** StaticGet_Completed1Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed2Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed3Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed4Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed5Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed6Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed7Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed8Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed9Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed10Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed11Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		// static const ::System::Object CompleteCount; // 0x0
	};
}
