#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLDKHNKFDOJ;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEIKEECFCBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC9D7BB0)
#define CEIKEECFCBI_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC9D7B90)
#define CEIKEECFCBI_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xC9D7BA0)

inline static constexpr unsigned int CEIKEECFCBI_TypeDefinitionIndex = 73430;

	class CEIKEECFCBI : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableList_1<::KLDKHNKFDOJ*>* _Items_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* LNAEGNAAGII; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKEECFCBI_CTOR_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::KLDKHNKFDOJ*>* get_Items()
		{
			return ((::ObservableCollections::ObservableList_1<::KLDKHNKFDOJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEIKEECFCBI_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::ObservableCollections::ObservableList_1<::KLDKHNKFDOJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::KLDKHNKFDOJ*>*))((::PBYTE)hIl2Cpp + CEIKEECFCBI_SET_ITEMS_OFFSET))(this, a1);
		}

	};
