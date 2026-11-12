#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BKILHIPMLFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC121990)
#define BKILHIPMLFL_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xC121950)
#define BKILHIPMLFL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC121970)
#define BKILHIPMLFL_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xC121960)
#define BKILHIPMLFL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xC121980)

inline static constexpr unsigned int BKILHIPMLFL_TypeDefinitionIndex = 77011;

	class BKILHIPMLFL : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _DeviceId_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKILHIPMLFL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_DeviceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKILHIPMLFL_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKILHIPMLFL_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKILHIPMLFL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKILHIPMLFL_SET_LEVEL_OFFSET))(this, a1);
		}

	};
