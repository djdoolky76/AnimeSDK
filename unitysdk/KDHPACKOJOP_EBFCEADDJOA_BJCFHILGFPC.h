#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class KDHPACKOJOP_EBFCEADDJOA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D2720)
#define KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC_TypeDefinitionIndex = 82218;

struct alignas(8) KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC
{
	::KDHPACKOJOP_EBFCEADDJOA* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KDHPACKOJOP_EBFCEADDJOA_BJCFHILGFPC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
