#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_TableScrollPluginScrollViewFade;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CEF50)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15_TypeDefinitionIndex = 40097;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct alignas(8) MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15
{
	::MonoUITableScrollV2_TableScrollPluginScrollViewFade* __4__this; // 0x10
	::System::Object* __u__1; // 0x18
	::System::Byte _padding0[0x8];
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
