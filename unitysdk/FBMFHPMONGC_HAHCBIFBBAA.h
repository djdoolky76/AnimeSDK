#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_HAHCBIFBBAA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x726710)
#define FBMFHPMONGC_HAHCBIFBBAA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_HAHCBIFBBAA_TypeDefinitionIndex = 50505;

struct alignas(8) FBMFHPMONGC_HAHCBIFBBAA
{
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Int32 KNLFLCPIPNL; // 0x44
	::System::Single DCLPKENKEOA; // 0x48
	::System::Single DDKGKBLGEOB; // 0x4C
	::System::Single PKGPGCCDHKA; // 0x50
	::System::Single KKNFILDPGPK; // 0x54
	::System::Boolean EKAEIBCGHDD; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_HAHCBIFBBAA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_HAHCBIFBBAA_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
