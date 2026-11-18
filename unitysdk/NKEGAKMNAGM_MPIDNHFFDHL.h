#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class NKEGAKMNAGM;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NKEGAKMNAGM_MPIDNHFFDHL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x630850)
#define NKEGAKMNAGM_MPIDNHFFDHL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NKEGAKMNAGM_MPIDNHFFDHL_TypeDefinitionIndex = 82161;

struct alignas(8) NKEGAKMNAGM_MPIDNHFFDHL
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0x18
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x8];
	::NKEGAKMNAGM* KLHPEBKNIFB; // 0x38
	::System::Int32 MJIMGNLJFFP; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_MPIDNHFFDHL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NKEGAKMNAGM_MPIDNHFFDHL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
