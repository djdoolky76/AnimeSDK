#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_NDMEEOEPOLP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75B1B0)
#define ABJMPKENACD_NDMEEOEPOLP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_NDMEEOEPOLP_TypeDefinitionIndex = 88627;

struct alignas(8) ABJMPKENACD_NDMEEOEPOLP
{
	::MoleMole::FishMoveParam* CIIJLEMPFLA; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::MoleMole::FishPosConfig* LOHKIJANKNP; // 0x28
	::ABJMPKENACD* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 LNFCJLKCCME; // 0x48
	::UnityEngine::Vector3 OOKIDGLGPDE; // 0x4C
	::System::Single HCCKKGFLFFP; // 0x58
	::UnityEngine::Vector3 NKDMLBNHILA; // 0x5C
	::System::Single PDBCFLGAGHA; // 0x68
	::System::Int32 MDPILDGFNHN; // 0x6C
	::UnityEngine::Vector3 ANBICILAHBL; // 0x70
	::System::Single OFNAILCOLLE; // 0x7C
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x80
	::System::Single JCGHHLLEACM; // 0x8C
	::System::Single EBIGLKIICPL; // 0x90

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_NDMEEOEPOLP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_NDMEEOEPOLP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
