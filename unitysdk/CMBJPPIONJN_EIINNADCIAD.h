#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class CMBJPPIONJN_IAPFNHNLJIM;
class IKKDCFLLIOF;
class LJEHNJKMIIF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CMBJPPIONJN_EIINNADCIAD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x759540)
#define CMBJPPIONJN_EIINNADCIAD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CMBJPPIONJN_EIINNADCIAD_TypeDefinitionIndex = 82278;

struct alignas(8) CMBJPPIONJN_EIINNADCIAD
{
	::IKKDCFLLIOF* JPJMJPDLNBD; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::CMBJPPIONJN_IAPFNHNLJIM* PGDOJBDJBOL; // 0x20
	::LJEHNJKMIIF* DNOHELNGGLJ; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Single NHLCCIEKEPD; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBJPPIONJN_EIINNADCIAD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CMBJPPIONJN_EIINNADCIAD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
