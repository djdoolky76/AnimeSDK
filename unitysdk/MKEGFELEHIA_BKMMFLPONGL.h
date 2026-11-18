#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GCIMMDDIFBJ;
class MKEGFELEHIA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MKEGFELEHIA_BKMMFLPONGL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x749FE0)
#define MKEGFELEHIA_BKMMFLPONGL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MKEGFELEHIA_BKMMFLPONGL_TypeDefinitionIndex = 58080;

struct alignas(8) MKEGFELEHIA_BKMMFLPONGL
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::GCIMMDDIFBJ* OGHLLPKIPAA; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Int32 DMLKNCPMMPB; // 0x3C
	::System::Int32 JHFKDGBCOBA; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_BKMMFLPONGL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_BKMMFLPONGL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
