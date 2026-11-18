#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationCurve; }

#define FBMFHPMONGC_LALFNCBLLPC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78F160)
#define FBMFHPMONGC_LALFNCBLLPC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_LALFNCBLLPC_TypeDefinitionIndex = 50502;

struct alignas(8) FBMFHPMONGC_LALFNCBLLPC
{
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Single ILFAANADIHI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44
	::System::Single MDPPNMIPDMP; // 0x48
	::System::Single KHPGDFCNGPJ; // 0x4C
	::System::Single IGEDHCLLJNN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LALFNCBLLPC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_LALFNCBLLPC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
