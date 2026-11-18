#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class NPGBGLGJGCF_CCEMFFGBBMF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67EFE0)
#define NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN_TypeDefinitionIndex = 59309;

struct alignas(8) NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN
{
	::NPGBGLGJGCF_CCEMFFGBBMF* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_BMFIKOPDNLN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
