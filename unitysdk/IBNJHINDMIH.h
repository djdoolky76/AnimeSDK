#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IBNJHINDMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E364F0)
#define IBNJHINDMIH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15E36540)
#define IBNJHINDMIH_GET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15E36560)
#define IBNJHINDMIH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15E36550)
#define IBNJHINDMIH_SET_PRIVILEGEPOINTS_OFFSET UNITYSDK_OFFSET(0x15E36570)

inline static constexpr unsigned int IBNJHINDMIH_TypeDefinitionIndex = 75617;

	class IBNJHINDMIH : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _PrivilegePoints_k__BackingField; // 0x14
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBNJHINDMIH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNJHINDMIH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBNJHINDMIH_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrivilegePoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNJHINDMIH_GET_PRIVILEGEPOINTS_OFFSET))(this);
		}

		::System::Void set_PrivilegePoints(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBNJHINDMIH_SET_PRIVILEGEPOINTS_OFFSET))(this, a1);
		}

	};
