#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_FMNGFMOMGOF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x774BD0)
#define FBMFHPMONGC_FMNGFMOMGOF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_FMNGFMOMGOF_TypeDefinitionIndex = 50512;

struct alignas(8) FBMFHPMONGC_FMNGFMOMGOF
{
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::MoleMole::FishPosConfig* FHPCHBALEBO; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::MoleMole::FishMoveParam* NDBIHDLJNMD; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Single EHDPBPFDGJH; // 0x48
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x4C
	::System::Single FLBNBLMODLG; // 0x58
	::UnityEngine::Vector3 JOAGFDJMILP; // 0x5C
	::System::Int32 MDPILDGFNHN; // 0x68
	::UnityEngine::Vector3 PAGGNLFNLPC; // 0x6C
	::UnityEngine::Vector3 FBODMCKCHIC; // 0x78
	::System::Single PEHPCLLJPCF; // 0x84
	::System::Single DCMJALCOBFE; // 0x88
	::System::Single BFEKAEEFBEH; // 0x8C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FMNGFMOMGOF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_FMNGFMOMGOF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
