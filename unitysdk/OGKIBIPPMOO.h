#pragma once
#include "unitysdk/unitysdk.h"

#define OGKIBIPPMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x12B00)
#define OGKIBIPPMOO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xE600)
#define OGKIBIPPMOO_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x12B10)

inline static constexpr unsigned int OGKIBIPPMOO_TypeDefinitionIndex = 81560;

	struct alignas(4) OGKIBIPPMOO
	{
		::System::UInt32 _GroupId_k__BackingField; // 0x10
		::System::UInt32 _InstanceId_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OGKIBIPPMOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKIBIPPMOO_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKIBIPPMOO_GET_INSTANCEID_OFFSET))(this);
		}

	};
