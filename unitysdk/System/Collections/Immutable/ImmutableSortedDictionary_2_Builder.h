#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { class ImmutableSortedDictionary; }

namespace System::Collections::Immutable
{
	template <typename T1, typename T2>
	class ImmutableSortedDictionary_2_Builder : public ::System::Object
	{
	public:
		::System::Object* _root; // 0x0
		::System::Collections::Generic::IComparer_1<T1>* _keyComparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* _valueComparer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::ImmutableSortedDictionary* _immutable; // 0x0
		::System::Int32 _version; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
