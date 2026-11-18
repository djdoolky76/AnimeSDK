#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_LAMFOMALHIM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x655AB0)
#define FBMFHPMONGC_LAMFOMALHIM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_LAMFOMALHIM_TypeDefinitionIndex = 50477;

struct alignas(8) FBMFHPMONGC_LAMFOMALHIM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::MoleMole::FishPosConfig* BGODMAGOHKM; // 0x30
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x38
	::UnityEngine::Vector3 ECOIEFOJNPM; // 0x40
	::System::Single ICMPKBKGGEA; // 0x4C
	::System::Single EEODALLOKMF; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54
	::UnityEngine::Vector3 MNABBFEFHHH; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LAMFOMALHIM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LAMFOMALHIM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
