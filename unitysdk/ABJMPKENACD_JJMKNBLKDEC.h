#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
namespace MoleMole { class FishMoveParam; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_JJMKNBLKDEC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C09F0)
#define ABJMPKENACD_JJMKNBLKDEC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_JJMKNBLKDEC_TypeDefinitionIndex = 88654;

struct alignas(8) ABJMPKENACD_JJMKNBLKDEC
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x20
	::MoleMole::FishMoveParam* CIIJLEMPFLA; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Single FJFHIEDMPIF; // 0x40
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JJMKNBLKDEC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_JJMKNBLKDEC_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
