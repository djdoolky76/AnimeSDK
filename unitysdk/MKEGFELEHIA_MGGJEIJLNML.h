#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MKEGFELEHIA;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MKEGFELEHIA_MGGJEIJLNML_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x748EE0)
#define MKEGFELEHIA_MGGJEIJLNML_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MKEGFELEHIA_MGGJEIJLNML_TypeDefinitionIndex = 58091;

struct alignas(8) MKEGFELEHIA_MGGJEIJLNML
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MGGJEIJLNML_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MGGJEIJLNML_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
