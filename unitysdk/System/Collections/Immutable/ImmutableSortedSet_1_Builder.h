#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Immutable { class ImmutableSortedSet; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableSortedSet_1_Builder_TypeDefinitionIndex = 6654;

	template <typename T>
	class ImmutableSortedSet_1_Builder : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Collections::Generic::IComparer_1<T>* _comparer; // 0x0
		::System::Collections::Immutable::ImmutableSortedSet* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
