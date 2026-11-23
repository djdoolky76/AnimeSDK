#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define E20414261B1C0E7D_UPDATESTEPCOUNT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8F280)
#define E20414261B1C0E7D_UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6E840)
#define E20414261B1C0E7D_UPDATESTEPCOUNT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x3F6E850)
#define E20414261B1C0E7D_UPDATESTEPCOUNT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x244C8A0)

inline static constexpr unsigned int E20414261B1C0E7D_UpdateStepCount_TypeDefinitionIndex = 14303;

struct alignas(4) E20414261B1C0E7D_UpdateStepCount
{
	::System::Boolean m_WasUpdated; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 _value_k__BackingField; // 0x14

	::System::UInt32 get_value()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E20414261B1C0E7D_UPDATESTEPCOUNT_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E20414261B1C0E7D_UPDATESTEPCOUNT_SET_VALUE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void OnBeforeUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E20414261B1C0E7D_UPDATESTEPCOUNT_ONBEFOREUPDATE_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E20414261B1C0E7D_UPDATESTEPCOUNT_ONUPDATE_OFFSET))(this);
	}
};
