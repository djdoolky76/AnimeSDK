#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { class ImmutableHashSet; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_Builder_TypeDefinitionIndex = 6600;

	template <typename T>
	class ImmutableHashSet_1_Builder : public ::System::Object
	{
	public:
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* _hashBucketEqualityComparer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableHashSet* _immutable; // 0x0
		::System::Int32 _version; // 0x0
	};
}
