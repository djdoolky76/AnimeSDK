#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMGGMCAENBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1552B4A0)
#define EMGGMCAENBP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1552B460)
#define EMGGMCAENBP_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1552B480)
#define EMGGMCAENBP_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1552B470)
#define EMGGMCAENBP_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1552B490)

inline static constexpr unsigned int EMGGMCAENBP_TypeDefinitionIndex = 74590;

	class EMGGMCAENBP : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x14
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
