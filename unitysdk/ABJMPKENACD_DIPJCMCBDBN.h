#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FBMFHPMONGC_CKAPAAJBPAH.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
class ABJMPKENACD_BHEFFDCPGJH;
class ABJMPKENACD_MCHLABNGIPF;
namespace MoleMole { class FishCameraConfigGroupV2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_DIPJCMCBDBN_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x706090)
#define ABJMPKENACD_DIPJCMCBDBN_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_DIPJCMCBDBN_TypeDefinitionIndex = 88610;

struct alignas(8) ABJMPKENACD_DIPJCMCBDBN
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::ABJMPKENACD* KLHPEBKNIFB; // 0x20
	::MoleMole::FishCameraConfigGroupV2* FGBHCDFIJGA; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::ABJMPKENACD_MCHLABNGIPF* PGDOJBDJBOL; // 0x40
	::ABJMPKENACD_BHEFFDCPGJH* MADPMCLFHKA; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50
	::FBMFHPMONGC_CKAPAAJBPAH HOPPKLPOBED; // 0x54
	::UnityEngine::Vector3 AKAGDEFAGJA; // 0x58
	::System::Boolean NPPMJEIPMFC; // 0x64
	::System::Boolean GDNECMBHKND; // 0x65
	::System::Byte _padding0[0x2];
	::System::Single AMFOADOGKKK; // 0x68
	::UnityEngine::Vector3 KPLGFGLGLPD; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_DIPJCMCBDBN_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_DIPJCMCBDBN_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
