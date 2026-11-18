#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace Foundation::ViewObject::Donjon { class IDonjonFloorComponent; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_CLEARALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x156DE820)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x156DE6C0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x156DEEE0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x156DE6E0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x156DE700)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x156DE6A0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INIT_OFFSET UNITYSDK_OFFSET(0x156DE720)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALATTACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x156DEBB0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALDETACHCOMPONENT_OFFSET UNITYSDK_OFFSET(0x156DECC0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALRECYCLECOMPONENT_OFFSET UNITYSDK_OFFSET(0x156DEDD0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET UNITYSDK_OFFSET(0x156DEFB0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_RECYCLE_OFFSET UNITYSDK_OFFSET(0x156DE7B0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0x156DE6D0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x156DEEF0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x156DE6F0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x156DE710)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x156DE6B0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x156DF030)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObject_TypeDefinitionIndex = 71816;

	class DonjonFloorObject : public ::System::Object
	{
	public:
		::System::String* _FloorName_k__BackingField; // 0x10
		::Foundation::ViewObject::Container::ComponentContainer_1<::Foundation::ViewObject::Donjon::IDonjonFloorComponent*>* ComponentContainer; // 0x18
		::System::Int32 _FloorID_k__BackingField; // 0x20
		::System::Boolean _enable; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 _RuntimeID_k__BackingField; // 0x28
		::System::Int32 _DungeonID_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_RUNTIMEID_OFFSET))(this, value);
		}

		::System::Int32 get_DungeonID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_DUNGEONID_OFFSET))(this);
		}

		::System::Void set_DungeonID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_DUNGEONID_OFFSET))(this, value);
		}

		::System::Int32 get_FloorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORID_OFFSET))(this, value);
		}

		::System::String* get_FloorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORNAME_OFFSET))(this);
		}

		::System::Void set_FloorName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORNAME_OFFSET))(this, value);
		}

		::System::Void Init(::System::Int32 dungeonID, ::System::Int32 floorID, ::System::String* floorName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INIT_OFFSET))(this, dungeonID, floorID, floorName);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_RECYCLE_OFFSET))(this);
		}

		::System::Void InternalAttachComponent(::Foundation::ViewObject::Donjon::IDonjonFloorComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::IDonjonFloorComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALATTACHCOMPONENT_OFFSET))(this, component);
		}

		::System::Void InternalDetachComponent(::Foundation::ViewObject::Donjon::IDonjonFloorComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::IDonjonFloorComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALDETACHCOMPONENT_OFFSET))(this, component);
		}

		::System::Void InternalRecycleComponent(::Foundation::ViewObject::Donjon::IDonjonFloorComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::Donjon::IDonjonFloorComponent*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_INTERNALRECYCLECOMPONENT_OFFSET))(this, component);
		}

		::System::Void ClearAllComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_CLEARALLCOMPONENTS_OFFSET))(this);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void NotifyComponentUpdateEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET))(this);
		}
	};
}
