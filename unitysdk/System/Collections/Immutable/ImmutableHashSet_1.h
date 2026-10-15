#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableHashSet_1_TypeDefinitionIndex = 6597;

	template <typename T>
	class ImmutableHashSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<T>* _equalityComparer; // 0x0
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<::System::Object*>* _hashBucketEqualityComparer; // 0x0
		static ::System::Collections::Immutable::ImmutableHashSet_1<T>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableHashSet_1<T>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableHashSet`1")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>** StaticGet_s_FreezeBucketAction()
		{
			return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableHashSet`1")->GetStaticField(0x0);
		}

	};
}
