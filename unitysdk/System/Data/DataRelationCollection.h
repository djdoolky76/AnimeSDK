#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/InternalDataCollectionBase.h"

namespace System { class String; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class CollectionChangeEventHandler; }
namespace System::Data { class DataRelation; }

#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADDCORE_OFFSET UNITYSDK_OFFSET(0x1F45F950)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1F45FCE0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1F45F670)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x1F45FEC0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F45FFB0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F4601D0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_INTERNALINDEXOF_OFFSET UNITYSDK_OFFSET(0x1F4601F0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x1F45FF40)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1F460390)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x1F460440)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1F4604F0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1F460970)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVECORE_OFFSET UNITYSDK_OFFSET(0x1F4609F0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1F45FDD0)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1F460710)
#define SYSTEM_DATA_DATARELATIONCOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1F460C30)
#define SYSTEM_DATA_DATARELATIONCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F460E10)

namespace System::Data
{
	inline static constexpr unsigned int DataRelationCollection_TypeDefinitionIndex = 37248;

	class DataRelationCollection : public ::System::Data::InternalDataCollectionBase
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataRelationCollection_TypeDefinitionIndex)->GetStaticField(0x97B0);
		}
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate; // 0x10
		::System::Data::DataRelation* _inTransition; // 0x18
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate; // 0x20
		::System::Int32 _defaultNameIndex; // 0x28
		::System::Int32 _objectID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_OFFSET))(this, relation);
		}

		::System::Void AddCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADDCORE_OFFSET))(this, relation);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::String* AssignName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ASSIGNNAME_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_CONTAINS_OFFSET))(this, name);
		}

		::System::Int32 InternalIndexOf(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_INTERNALINDEXOF_OFFSET))(this, name);
		}

		::System::String* MakeName(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_MAKENAME_OFFSET))(this, index);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(this, ccevent);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(this, ccevent);
		}

		::System::Void RegisterName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REGISTERNAME_OFFSET))(this, name);
		}

		::System::Void Remove(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVE_OFFSET))(this, relation);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void RemoveCore(::System::Data::DataRelation* relation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataRelation*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_REMOVECORE_OFFSET))(this, relation);
		}

		::System::Void UnregisterName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATARELATIONCOLLECTION_UNREGISTERNAME_OFFSET))(this, name);
		}
	};
}
