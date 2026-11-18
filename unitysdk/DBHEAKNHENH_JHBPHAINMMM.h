#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DBHEAKNHENH;
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DBHEAKNHENH_JHBPHAINMMM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CDFB0)
#define DBHEAKNHENH_JHBPHAINMMM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int DBHEAKNHENH_JHBPHAINMMM_TypeDefinitionIndex = 56091;

struct alignas(8) DBHEAKNHENH_JHBPHAINMMM
{
	::DBHEAKNHENH* KLHPEBKNIFB; // 0x10
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x18
	::MoleMole::Cameras::TelescopeCameraConfig* DFMKILICPFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::UnityEngine::Vector3 LHDHLAEPFBH; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x4C
	::System::Single HKHIMAKFCGD; // 0x50
	::UnityEngine::Quaternion BFBELMDIAHI; // 0x54
	::System::Single BKCDMONKCHF; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JHBPHAINMMM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DBHEAKNHENH_JHBPHAINMMM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
