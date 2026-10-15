#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Immutable { template <typename T1, typename T2> class ImmutableDictionary_2; }
namespace System::Collections::Immutable { template <typename T> class SortedInt32KeyNode_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_TypeDefinitionIndex = 6618;

	template <typename T1, typename T2>
	class ImmutableDictionary_2 : public ::System::Object
	{
	public:
		::System::Int32 _count; // 0x0
		::System::Collections::Immutable::SortedInt32KeyNode_1<::System::Object*>* _root; // 0x0
		::System::Object* _comparers; // 0x0
		static ::System::Collections::Immutable::ImmutableDictionary_2<T1, T2>** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableDictionary_2<T1, T2>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableDictionary`2")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>** StaticGet_s_FreezeBucketAction()
		{
			return (::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Object*>>**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableDictionary`2")->GetStaticField(0x0);
		}

	};
}
