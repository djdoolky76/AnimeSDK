#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class EPJAODADCEA;
class PEJCCBOKHCL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PEJCCBOKHCL_DMPEGEEKBLD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x817CD0)
#define PEJCCBOKHCL_DMPEGEEKBLD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52F5B0)

inline static constexpr unsigned int PEJCCBOKHCL_DMPEGEEKBLD_TypeDefinitionIndex = 72577;

struct alignas(8) PEJCCBOKHCL_DMPEGEEKBLD
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::EPJAODADCEA* GDCKOIIAJPF; // 0x40
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DMPEGEEKBLD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_DMPEGEEKBLD_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
