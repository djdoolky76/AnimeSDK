#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/AxisBase.h"
#include "unitysdk/Cinemachine/AxisState.h"
namespace System { class String; }

#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x2E87140)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x2E871C0)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x2E87130)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x2E85F70)

namespace Cinemachine
{
	struct alignas(8) CinemachineInputAxisDriver
	{
		::System::Single multiplier; // 0x10
		::System::Single accelTime; // 0x14
		::System::Single decelTime; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* name; // 0x20
		::System::Single inputValue; // 0x28
		::System::Single mCurrentSpeed; // 0x2C
		// static const ::System::Object Epsilon; // 0x0
		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET))(this);
		}

		::System::Boolean Update(::System::Single a1, ::Cinemachine::AxisBase a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Cinemachine::AxisBase))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Single ClampValue(::Cinemachine::AxisBase a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::AxisBase, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean Update_1(::System::Single a1, ::Cinemachine::AxisState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Cinemachine::AxisState))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_1_OFFSET))(this, a1, a2);
		}

	};
}
