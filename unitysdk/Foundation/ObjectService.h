#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/DefaultNativeSparseArrayElementAllocator.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/Foundation/ObjectService_ObjectItem.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/Foundation/ObjectHandle.h"
#include "unitysdk/Foundation/ObjectService___c__DisplayClass32_0.h"

namespace Foundation { class IObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_OBJECTSERVICE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1E5FE200)
#define FOUNDATION_OBJECTSERVICE_COLLECTCHILDRENRELEASEOBJECTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1E603420)
#define FOUNDATION_OBJECTSERVICE_COLLECTRELEASEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E604850)
#define FOUNDATION_OBJECTSERVICE_DORELEASEOBJECT_OFFSET UNITYSDK_OFFSET(0x1E603190)
#define FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_1_OFFSET UNITYSDK_OFFSET(0x1E602CF0)
#define FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_OFFSET UNITYSDK_OFFSET(0x1E602350)
#define FOUNDATION_OBJECTSERVICE_DOREMOVE_OFFSET UNITYSDK_OFFSET(0x1E6036C0)
#define FOUNDATION_OBJECTSERVICE_DOSETPARENT_OFFSET UNITYSDK_OFFSET(0x1E602FA0)
#define FOUNDATION_OBJECTSERVICE_ENSUREOBJECTSINDEX_OFFSET UNITYSDK_OFFSET(0x1E603100)
#define FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E607B70)
#define FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1E607AF0)
#define FOUNDATION_OBJECTSERVICE_GETROOT_OFFSET UNITYSDK_OFFSET(0x1E605CB0)
#define FOUNDATION_OBJECTSERVICE_INITRELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x1E6047E0)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_1_OFFSET UNITYSDK_OFFSET(0x1E6055E0)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_2_OFFSET UNITYSDK_OFFSET(0x1E605B20)
#define FOUNDATION_OBJECTSERVICE_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1E5FF520)
#define FOUNDATION_OBJECTSERVICE_ISALLOCATED_OFFSET UNITYSDK_OFFSET(0x1E606800)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_1_OFFSET UNITYSDK_OFFSET(0x1E606060)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_OFFSET UNITYSDK_OFFSET(0x1E605E30)
#define FOUNDATION_OBJECTSERVICE_ISMATCHANDALLOCATED_OFFSET UNITYSDK_OFFSET(0x1E606540)
#define FOUNDATION_OBJECTSERVICE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E606820)
#define FOUNDATION_OBJECTSERVICE_MARKFORREMOVAL_OFFSET UNITYSDK_OFFSET(0x1E5FFAC0)
#define FOUNDATION_OBJECTSERVICE_NEWITEM_OFFSET UNITYSDK_OFFSET(0x1E603180)
#define FOUNDATION_OBJECTSERVICE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1E5FE160)
#define FOUNDATION_OBJECTSERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E606830)
#define FOUNDATION_OBJECTSERVICE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E600860)
#define FOUNDATION_OBJECTSERVICE_RESET_OFFSET UNITYSDK_OFFSET(0x1E5FEDF0)
#define FOUNDATION_OBJECTSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E607E30)
#define FOUNDATION_OBJECTSERVICE__COLLECTRELEASEOBJECT_G__COLLECTANDMOVENEXT_32_0_OFFSET UNITYSDK_OFFSET(0x1E605480)
#define FOUNDATION_OBJECTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FDF70)

namespace Foundation
{
	inline static constexpr unsigned int ObjectService_TypeDefinitionIndex = 8979;

