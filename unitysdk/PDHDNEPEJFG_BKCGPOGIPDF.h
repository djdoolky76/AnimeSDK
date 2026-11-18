#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class PDHDNEPEJFG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PDHDNEPEJFG_BKCGPOGIPDF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6A3220)
#define PDHDNEPEJFG_BKCGPOGIPDF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PDHDNEPEJFG_BKCGPOGIPDF_TypeDefinitionIndex = 78772;

struct alignas(8) PDHDNEPEJFG_BKCGPOGIPDF
{
	::PDHDNEPEJFG* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDHDNEPEJFG_BKCGPOGIPDF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PDHDNEPEJFG_BKCGPOGIPDF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
