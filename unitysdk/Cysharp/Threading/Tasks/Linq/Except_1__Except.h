#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Except_1__Except
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* second; // 0x0
		::System::Collections::Generic::HashSet_1<T>* set; // 0x0
		::System::Object* awaiter; // 0x0
		static ::System::Action** StaticGet_HashSetAsyncCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Except")->GetStaticField(0x0);
		}

	};
}
