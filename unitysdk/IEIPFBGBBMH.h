#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IEIPFBGBBMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF5740)
#define IEIPFBGBBMH_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x177B5B30)
#define IEIPFBGBBMH_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x177B5B50)
#define IEIPFBGBBMH_GET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x177B5BF0)
#define IEIPFBGBBMH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x177B5B70)
#define IEIPFBGBBMH_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x177B5BD0)
#define IEIPFBGBBMH_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x177B5B90)
#define IEIPFBGBBMH_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x177B5BB0)
#define IEIPFBGBBMH_SET_CHESTID_OFFSET UNITYSDK_OFFSET(0x177B5B40)
#define IEIPFBGBBMH_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x177B5B60)
#define IEIPFBGBBMH_SET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x177B5C00)
#define IEIPFBGBBMH_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x177B5B80)
#define IEIPFBGBBMH_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x177B5BE0)
#define IEIPFBGBBMH_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x177B5BA0)
#define IEIPFBGBBMH_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x177B5BC0)

inline static constexpr unsigned int IEIPFBGBBMH_TypeDefinitionIndex = 76801;

	class IEIPFBGBBMH : public ::System::Object
	{
	public:
		::System::String* _GroupProperty_k__BackingField; // 0x10
		::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x1C
		::System::UInt32 _GPValue_k__BackingField; // 0x20
		::System::UInt32 _FloorID_k__BackingField; // 0x24
		::System::UInt32 _ChestID_k__BackingField; // 0x28
		::System::UInt32 _InstanceID_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ChestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_CHESTID_OFFSET))(this);
		}

		::System::Void set_ChestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_CHESTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::System::Void set_LittleGameEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
		}

		::System::String* get_GroupProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_GROUPPROPERTY_OFFSET))(this);
		}

		::System::Void set_GroupProperty(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_GROUPPROPERTY_OFFSET))(this, a1);
		}

		::System::UInt32 get_GPValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_GET_GPVALUE_OFFSET))(this);
		}

		::System::Void set_GPValue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEIPFBGBBMH_SET_GPVALUE_OFFSET))(this, a1);
		}

	};
