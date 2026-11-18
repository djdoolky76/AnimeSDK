#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FBMFHPMONGC_KBNBLHLOEFP.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_CDKAEDMEFJM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AE2A0)
#define FBMFHPMONGC_CDKAEDMEFJM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_CDKAEDMEFJM_TypeDefinitionIndex = 50480;

struct alignas(8) FBMFHPMONGC_CDKAEDMEFJM
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x30
	::System::Boolean MDMIENIJDJA; // 0x38
	::System::Byte _padding0[0x3];
	::System::Single CGDBMEGCKAK; // 0x3C
	::System::Int32 NPAKMAGBOCH; // 0x40
	::UnityEngine::Vector3 MPDEJEFPNDK; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x50
	::UnityEngine::Vector3 AJCPKDDFDOG; // 0x54
	::FBMFHPMONGC_KBNBLHLOEFP PJJJPFPKJBC; // 0x60
	::UnityEngine::Vector3 JAGNGABCEGD; // 0x64
	::System::Single GIEMGLICGNC; // 0x70
	::System::Int32 BNCLBNIKIID; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CDKAEDMEFJM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_CDKAEDMEFJM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
