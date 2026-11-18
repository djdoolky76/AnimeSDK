#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_GIFJADDCBHC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x4AFC70)
#define FBMFHPMONGC_GIFJADDCBHC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_GIFJADDCBHC_TypeDefinitionIndex = 50478;

struct alignas(8) FBMFHPMONGC_GIFJADDCBHC
{
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Int32 NPAKMAGBOCH; // 0x44
	::System::Boolean ANICFFFFLKK; // 0x48
	::System::Boolean GDNECMBHKND; // 0x49
	::System::Boolean NELCEOFGEFI; // 0x4A
	::System::Boolean KNJOFCCMBDB; // 0x4B

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GIFJADDCBHC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GIFJADDCBHC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
