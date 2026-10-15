#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Immutable { class ImmutableDictionary; }
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
		static ::System::Collections::Immutable::ImmutableDictionary** StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableDictionary**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableDictionary`2")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_s_FreezeBucketAction()
		{
			return (::System::Action**)UnitySDK::FromName("System.Collections.Immutable", "ImmutableDictionary`2")->GetStaticField(0x0);
		}

	};
}
