#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CDE40)
#define CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ConfigCameraSphericalCoordinateSwitcher__OnClickSwitch_d__9_TypeDefinitionIndex = 40341;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct alignas(4) ConfigCameraSphericalCoordinateSwitcher__OnClickSwitch_d__9
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
	::System::Int32 __1__state; // 0x18

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CONFIGCAMERASPHERICALCOORDINATESWITCHER__ONCLICKSWITCH_D__9_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
