#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace Google::Protobuf::Collections
{
	template <typename T1, typename T2>
	class MapField_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T2, ::System::Collections::Generic::LinkedListNode_1<::System::Collections::Generic::KeyValuePair*>*>* map; // 0x0
		::System::Collections::Generic::LinkedList_1<::System::Collections::Generic::KeyValuePair*>* list; // 0x0
		static ::System::Collections::Generic::EqualityComparer_1<T1>** StaticGet_ValueEqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T1>**)UnitySDK::FromName("Google.Protobuf.Collections", "MapField`2")->GetStaticField(0x0);
		}

		static ::System::Collections::Generic::EqualityComparer_1<T2>** StaticGet_KeyEqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T2>**)UnitySDK::FromName("Google.Protobuf.Collections", "MapField`2")->GetStaticField(0x0);
		}

	};
}
