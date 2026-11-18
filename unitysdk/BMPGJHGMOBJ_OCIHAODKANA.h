#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class BMPGJHGMOBJ;
class BMPGJHGMOBJ_MKJIBEBMOBN;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define BMPGJHGMOBJ_OCIHAODKANA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7D61A0)
#define BMPGJHGMOBJ_OCIHAODKANA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int BMPGJHGMOBJ_OCIHAODKANA_TypeDefinitionIndex = 58013;

struct alignas(8) BMPGJHGMOBJ_OCIHAODKANA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::BMPGJHGMOBJ* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::BMPGJHGMOBJ_MKJIBEBMOBN* PGDOJBDJBOL; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_OCIHAODKANA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + BMPGJHGMOBJ_OCIHAODKANA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
