#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INIKGGEBLOF_CTOR_OFFSET UNITYSDK_OFFSET(0x164EF9E0)
#define INIKGGEBLOF_GET_ISINCREASE_OFFSET UNITYSDK_OFFSET(0x164EF980)
#define INIKGGEBLOF_GET_TARGETID_OFFSET UNITYSDK_OFFSET(0x164EF9C0)
#define INIKGGEBLOF_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x164EF9A0)
#define INIKGGEBLOF_SET_ISINCREASE_OFFSET UNITYSDK_OFFSET(0x164EF990)
#define INIKGGEBLOF_SET_TARGETID_OFFSET UNITYSDK_OFFSET(0x164EF9D0)
#define INIKGGEBLOF_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x164EF9B0)

inline static constexpr unsigned int INIKGGEBLOF_TypeDefinitionIndex = 66784;

	class INIKGGEBLOF : public ::System::Object
	{
	public:
		::System::Boolean _IsIncrease_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _Value_k__BackingField; // 0x14
		::System::UInt32 _TargetID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + INIKGGEBLOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsIncrease()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIKGGEBLOF_GET_ISINCREASE_OFFSET))(this);
		}

		::System::Void set_IsIncrease(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INIKGGEBLOF_SET_ISINCREASE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIKGGEBLOF_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INIKGGEBLOF_SET_VALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INIKGGEBLOF_GET_TARGETID_OFFSET))(this);
		}

		::System::Void set_TargetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INIKGGEBLOF_SET_TARGETID_OFFSET))(this, a1);
		}

	};
