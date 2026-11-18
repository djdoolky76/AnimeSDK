#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class MECFDIENHLL;
namespace MoleMole { class UIBaseController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MECFDIENHLL_AONAFOMDBLB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AEF30)
#define MECFDIENHLL_AONAFOMDBLB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int MECFDIENHLL_AONAFOMDBLB_TypeDefinitionIndex = 91412;

struct alignas(8) MECFDIENHLL_AONAFOMDBLB
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::MECFDIENHLL* KLHPEBKNIFB; // 0x30
	::MoleMole::UIBaseController* NCIMBHDKIJM; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECFDIENHLL_AONAFOMDBLB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MECFDIENHLL_AONAFOMDBLB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
