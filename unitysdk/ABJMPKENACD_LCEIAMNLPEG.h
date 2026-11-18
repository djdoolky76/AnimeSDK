#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABJMPKENACD_AMOMFKCLJHB.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ABJMPKENACD;
class ABJMPKENACD_GHGOFOLFFAG;
class GIGFDLPMNND;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }

#define ABJMPKENACD_LCEIAMNLPEG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x730B50)
#define ABJMPKENACD_LCEIAMNLPEG_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_LCEIAMNLPEG_TypeDefinitionIndex = 88615;

struct alignas(8) ABJMPKENACD_LCEIAMNLPEG
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::UnityEngine::AnimationCurve* JEPNDGFJBJP; // 0x20
	::MoleMole::Battle::Entity* KMMMPHMEGKI; // 0x28
	::System::Threading::CancellationTokenSource* AMNMBOGCPAP; // 0x30
	::ABJMPKENACD* KLHPEBKNIFB; // 0x38
	::UnityEngine::AnimationCurve* EOLPIAHDBEE; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::ABJMPKENACD_GHGOFOLFFAG* PGDOJBDJBOL; // 0x58
	::GIGFDLPMNND* BGBENJNPPDA; // 0x60
	::System::Single EBNPCMEFKAI; // 0x68
	::System::Single CCAPGAGFOGG; // 0x6C
	::System::Boolean IDMMKDNDLHA; // 0x70
	::System::Boolean GGEFDEAOMCD; // 0x71
	::System::Boolean IKEEFEOKOKE; // 0x72
	::System::Boolean GAGJHCJIEPE; // 0x73
	::System::Single BCDBLAFEAOC; // 0x74
	::System::Single DPOIKNFDKJG; // 0x78
	::System::Single MOBMKKNJAJL; // 0x7C
	::System::Single ACHEOMDBPJE; // 0x80
	::System::Single OCGDKGFPGJF; // 0x84
	::System::Single FIDAGBFDEAE; // 0x88
	::ABJMPKENACD_AMOMFKCLJHB GEJCKFFFKCL; // 0x8C
	::System::Single OHDEMCJOCOE; // 0x90
	::System::Int32 MDPILDGFNHN; // 0x94
	::System::Single KLCNCFGMPGM; // 0x98

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LCEIAMNLPEG_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_LCEIAMNLPEG_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
