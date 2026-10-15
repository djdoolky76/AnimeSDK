#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Immutable { class ImmutableSortedSet; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedSet_1_TypeDefinitionIndex = 6653;

	template <typename T>
	class ImmutableSortedSet_1 : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Collections::Generic::IComparer_1<T>* _comparer; // 0x0
		static ::System::Collections::Immutable::ImmutableSortedSet** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableSortedSet**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableSortedSet`1")->GetStaticField(0x0);
		}

	};
}
