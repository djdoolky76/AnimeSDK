#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPreUnlockDialogPopWindowController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MNBCBNIEAMG_FLPDMNFPOIK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6C9EA0)
#define MNBCBNIEAMG_FLPDMNFPOIK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int MNBCBNIEAMG_FLPDMNFPOIK_TypeDefinitionIndex = 76596;

struct alignas(8) MNBCBNIEAMG_FLPDMNFPOIK
{
	::MoleMole::UIPreUnlockDialogPopWindowController* DJLDIMNHAAM; // 0x10
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Action* FPNLKPJNCGK; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 NACGJJKHEJE; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_FLPDMNFPOIK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MNBCBNIEAMG_FLPDMNFPOIK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
