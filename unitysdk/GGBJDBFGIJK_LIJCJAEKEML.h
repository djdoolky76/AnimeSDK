#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GGBJDBFGIJK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GGBJDBFGIJK_LIJCJAEKEML_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x772C80)
#define GGBJDBFGIJK_LIJCJAEKEML_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GGBJDBFGIJK_LIJCJAEKEML_TypeDefinitionIndex = 92290;

struct alignas(8) GGBJDBFGIJK_LIJCJAEKEML
{
	::GGBJDBFGIJK* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x20
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x24
	::System::Int32 PBLAAAGNAEF; // 0x28

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LIJCJAEKEML_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GGBJDBFGIJK_LIJCJAEKEML_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
