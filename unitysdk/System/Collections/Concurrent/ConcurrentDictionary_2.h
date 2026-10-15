#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Concurrent
{
	template <typename T1, typename T2>
	class ConcurrentDictionary_2 : public ::System::Object
	{
	public:
		::System::Object* _tables; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* _comparer; // 0x0
		::System::Boolean _growLockArray; // 0x0
		::System::Int32 _budget; // 0x0
		static ::System::Boolean* StaticGet_s_isValueWriteAtomic()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Collections.Concurrent", "ConcurrentDictionary`2")->GetStaticField(0x0);
		}

	};
}
