#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_PALDBLFOKHH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79D2D0)
#define ABJMPKENACD_PALDBLFOKHH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_PALDBLFOKHH_TypeDefinitionIndex = 88636;

struct alignas(8) ABJMPKENACD_PALDBLFOKHH
{
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::System::Int32 KNLFLCPIPNL; // 0x40
	::System::Single KINAGKDNOJI; // 0x44
	::System::Single CNNHGBBOJGL; // 0x48
	::System::Single NODHMPCAIGC; // 0x4C
	::System::Single MGOADADIJMG; // 0x50
	::System::Boolean FLOIIGHPDOC; // 0x54
	::System::Boolean FBFKJPBCGOA; // 0x55
	::System::Byte _padding1[0x2];
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_PALDBLFOKHH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_PALDBLFOKHH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
