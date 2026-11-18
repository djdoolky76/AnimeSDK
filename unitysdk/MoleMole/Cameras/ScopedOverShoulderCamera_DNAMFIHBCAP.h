#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/GJDFOIIBBPN.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNAMFIHBCAP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x784FE0)
#define MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNAMFIHBCAP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverShoulderCamera_DNAMFIHBCAP_TypeDefinitionIndex = 51952;

	struct alignas(8) ScopedOverShoulderCamera_DNAMFIHBCAP
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* EKPAIOGJEPO; // 0x18
		::GJDFOIIBBPN AAOCANGHBDG; // 0x20
		::MoleMole::Cameras::ScopedOverShoulderCamera* KLHPEBKNIFB; // 0x148
		::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x150
		::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x160
		::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB; // 0x168
		::System::Int32 MDPILDGFNHN; // 0x170

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNAMFIHBCAP_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERSHOULDERCAMERA_DNAMFIHBCAP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
		}
	};
}
