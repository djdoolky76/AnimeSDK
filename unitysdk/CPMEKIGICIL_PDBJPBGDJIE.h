#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class CPMEKIGICIL;
class CPMEKIGICIL_CMLFMIOGLHD;
class DHMIGDLLBHG;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CPMEKIGICIL_PDBJPBGDJIE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6DDFC0)
#define CPMEKIGICIL_PDBJPBGDJIE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int CPMEKIGICIL_PDBJPBGDJIE_TypeDefinitionIndex = 83471;

struct alignas(8) CPMEKIGICIL_PDBJPBGDJIE
{
	::CPMEKIGICIL* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::DHMIGDLLBHG*> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::CPMEKIGICIL_CMLFMIOGLHD* PGDOJBDJBOL; // 0x48
	::System::Single EKGMLLJEJHM; // 0x50
	::System::Int32 CCMMDOEDBMI; // 0x54
	::System::Int32 GPGCFBPNIKD; // 0x58
	::System::UInt32 KADLGOGHGLE; // 0x5C
	::System::Boolean FAFNDDAFHCJ; // 0x60
	::System::Boolean CAAFEGLOALC; // 0x61
	::System::Byte _padding1[0x2];
	::System::Int32 MDPILDGFNHN; // 0x64
	::System::Int32 EACHENEGANI; // 0x68

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMEKIGICIL_PDBJPBGDJIE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CPMEKIGICIL_PDBJPBGDJIE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
