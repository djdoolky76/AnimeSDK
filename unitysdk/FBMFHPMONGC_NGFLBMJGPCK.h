#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FBMFHPMONGC_AGOGIENCNHB.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
class HJALIPJGBOL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define FBMFHPMONGC_NGFLBMJGPCK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AE2C0)
#define FBMFHPMONGC_NGFLBMJGPCK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_NGFLBMJGPCK_TypeDefinitionIndex = 50493;

struct alignas(8) FBMFHPMONGC_NGFLBMJGPCK
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::UnityEngine::AnimationCurve* KEJJDHOKOKI; // 0x20
	::System::Threading::CancellationTokenSource* PCLGALABBNJ; // 0x28
	::HJALIPJGBOL* FHPFPCMJDFG; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x48
	::UnityEngine::Animator* MLDMLDNBBCE; // 0x50
	::FBMFHPMONGC_AGOGIENCNHB GEJCKFFFKCL; // 0x58
	::System::Int32 LHJOFNLPDFF; // 0x5C
	::System::Single GHNLMLCJMLL; // 0x60
	::System::Single DGNHAOEMHAE; // 0x64
	::System::Boolean DBOJDMJEGDJ; // 0x68
	::System::Boolean IFHBJOPFHMC; // 0x69
	::System::Byte _padding0[0x2];
	::System::Single BNBGMMAFPMF; // 0x6C
	::System::Single DGNGILLLLGL; // 0x70
	::System::Single OCGACHAJKFB; // 0x74
	::System::Single HECDNOKPMJM; // 0x78
	::System::Int32 MDPILDGFNHN; // 0x7C
	::System::Single NPMJPEJKNKN; // 0x80
	::System::Single AHHGDNCDNCB; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NGFLBMJGPCK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_NGFLBMJGPCK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
