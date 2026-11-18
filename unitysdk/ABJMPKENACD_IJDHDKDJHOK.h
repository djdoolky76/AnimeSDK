#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_IJDHDKDJHOK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BFA50)
#define ABJMPKENACD_IJDHDKDJHOK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_IJDHDKDJHOK_TypeDefinitionIndex = 88609;

struct alignas(8) ABJMPKENACD_IJDHDKDJHOK
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x10
	::System::Byte _padding0[0x10];
	::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL; // 0x28
	::MoleMole::FishCameraConfig KIDMJNEFBPH; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x58
	::ABJMPKENACD* KLHPEBKNIFB; // 0x68
	::System::Single FBNIOMKFDAM; // 0x70
	::System::Single IGEDHCLLJNN; // 0x74
	::System::Int32 MDPILDGFNHN; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_IJDHDKDJHOK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_IJDHDKDJHOK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
