#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_PLKIEOKALPB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5F15E0)
#define FBMFHPMONGC_PLKIEOKALPB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_PLKIEOKALPB_TypeDefinitionIndex = 50481;

struct alignas(8) FBMFHPMONGC_PLKIEOKALPB
{
	::MoleMole::Config::ConfigHollowCameraShake* BGBCNLEBGEL; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x28
	::System::Byte _padding0[0x10];
	::MoleMole::FishCameraConfig KIDMJNEFBPH; // 0x40
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x70
	::System::Single IGEDHCLLJNN; // 0x74
	::System::Single FBNIOMKFDAM; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PLKIEOKALPB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PLKIEOKALPB_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
