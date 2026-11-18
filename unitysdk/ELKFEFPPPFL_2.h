#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

inline static constexpr unsigned int ELKFEFPPPFL_2_TypeDefinitionIndex = 18246;

template <typename T1, typename T2>
class ELKFEFPPPFL_2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::EqualityComparer_1<T1>** StaticGet_JACJLDGJBAE()
	{
		return (::System::Collections::Generic::EqualityComparer_1<T1>**)Il2CppClass::FromTypeDefinitionIndex(ELKFEFPPPFL_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::EqualityComparer_1<T2>** StaticGet_JFKHBJMHPJH()
	{
		return (::System::Collections::Generic::EqualityComparer_1<T2>**)Il2CppClass::FromTypeDefinitionIndex(ELKFEFPPPFL_2_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<T2, ::System::Collections::Generic::LinkedListNode_1<::System::Collections::Generic::KeyValuePair_2<T2, T1>>*>* KNHIFHIKHIO; // 0x0
	::System::Collections::Generic::LinkedList_1<::System::Collections::Generic::KeyValuePair_2<T2, T1>>* DJLOKMMLFJC; // 0x0
};
