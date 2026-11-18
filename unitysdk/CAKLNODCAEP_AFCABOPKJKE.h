#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CAKLNODCAEP;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CAKLNODCAEP_AFCABOPKJKE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78F7E0)
#define CAKLNODCAEP_AFCABOPKJKE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CAKLNODCAEP_AFCABOPKJKE_TypeDefinitionIndex = 61628;

struct alignas(8) CAKLNODCAEP_AFCABOPKJKE
{
	::CAKLNODCAEP* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKLNODCAEP_AFCABOPKJKE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CAKLNODCAEP_AFCABOPKJKE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
