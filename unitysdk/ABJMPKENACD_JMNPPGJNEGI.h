#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_JMNPPGJNEGI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E05B0)
#define ABJMPKENACD_JMNPPGJNEGI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_JMNPPGJNEGI_TypeDefinitionIndex = 88628;

struct alignas(8) ABJMPKENACD_JMNPPGJNEGI
{
	::ABJMPKENACD* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x18
	::MoleMole::FishMove3DCurve* JBGGELDMJBN; // 0x28
	::MoleMole::FishPosConfig* LOHKIJANKNP; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::Single OJNJIGCEICL; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C
	::UnityEngine::Vector3 ANBICILAHBL; // 0x50
	::System::Single PDBCFLGAGHA; // 0x5C
	::System::Single JKFLCIFDNMK; // 0x60
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x64
	::System::Int32 LNFCJLKCCME; // 0x70
	::UnityEngine::Vector3 NKDMLBNHILA; // 0x74
	::System::Single JCGHHLLEACM; // 0x80
	::System::Single MJFHFOFCMBB; // 0x84
	::UnityEngine::Vector3 OOKIDGLGPDE; // 0x88
	::System::Int32 EBNIMOLIPOC; // 0x94

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_JMNPPGJNEGI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_JMNPPGJNEGI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
