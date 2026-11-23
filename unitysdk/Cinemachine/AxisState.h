#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisState_A6DD93BBC94078EA.h"
#include "unitysdk/Cinemachine/AxisState_Recentering.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine { class AxisState_E0EEF37A1B229BC5; }
namespace System { class String; }

#define CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x2A27300)
#define CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET UNITYSDK_OFFSET(0x2A27370)
#define CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET UNITYSDK_OFFSET(0x2A27420)
#define CINEMACHINE_AXISSTATE_RESET_OFFSET UNITYSDK_OFFSET(0x2A27660)
#define CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x2A27670)
#define CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET UNITYSDK_OFFSET(0x263F8A0)
#define CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET UNITYSDK_OFFSET(0x2476AD0)
#define CINEMACHINE_AXISSTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x2A27690)
#define CINEMACHINE_AXISSTATE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2A27B90)
#define CINEMACHINE_AXISSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x2A27BF0)

namespace Cinemachine
{
	inline static constexpr unsigned int AxisState_TypeDefinitionIndex = 18346;

	struct alignas(8) AxisState
	{
		::System::Single Value; // 0x10
		::Cinemachine::AxisState_A6DD93BBC94078EA m_SpeedMode; // 0x14
		::System::Single m_MaxSpeed; // 0x18
		::System::Single m_AccelTime; // 0x1C
		::System::Single m_DecelTime; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* m_InputAxisName; // 0x28
		::System::Single m_InputAxisValue; // 0x30
		::System::Boolean m_InvertInput; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single m_MinValue; // 0x38
		::System::Single m_MaxValue; // 0x3C
		::System::Boolean m_Wrap; // 0x40
		::System::Byte _padding2[0x3];
		::Cinemachine::AxisState_Recentering m_Recentering; // 0x44
		::System::Single m_CurrentSpeed; // 0x64
		::System::Single m_LastUpdateTime; // 0x68
		::System::Int32 m_LastUpdateFrame; // 0x6C
		::Cinemachine::AxisState_E0EEF37A1B229BC5* m_InputAxisProvider; // 0x70
		::System::Int32 m_InputAxisIndex; // 0x78
		::System::Boolean _ValueRangeLocked_k__BackingField; // 0x7C
		::System::Boolean _HasRecentering_k__BackingField; // 0x7D

		::System::Void SetInputAxisProvider(::System::Int32 F24A60394CB7A82C, ::Cinemachine::AxisState_E0EEF37A1B229BC5* AD687A4B9A03EFB2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Cinemachine::AxisState_E0EEF37A1B229BC5*))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SETINPUTAXISPROVIDER_OFFSET))(this, F24A60394CB7A82C, AD687A4B9A03EFB2);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_RESET_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_VALIDATE_OFFSET))(this);
		}

		::System::Boolean Update(::System::Single EB5670302F34D4B7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_UPDATE_OFFSET))(this, EB5670302F34D4B7);
		}

		::System::Void set_ValueRangeLocked(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_VALUERANGELOCKED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single ClampValue(::System::Single F5006C45C2B93A1C)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_CLAMPVALUE_OFFSET))(this, F5006C45C2B93A1C);
		}

		::System::Single GetMaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_GETMAXSPEED_OFFSET))(this);
		}

		::System::Void set_HasRecentering(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_SET_HASRECENTERING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor(::System::Single EA289B9F9B062B44, ::System::Single EC70C004E4E5A261, ::System::Boolean BD483182E761F753, ::System::Boolean EEBFDFBD05396B70, ::System::Single EA8C49437BBE6303, ::System::Single F5AEEF9DAC2AEA77, ::System::Single A2266D69297EF67E, ::System::String* F79B4D487F303AB2, ::System::Boolean F4CF14A8EE25E21A)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE__CTOR_OFFSET))(this, EA289B9F9B062B44, EC70C004E4E5A261, BD483182E761F753, EEBFDFBD05396B70, EA8C49437BBE6303, F5AEEF9DAC2AEA77, A2266D69297EF67E, F79B4D487F303AB2, F4CF14A8EE25E21A);
		}

		::System::Boolean MaxSpeedUpdate(::System::Single AF4717A1A80FD60F, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_AXISSTATE_MAXSPEEDUPDATE_OFFSET))(this, AF4717A1A80FD60F, EB5670302F34D4B7);
		}
	};
}
