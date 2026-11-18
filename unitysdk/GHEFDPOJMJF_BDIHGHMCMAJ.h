#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class FHGHJDPHHEL;
class GHEFDPOJMJF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GHEFDPOJMJF_BDIHGHMCMAJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x65FD70)
#define GHEFDPOJMJF_BDIHGHMCMAJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GHEFDPOJMJF_BDIHGHMCMAJ_TypeDefinitionIndex = 89945;

struct alignas(8) GHEFDPOJMJF_BDIHGHMCMAJ
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::FHGHJDPHHEL* AAOCANGHBDG; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::GHEFDPOJMJF* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_BDIHGHMCMAJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GHEFDPOJMJF_BDIHGHMCMAJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
