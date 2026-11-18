#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class KDHPACKOJOP;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define OCNOCKMHBHE_FFOHHPDGFIO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5952F0)
#define OCNOCKMHBHE_FFOHHPDGFIO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int OCNOCKMHBHE_FFOHHPDGFIO_TypeDefinitionIndex = 89191;

struct alignas(8) OCNOCKMHBHE_FFOHHPDGFIO
{
	::KDHPACKOJOP* LLKFGJGKHHB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x28
	::System::Action* HGBOMLCCBEE; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::KDHPACKOJOP*> ECODFICGLGM; // 0x38
	::System::Byte _padding0[0x10];
	::UnityEngine::RenderTexture* FJEEKLKBFHN; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_FFOHHPDGFIO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_FFOHHPDGFIO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
