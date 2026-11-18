#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define ABJMPKENACD_NLGCKKKJMJG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7274C0)
#define ABJMPKENACD_NLGCKKKJMJG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_NLGCKKKJMJG_TypeDefinitionIndex = 88640;

struct alignas(8) ABJMPKENACD_NLGCKKKJMJG
{
	::System::Threading::CancellationTokenSource* MPPGOFIIMEM; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::ABJMPKENACD* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Boolean ANICFFFFLKK; // 0x40
	::System::Boolean KDGCFBCOIAM; // 0x41
	::System::Boolean NELCEOFGEFI; // 0x42
	::System::Boolean GDNECMBHKND; // 0x43
	::System::Boolean KNJOFCCMBDB; // 0x44
	::System::Byte _padding0[0x3];
	::System::Int32 NPAKMAGBOCH; // 0x48
	::System::Single OFKOCAPIDKF; // 0x4C
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NLGCKKKJMJG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_NLGCKKKJMJG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
