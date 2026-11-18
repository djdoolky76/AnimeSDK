#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class AJHNNCPIAMI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AJHNNCPIAMI_CLDBPECBJAP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x707F50)
#define AJHNNCPIAMI_CLDBPECBJAP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AJHNNCPIAMI_CLDBPECBJAP_TypeDefinitionIndex = 55615;

struct alignas(8) AJHNNCPIAMI_CLDBPECBJAP
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::AJHNNCPIAMI* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHNNCPIAMI_CLDBPECBJAP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AJHNNCPIAMI_CLDBPECBJAP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
