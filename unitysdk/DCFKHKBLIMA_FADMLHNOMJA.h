#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class DCFKHKBLIMA;
class NMGCEBIMAFP;
namespace System { template <typename T> class Func_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DCFKHKBLIMA_FADMLHNOMJA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F67F0)
#define DCFKHKBLIMA_FADMLHNOMJA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DCFKHKBLIMA_FADMLHNOMJA_TypeDefinitionIndex = 47849;

struct alignas(8) DCFKHKBLIMA_FADMLHNOMJA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::DCFKHKBLIMA* KLHPEBKNIFB; // 0x20
	::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* PLBEAIIJADM; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::NMGCEBIMAFP* FELAABILMEN; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKHKBLIMA_FADMLHNOMJA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DCFKHKBLIMA_FADMLHNOMJA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
