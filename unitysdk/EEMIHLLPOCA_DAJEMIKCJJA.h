#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EEMIHLLPOCA_DAJEMIKCJJA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AD870)
#define EEMIHLLPOCA_DAJEMIKCJJA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EEMIHLLPOCA_DAJEMIKCJJA_TypeDefinitionIndex = 52130;

struct alignas(8) EEMIHLLPOCA_DAJEMIKCJJA
{
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* LPIKKGPPHJA; // 0x10
	::System::Action* NPFIONPDFED; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_DAJEMIKCJJA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_DAJEMIKCJJA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
