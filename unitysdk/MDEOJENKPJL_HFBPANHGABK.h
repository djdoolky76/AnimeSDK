#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/ValueType.h"

class MDEOJENKPJL;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MDEOJENKPJL_HFBPANHGABK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BFE00)
#define MDEOJENKPJL_HFBPANHGABK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MDEOJENKPJL_HFBPANHGABK_TypeDefinitionIndex = 89455;

struct alignas(8) MDEOJENKPJL_HFBPANHGABK
{
	::MDEOJENKPJL* KLHPEBKNIFB; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder ECODFICGLGM; // 0x18
	::LGCNEDCMPKM BKBGPKNGNMF; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEOJENKPJL_HFBPANHGABK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MDEOJENKPJL_HFBPANHGABK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
