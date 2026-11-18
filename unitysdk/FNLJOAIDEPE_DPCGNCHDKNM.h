#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class FNLJOAIDEPE;
namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FNLJOAIDEPE_DPCGNCHDKNM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x725290)
#define FNLJOAIDEPE_DPCGNCHDKNM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FNLJOAIDEPE_DPCGNCHDKNM_TypeDefinitionIndex = 69960;

struct alignas(8) FNLJOAIDEPE_DPCGNCHDKNM
{
	::Nap::NapECS::EcsWorld* GEEHGDABNJF; // 0x10
	::MoleMole::Cameras::BangbooAdjustmentCameraConfig* DFMKILICPFB; // 0x18
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x20
	::FNLJOAIDEPE* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::UInt32 BKLGNCBNEGM; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_DPCGNCHDKNM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FNLJOAIDEPE_DPCGNCHDKNM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
