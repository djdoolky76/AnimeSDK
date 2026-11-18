#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class GNOPGKADCGK;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define GNOPGKADCGK_PMNKDCKEJKC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B3400)
#define GNOPGKADCGK_PMNKDCKEJKC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int GNOPGKADCGK_PMNKDCKEJKC_TypeDefinitionIndex = 91635;

struct alignas(8) GNOPGKADCGK_PMNKDCKEJKC
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::UnityEngine::RenderTexture* FJEEKLKBFHN; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::GNOPGKADCGK* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOPGKADCGK_PMNKDCKEJKC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + GNOPGKADCGK_PMNKDCKEJKC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
