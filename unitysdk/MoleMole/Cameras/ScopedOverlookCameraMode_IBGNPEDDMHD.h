#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Cameras { class OverlookCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverlookCameraMode; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_IBGNPEDDMHD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x63CF00)
#define MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_IBGNPEDDMHD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ScopedOverlookCameraMode_IBGNPEDDMHD_TypeDefinitionIndex = 65484;

	struct alignas(8) ScopedOverlookCameraMode_IBGNPEDDMHD
	{
		::MoleMole::Cameras::OverlookCameraConfig* DFMKILICPFB; // 0x10
		::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x18
		::MoleMole::Cameras::ScopedOverlookCameraMode* KLHPEBKNIFB; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x38
		::System::Int32 MDPILDGFNHN; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_IBGNPEDDMHD_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_SCOPEDOVERLOOKCAMERAMODE_IBGNPEDDMHD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
		}
	};
}
