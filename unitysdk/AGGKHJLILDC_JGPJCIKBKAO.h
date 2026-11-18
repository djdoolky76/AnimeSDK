#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class AGGKHJLILDC;
namespace MoleMole::Cameras { class BezierSurfaceCameraConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define AGGKHJLILDC_JGPJCIKBKAO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x706110)
#define AGGKHJLILDC_JGPJCIKBKAO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int AGGKHJLILDC_JGPJCIKBKAO_TypeDefinitionIndex = 65220;

struct alignas(8) AGGKHJLILDC_JGPJCIKBKAO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::AGGKHJLILDC* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x28
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x30
	::MoleMole::Cameras::BezierSurfaceCameraConfig* DFMKILICPFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGKHJLILDC_JGPJCIKBKAO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + AGGKHJLILDC_JGPJCIKBKAO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
