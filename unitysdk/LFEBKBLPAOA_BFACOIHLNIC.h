#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/System/ValueType.h"

class LFEBKBLPAOA;
namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LFEBKBLPAOA_BFACOIHLNIC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x52F880)
#define LFEBKBLPAOA_BFACOIHLNIC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LFEBKBLPAOA_BFACOIHLNIC_TypeDefinitionIndex = 48655;

struct alignas(8) LFEBKBLPAOA_BFACOIHLNIC
{
	::MoleMole::Cameras::CameraTrackBlending* CCAKMNAGMGD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::LFEBKBLPAOA* KLHPEBKNIFB; // 0x30
	::PipelineCamera::ScopedDelegateHandle GHANCJDIDBC; // 0x38
	::MoleMole::Cameras::CameraTrackBlending* HLLFPBDMHNJ; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_BFACOIHLNIC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LFEBKBLPAOA_BFACOIHLNIC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
