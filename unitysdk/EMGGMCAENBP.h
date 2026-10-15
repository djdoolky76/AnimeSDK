#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMGGMCAENBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15537160)
#define EMGGMCAENBP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15537120)
#define EMGGMCAENBP_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15537140)
#define EMGGMCAENBP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x15537130)
#define EMGGMCAENBP_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x15537150)

	class EMGGMCAENBP : public ::System::Object
	{
	public:
		::System::UInt32 _InstanceID_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGGMCAENBP_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGGMCAENBP_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMGGMCAENBP_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGGMCAENBP_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMGGMCAENBP_SET_INSTANCEID_OFFSET))(this, a1);
		}

	};
