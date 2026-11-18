#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_CFLNIEPDKGO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x724F90)
#define FBMFHPMONGC_CFLNIEPDKGO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_CFLNIEPDKGO_TypeDefinitionIndex = 50517;

struct alignas(8) FBMFHPMONGC_CFLNIEPDKGO
{
	::MoleMole::FishMove3DCurve* FAJHPKBELMF; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::MoleMole::FishPosConfig* LNCOPABJEJD; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x5C
	::System::Single NPMJPEJKNKN; // 0x60
	::UnityEngine::Vector3 KKJHEEFKGLA; // 0x64
	::System::Single MDPPNMIPDMP; // 0x70
	::System::Boolean PNPFABLHFLB; // 0x74
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 KLILFBFAELK; // 0x78
	::System::Single HNNJIAIAJJG; // 0x84
	::UnityEngine::Vector3 DPENFLKEMMC; // 0x88
	::UnityEngine::Vector3 DEAKBJPEKCI; // 0x94

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CFLNIEPDKGO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CFLNIEPDKGO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
