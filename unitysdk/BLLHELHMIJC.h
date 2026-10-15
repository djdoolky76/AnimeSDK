#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLLHELHMIJC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA78E80)
#define BLLHELHMIJC_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBA78E20)
#define BLLHELHMIJC_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBA78E40)
#define BLLHELHMIJC_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xBA78E60)
#define BLLHELHMIJC_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBA78E30)
#define BLLHELHMIJC_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBA78E50)
#define BLLHELHMIJC_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xBA78E70)

	class BLLHELHMIJC : public ::System::Object
	{
	public:
		::System::UInt32 _InstanceID_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x14
		::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLHELHMIJC_GET_LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::System::Void set_LittleGameEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLHELHMIJC_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
		}

	};
