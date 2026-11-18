#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class BFIJBKIECJF;
class IEDHKGPALKM;
class IEDHKGPALKM_GCNFNGOIMLI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IEDHKGPALKM_MCCMJOIIICM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5ED200)
#define IEDHKGPALKM_MCCMJOIIICM_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IEDHKGPALKM_MCCMJOIIICM_TypeDefinitionIndex = 89851;

struct alignas(8) IEDHKGPALKM_MCCMJOIIICM
{
	::IEDHKGPALKM* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::BFIJBKIECJF*>> ECODFICGLGM; // 0x30
	::System::Byte _padding0[0x18];
	::IEDHKGPALKM_GCNFNGOIMLI* PGDOJBDJBOL; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Int32 NPAKMAGBOCH; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_MCCMJOIIICM_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_MCCMJOIIICM_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
