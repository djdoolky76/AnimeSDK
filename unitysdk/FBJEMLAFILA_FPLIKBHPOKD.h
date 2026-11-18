#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/ValueType.h"

class FBJEMLAFILA;
namespace MoleMole::Cameras { class PhotoCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBJEMLAFILA_FPLIKBHPOKD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A19B0)
#define FBJEMLAFILA_FPLIKBHPOKD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBJEMLAFILA_FPLIKBHPOKD_TypeDefinitionIndex = 65183;

struct alignas(8) FBJEMLAFILA_FPLIKBHPOKD
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x10
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::FBJEMLAFILA* KLHPEBKNIFB; // 0x30
	::MoleMole::Cameras::PhotoCameraConfig* DFMKILICPFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::PipelineCamera::WorldBasicCameraData GPBKDGGEBCF; // 0x44
	::System::UInt32 BKLGNCBNEGM; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBJEMLAFILA_FPLIKBHPOKD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBJEMLAFILA_FPLIKBHPOKD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
