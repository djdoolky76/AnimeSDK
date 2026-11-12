#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BPGIIEPHAPH_CTOR_OFFSET UNITYSDK_OFFSET(0xCB45CF0)
#define BPGIIEPHAPH_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCB45C70)
#define BPGIIEPHAPH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCB45C90)
#define BPGIIEPHAPH_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xCB45CD0)
#define BPGIIEPHAPH_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB45CB0)
#define BPGIIEPHAPH_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xCB45C80)
#define BPGIIEPHAPH_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCB45CA0)
#define BPGIIEPHAPH_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xCB45CE0)
#define BPGIIEPHAPH_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xCB45CC0)

inline static constexpr unsigned int BPGIIEPHAPH_TypeDefinitionIndex = 76801;

	class BPGIIEPHAPH : public ::System::Object
	{
	public:
		::System::String* _GroupProperty_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x18
		::System::UInt32 _GroupID_k__BackingField; // 0x1C
		::System::UInt32 _FloorID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_SET_FLOORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::String* get_GroupProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_GET_GROUPPROPERTY_OFFSET))(this);
		}

		::System::Void set_GroupProperty(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BPGIIEPHAPH_SET_GROUPPROPERTY_OFFSET))(this, a1);
		}

	};
