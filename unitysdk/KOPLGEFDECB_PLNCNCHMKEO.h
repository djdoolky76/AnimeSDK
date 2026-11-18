#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class KOPLGEFDECB;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KOPLGEFDECB_PLNCNCHMKEO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52F740)
#define KOPLGEFDECB_PLNCNCHMKEO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int KOPLGEFDECB_PLNCNCHMKEO_TypeDefinitionIndex = 80624;

struct alignas(8) KOPLGEFDECB_PLNCNCHMKEO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::KOPLGEFDECB* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::UInt32 FDHDNMBNIPE; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_PLNCNCHMKEO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_PLNCNCHMKEO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
