#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::Collections { class SortedList; }
namespace System::Collections { class SortedList_KeyList; }
namespace System::Collections { class SortedList_ValueList; }

#define SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1D254120)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D255830)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D254780)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1D2547C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1D2548D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D254840)
#define SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D254960)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D253D90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D253EC0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D253FB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D253BD0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1D254C50)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET UNITYSDK_OFFSET(0x1D254D10)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D254E90)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET UNITYSDK_OFFSET(0x1D254FF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET UNITYSDK_OFFSET(0x1D254EF0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0x1D255060)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1D254460)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D254600)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1D254720)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D254710)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D254730)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2550D0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1D254610)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D254740)
#define SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D254690)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET UNITYSDK_OFFSET(0x1D2552B0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET UNITYSDK_OFFSET(0x1D255330)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET UNITYSDK_OFFSET(0x1D253CB0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1D254240)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1D2553C0)
#define SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D255520)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1D254480)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D255180)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D255630)
#define SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D254DF0)

namespace System::Collections
{
	inline static constexpr unsigned int SortedList_TypeDefinitionIndex = 1498;

	class SortedList : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* values; // 0x10
		::System::Collections::SortedList_KeyList* keyList; // 0x18
		::System::Collections::IComparer* comparer; // 0x20
		::System::Collections::SortedList_ValueList* valueList; // 0x28
		::System::Object* _syncRoot; // 0x30
		::Il2CppArray<::System::Object*>* keys; // 0x38
		::System::Int32 version; // 0x40
		::System::Int32 _size; // 0x44
		static ::Il2CppArray<::System::Object*>** StaticGet_emptyArray()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("System.Collections", "SortedList")->GetStaticField(0xE680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Collections::IComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::Collections::IComparer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CTOR_3_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INIT_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ADD_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Capacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_CAPACITY_OFFSET))(this);
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsValue(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_CONTAINSVALUE_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::Object* GetByIndex(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETBYINDEX_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* GetKey(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEY_OFFSET))(this, a1);
		}

		::System::Collections::IList* GetKeyList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETKEYLIST_OFFSET))(this);
		}

		::System::Collections::IList* GetValueList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GETVALUELIST_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOfKey(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFKEY_OFFSET))(this, a1);
		}

		::System::Int32 IndexOfValue(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INDEXOFVALUE_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_INSERT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_REMOVE_OFFSET))(this, a1);
		}

		static ::System::Collections::SortedList* Synchronized(::System::Collections::SortedList* a1)
		{
			return ((::System::Collections::SortedList*(*)(::System::Collections::SortedList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SORTEDLIST_SYNCHRONIZED_OFFSET))(a1);
		}

	};
}
