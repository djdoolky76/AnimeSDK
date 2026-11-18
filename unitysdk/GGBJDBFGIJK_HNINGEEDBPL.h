#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/TermData.h"

class GGBJDBFGIJK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGBJDBFGIJK_HNINGEEDBPL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C6280)
#define GGBJDBFGIJK_HNINGEEDBPL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GGBJDBFGIJK_HNINGEEDBPL_TypeDefinitionIndex = 92295;

struct alignas(8) GGBJDBFGIJK_HNINGEEDBPL
{
	::GGBJDBFGIJK* KLHPEBKNIFB; // 0x10
	::UnityEngine::UI::Extension::TermData JBFFOGMPNGM; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x60
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x68
	::System::Threading::CancellationToken PKCGIBKFENJ; // 0x78
	::System::Int32 NDINEJNGCFG; // 0x80
	::System::Int32 MDPILDGFNHN; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HNINGEEDBPL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_HNINGEEDBPL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
