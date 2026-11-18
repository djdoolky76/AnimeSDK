#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FBMFHPMONGC_CKAPAAJBPAH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBMFHPMONGC;
class FBMFHPMONGC_BNAIPBIALGM;
class FBMFHPMONGC_KMCEJIJCBFB;
namespace MoleMole { class FishCameraConfigGroup; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_MBBLMPIECGA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5F15D0)
#define FBMFHPMONGC_MBBLMPIECGA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_MBBLMPIECGA_TypeDefinitionIndex = 50496;

struct alignas(8) FBMFHPMONGC_MBBLMPIECGA
{
	::FBMFHPMONGC_BNAIPBIALGM* PGDOJBDJBOL; // 0x10
	::MoleMole::FishCameraConfigGroup* FGBHCDFIJGA; // 0x18
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x28
	::FBMFHPMONGC_KMCEJIJCBFB* MADPMCLFHKA; // 0x38
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Boolean GDNECMBHKND; // 0x54
	::System::Boolean NPPMJEIPMFC; // 0x55
	::System::Byte _padding0[0x2];
	::FBMFHPMONGC_CKAPAAJBPAH HOPPKLPOBED; // 0x58
	::UnityEngine::Vector3 KPLGFGLGLPD; // 0x5C
	::System::Single AMFOADOGKKK; // 0x68
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MBBLMPIECGA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_MBBLMPIECGA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
