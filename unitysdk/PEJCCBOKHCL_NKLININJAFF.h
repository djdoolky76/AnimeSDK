#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FPODAIHJDDC.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class PEJCCBOKHCL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PEJCCBOKHCL_NKLININJAFF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A0270)
#define PEJCCBOKHCL_NKLININJAFF_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int PEJCCBOKHCL_NKLININJAFF_TypeDefinitionIndex = 72578;

struct alignas(8) PEJCCBOKHCL_NKLININJAFF
{
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x18
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x48
	::FPODAIHJDDC JDNCHMEAJJC; // 0x4C
	::System::UInt32 LACJPGJJLCH; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NKLININJAFF_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_NKLININJAFF_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
