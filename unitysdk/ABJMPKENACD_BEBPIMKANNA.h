#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_BEBPIMKANNA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8D00)
#define ABJMPKENACD_BEBPIMKANNA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_BEBPIMKANNA_TypeDefinitionIndex = 88631;

struct alignas(8) ABJMPKENACD_BEBPIMKANNA
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::MoleMole::FishPosConfig* BGODMAGOHKM; // 0x20
	::ABJMPKENACD* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::UnityEngine::Vector3 ECOIEFOJNPM; // 0x40
	::System::Single ICMPKBKGGEA; // 0x4C
	::System::Int32 MDPILDGFNHN; // 0x50
	::UnityEngine::Vector3 MNABBFEFHHH; // 0x54
	::System::Single EEODALLOKMF; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_BEBPIMKANNA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_BEBPIMKANNA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
