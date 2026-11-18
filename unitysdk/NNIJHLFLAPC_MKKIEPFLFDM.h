#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2;
class NNIJHLFLAPC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NNIJHLFLAPC_MKKIEPFLFDM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x70CC00)
#define NNIJHLFLAPC_MKKIEPFLFDM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NNIJHLFLAPC_MKKIEPFLFDM_TypeDefinitionIndex = 55914;

struct alignas(8) NNIJHLFLAPC_MKKIEPFLFDM
{
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::MonoUITableScrollV2* MDAGBAFCFLE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PJBJDELGCKM; // 0x40
	::NNIJHLFLAPC* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIJHLFLAPC_MKKIEPFLFDM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NNIJHLFLAPC_MKKIEPFLFDM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
