#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableSortedDictionary_2; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedDictionary_2_TypeDefinitionIndex = 6647;

	template <typename T1, typename T2>
	class ImmutableSortedDictionary_2 : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Generic::IComparer_1<T1>* _keyComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* _valueComparer; // 0x0
		static ::System::Collections::Immutable::ImmutableSortedDictionary_2<T1, T2>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableSortedDictionary_2<T1, T2>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableSortedDictionary`2")->GetStaticField(0x0);
		}

	};
}
