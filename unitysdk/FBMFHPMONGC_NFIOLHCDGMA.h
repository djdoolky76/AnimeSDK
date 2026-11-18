#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
namespace MoleMole { class FishMoveParam; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_NFIOLHCDGMA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6BF420)
#define FBMFHPMONGC_NFIOLHCDGMA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_NFIOLHCDGMA_TypeDefinitionIndex = 50501;

struct alignas(8) FBMFHPMONGC_NFIOLHCDGMA
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x20
	::MoleMole::FishMoveParam* CIIJLEMPFLA; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Single FJFHIEDMPIF; // 0x40
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NFIOLHCDGMA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NFIOLHCDGMA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
