#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	template <typename T>
	class ImmutableArray_1_EnumeratorObject : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _index; // 0x0
		static ::System::Collections::Generic::IEnumerator_1<T>** StaticGet_s_EmptyEnumerator()
		{
			return (::System::Collections::Generic::IEnumerator_1<T>**)UnitySDK::FromName("System.Collections.Immutable", "EnumeratorObject")->GetStaticField(0x0);
		}

	};
}
