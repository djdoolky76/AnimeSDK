#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CBDDODKFCIJ;
class GLCCLFPBBML;
class GLCCLFPBBML_LKBFIFOMGDG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define GLCCLFPBBML_BFKHPGAEFLO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x654740)
#define GLCCLFPBBML_BFKHPGAEFLO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GLCCLFPBBML_BFKHPGAEFLO_TypeDefinitionIndex = 72301;

struct alignas(8) GLCCLFPBBML_BFKHPGAEFLO
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Threading::CancellationToken EHOGJONFLKH; // 0x20
	::GLCCLFPBBML* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::CBDDODKFCIJ* OFCDOGCNJJM; // 0x40
	::GLCCLFPBBML_LKBFIFOMGDG* PGDOJBDJBOL; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCCLFPBBML_BFKHPGAEFLO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GLCCLFPBBML_BFKHPGAEFLO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
