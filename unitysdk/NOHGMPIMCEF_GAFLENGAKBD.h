#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NOHGMPIMCEF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define NOHGMPIMCEF_GAFLENGAKBD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x630980)
#define NOHGMPIMCEF_GAFLENGAKBD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int NOHGMPIMCEF_GAFLENGAKBD_TypeDefinitionIndex = 90745;

struct alignas(8) NOHGMPIMCEF_GAFLENGAKBD
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x20
	::NOHGMPIMCEF* KLHPEBKNIFB; // 0x28
	::UnityEngine::Transform* NJIOLGDKCBO; // 0x30
	::UnityEngine::AnimationCurve* COOIPLLPFDM; // 0x38
	::System::Single IDACBMCBJMJ; // 0x40
	::System::Single HPKJJFOBMJM; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48
	::UnityEngine::Vector3 DCGALNGHINF; // 0x4C
	::UnityEngine::Vector3 BKKALNIDHEB; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GAFLENGAKBD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NOHGMPIMCEF_GAFLENGAKBD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
