#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class HHOBGKLENPF_CHLJHANNGLJ;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define HHOBGKLENPF_AOCMFNLIEOH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B0EE0)
#define HHOBGKLENPF_AOCMFNLIEOH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int HHOBGKLENPF_AOCMFNLIEOH_TypeDefinitionIndex = 54310;

struct alignas(8) HHOBGKLENPF_AOCMFNLIEOH
{
	::System::Action* GOHDPILNKMO; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> ECODFICGLGM; // 0x18
	::System::Byte _padding0[0x10];
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x30
	::HHOBGKLENPF_CHLJHANNGLJ* PGDOJBDJBOL; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Int32 PNPADCLNBJN; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBGKLENPF_AOCMFNLIEOH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + HHOBGKLENPF_AOCMFNLIEOH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
