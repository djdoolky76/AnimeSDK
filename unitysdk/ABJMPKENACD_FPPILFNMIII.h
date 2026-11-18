#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
class ABJMPKENACD_FBBBJPMBCEN;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_FPPILFNMIII_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BFA40)
#define ABJMPKENACD_FPPILFNMIII_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_FPPILFNMIII_TypeDefinitionIndex = 88624;

struct alignas(8) ABJMPKENACD_FPPILFNMIII
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::System::Object* KIFJPEHBMCP; // 0x20
	::System::Byte _padding0[0x10];
	::ABJMPKENACD* KLHPEBKNIFB; // 0x38
	::ABJMPKENACD_FBBBJPMBCEN* PGDOJBDJBOL; // 0x40
	::Cysharp::Threading::Tasks::UniTask EBIAFBOGLFK; // 0x48
	::System::Object* JBKEHEIINMM; // 0x58
	::System::Byte _padding1[0x8];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x78
	::System::Single LDAGBMIKEHE; // 0x7C
	::System::Single CLDDGDJGICD; // 0x80
	::System::Int32 NPAKMAGBOCH; // 0x84
	::System::Single JNNJANADCHH; // 0x88

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_FPPILFNMIII_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_FPPILFNMIII_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
