#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class ALAFHBOENMO;
class CELNNCEAKGB;
class DHMIGDLLBHG;
class FBMFHPMONGC;
class FBMFHPMONGC_OJKKNJFOHPI;
class JMIIBFBJLNF;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define FBMFHPMONGC_PLFPFHOMOHL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x774BE0)
#define FBMFHPMONGC_PLFPFHOMOHL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_PLFPFHOMOHL_TypeDefinitionIndex = 50513;

struct alignas(8) FBMFHPMONGC_PLFPFHOMOHL
{
	::DHMIGDLLBHG* IPEKIDNBDJO; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x18
	::MoleMole::Battle::Entity* KMMMPHMEGKI; // 0x20
	::System::Object* IELMICFKAAI; // 0x28
	::System::Byte _padding0[0x10];
	::CELNNCEAKGB* IJCAIAHJECP; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x48
	::System::Object* JBKEHEIINMM; // 0x58
	::System::Byte _padding1[0x8];
	::JMIIBFBJLNF* NGKEJJMGAMI; // 0x68
	::Cysharp::Threading::Tasks::UniTask GIHILEDPFIP; // 0x70
	::FBMFHPMONGC_OJKKNJFOHPI* PGDOJBDJBOL; // 0x80
	::ALAFHBOENMO* PJAPJACNDAC; // 0x88
	::System::Threading::CancellationTokenSource* EIALDNJPAAH; // 0x90
	::Cysharp::Threading::Tasks::UniTask KILONDDIBMP; // 0x98
	::Cysharp::Threading::Tasks::UniTask_Awaiter KIFJPEHBMCP; // 0xA8
	::System::Int32 MDPILDGFNHN; // 0xB8
	::System::Int32 NPAKMAGBOCH; // 0xBC
	::System::Boolean FBEMMGEFADM; // 0xC0
	::System::Byte _padding2[0x3];
	::System::Int32 NFEKPCHLBPC; // 0xC4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PLFPFHOMOHL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_PLFPFHOMOHL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