	class ObjectService : public ::System::Object
	{
	public:
		static ::Foundation::Container::DefaultNativeSparseArrayElementAllocator* StaticGet_NativeAllocator()
		{
			return (::Foundation::Container::DefaultNativeSparseArrayElementAllocator*)Il2CppClass::FromTypeDefinitionIndex(ObjectService_TypeDefinitionIndex)->GetStaticField(0x3AC0);
		}
		::System::Collections::Generic::List_1<::Foundation::IObject*>* _objects; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _objectsToRelease; // 0x18
		::Foundation::ObjectService_ObjectItem _removalRoot; // 0x20
		::Foundation::ObjectService_ObjectItem _aliveRoot; // 0x34
		::System::Int32 _idGenerator; // 0x48
		::System::Byte _padding0[0x4];
		::Foundation::Container::NativeSparseArrayData_3<::Foundation::Container::EmptyUserData, ::System::Object*, ::Foundation::Native::RawPointer> _objectItems; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__CCTOR_OFFSET))();
		}

		::Foundation::ObjectHandle Allocate(::Foundation::ObjectHandle parent)
		{
			return ((::Foundation::ObjectHandle(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ALLOCATE_OFFSET))(this, parent);
		}

		::System::Void Reset(::Foundation::ObjectHandle handle, ::Foundation::IObject* handleObject)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle, ::Foundation::IObject*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_RESET_OFFSET))(this, handle, handleObject);
		}

		::System::Boolean IsAlive(::Foundation::ObjectHandle handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_OFFSET))(this, handle);
		}

		::System::Void MarkForRemoval(::Foundation::ObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_MARKFORREMOVAL_OFFSET))(this, handle);
		}

		::System::Void Remove(::Foundation::ObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_REMOVE_OFFSET))(this, handle);
		}

		::System::Void DoRemoveFromParent(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_OFFSET))(this, objectItems, child, childIndex);
		}

		static ::System::Void DoRemoveFromParent_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex, ::Foundation::ObjectService_ObjectItem& parent)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32, ::Foundation::ObjectService_ObjectItem&))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVEFROMPARENT_1_OFFSET))(objectItems, child, childIndex, parent);
		}

		static ::System::Void DoSetParent(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::Foundation::ObjectService_ObjectItem& child, ::System::Int32 childIndex, ::Foundation::ObjectService_ObjectItem& parent, ::System::Int32 parentIndex)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem&, ::System::Int32, ::Foundation::ObjectService_ObjectItem&, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOSETPARENT_OFFSET))(objectItems, child, childIndex, parent, parentIndex);
		}

		::System::Void EnsureObjectsIndex(::System::Int64 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ENSUREOBJECTSINDEX_OFFSET))(this, index);
		}

		static ::Foundation::ObjectService_ObjectItem NewItem(::System::Int32 id)
		{
			return ((::Foundation::ObjectService_ObjectItem(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_NEWITEM_OFFSET))(id);
		}

		static ::System::Void DoReleaseObject(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Collections::Generic::List_1<::Foundation::IObject*>* objects, ::System::Int32 index)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Collections::Generic::List_1<::Foundation::IObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DORELEASEOBJECT_OFFSET))(objectItems, objects, index);
		}

		static ::System::Void CollectChildrenReleaseObjectRecursive(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> view, ::System::Int32 firstChild, ::System::Collections::Generic::List_1<::System::Int32>* objectsToRelease)
		{
			return ((::System::Void(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_COLLECTCHILDRENRELEASEOBJECTRECURSIVE_OFFSET))(view, firstChild, objectsToRelease);
		}

		::System::Void DoRemove(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_DOREMOVE_OFFSET))(this, objectItems, index);
		}

		::System::Void InitReleaseBuffer(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_INITRELEASEBUFFER_OFFSET))(this, objectItems);
		}

		::System::Void CollectReleaseObject(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Int32 index, ::System::Collections::Generic::List_1<::System::Int32>* objectsToRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_COLLECTRELEASEOBJECT_OFFSET))(this, objectItems, index, objectsToRelease);
		}

		static ::System::Boolean IsAlive_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> view, ::Foundation::ObjectHandle handle)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_1_OFFSET))(view, handle);
		}

		static ::System::Boolean IsAlive_2(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> view, ::Foundation::ObjectService_ObjectItem item)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALIVE_2_OFFSET))(view, item);
		}

		static ::System::Int32 GetRoot(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::Foundation::ObjectService_ObjectItem item)
		{
			return ((::System::Int32(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_GETROOT_OFFSET))(objectItems, item);
		}

		static ::System::Boolean IsMatchAndAlive(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> view, ::Foundation::ObjectService_ObjectItem item, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::Foundation::ObjectService_ObjectItem, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_OFFSET))(view, item, id);
		}

		static ::System::Boolean IsMatchAndAlive_1(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Int32 index, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALIVE_1_OFFSET))(objectItems, index, id);
		}

		static ::System::Boolean IsMatchAndAllocated(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Int32 index, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCHANDALLOCATED_OFFSET))(objectItems, index, id);
		}

		static ::System::Boolean IsAllocated(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*> objectItems, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::System::Object*>, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISALLOCATED_OFFSET))(objectItems, index);
		}

		static ::System::Boolean IsMatch(::Foundation::ObjectService_ObjectItem item, ::System::Int32 id)
		{
			return ((::System::Boolean(*)(::Foundation::ObjectService_ObjectItem, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ISMATCH_OFFSET))(item, id);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_RELEASE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_ONCREATE_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void _CollectReleaseObject_g__CollectAndMoveNext_32_0(::System::Int32& cursor, ::Foundation::ObjectService___c__DisplayClass32_0& param_1)
		{
			return ((::System::Void(*)(::System::Int32&, ::Foundation::ObjectService___c__DisplayClass32_0&))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTSERVICE__COLLECTRELEASEOBJECT_G__COLLECTANDMOVENEXT_32_0_OFFSET))(cursor, param_1);
		}
	};
}
