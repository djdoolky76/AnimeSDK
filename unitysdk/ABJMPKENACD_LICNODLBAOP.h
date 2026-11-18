#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ABJMPKENACD;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define ABJMPKENACD_LICNODLBAOP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79D2C0)
#define ABJMPKENACD_LICNODLBAOP_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int ABJMPKENACD_LICNODLBAOP_TypeDefinitionIndex = 88619;

struct alignas(8) ABJMPKENACD_LICNODLBAOP
{
	::MoleMole::FishPosConfig* KOFAINIEOIG; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::ABJMPKENACD* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::MoleMole::FishMove3DCurve* FAJHPKBELMF; // 0x40
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x48
	::UnityEngine::Vector3 MHNJJJLGBIN; // 0x50
	::System::Boolean PNPFABLHFLB; // 0x5C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 KLILFBFAELK; // 0x60
	::System::Single NNJCMBBJMOE; // 0x6C
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x70
	::System::Int32 MDPILDGFNHN; // 0x7C
	::UnityEngine::Vector3 EKHBIADGCLJ; // 0x80
	::UnityEngine::Vector3 PIGDLFJDNJF; // 0x8C
	::System::Single MDPPNMIPDMP; // 0x98
	::System::Single JNJMADHHOIG; // 0x9C
	::System::Single FNKLJFCFBMG; // 0xA0
	::System::Int32 FJMHNOHJFMK; // 0xA4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABJMPKENACD_LICNODLBAOP_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + ABJMPKENACD_LICNODLBAOP_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
