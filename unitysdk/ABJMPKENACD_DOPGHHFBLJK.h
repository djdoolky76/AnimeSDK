#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_DOPGHHFBLJK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x707B20)
#define ABJMPKENACD_DOPGHHFBLJK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_DOPGHHFBLJK_TypeDefinitionIndex = 88639;

struct alignas(8) ABJMPKENACD_DOPGHHFBLJK
{
	::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x20
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Single FFPHFDNKLGF; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Int32 CCEIMNCNGCH; // 0x50
	::System::Single FBNIOMKFDAM; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_DOPGHHFBLJK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_DOPGHHFBLJK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
