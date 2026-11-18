#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MKEGFELEHIA;
class MKEGFELEHIA_FLNGBKFKHFJ;
class PEPGAFEGEME;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MKEGFELEHIA_LBMIJCCADFE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FF3E0)
#define MKEGFELEHIA_LBMIJCCADFE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MKEGFELEHIA_LBMIJCCADFE_TypeDefinitionIndex = 58084;

struct alignas(8) MKEGFELEHIA_LBMIJCCADFE
{
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::PEPGAFEGEME* BGODMAGOHKM; // 0x30
	::MKEGFELEHIA_FLNGBKFKHFJ* PGDOJBDJBOL; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_LBMIJCCADFE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MKEGFELEHIA_LBMIJCCADFE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
