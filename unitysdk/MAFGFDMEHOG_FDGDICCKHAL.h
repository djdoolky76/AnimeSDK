#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class MAFGFDMEHOG;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MAFGFDMEHOG_FDGDICCKHAL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AE330)
#define MAFGFDMEHOG_FDGDICCKHAL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6C2D10)

inline static constexpr unsigned int MAFGFDMEHOG_FDGDICCKHAL_TypeDefinitionIndex = 46031;

struct alignas(8) MAFGFDMEHOG_FDGDICCKHAL
{
	::MoleMole::UIBaseController* DBEGNAMMHKA; // 0x10
	::MAFGFDMEHOG* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x30
	::System::Action* EJGDHCIBCJH; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 APKIKLPPHEA; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_FDGDICCKHAL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MAFGFDMEHOG_FDGDICCKHAL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
