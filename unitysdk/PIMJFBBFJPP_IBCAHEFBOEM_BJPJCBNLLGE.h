#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FAPOJHHEIMH;
class PIMJFBBFJPP_IBCAHEFBOEM;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E09F0)
#define PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE_TypeDefinitionIndex = 58957;

struct alignas(8) PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FAPOJHHEIMH* FEHIDNKNCAF; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::PIMJFBBFJPP_IBCAHEFBOEM* KLHPEBKNIFB; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Single ALBNHHLPFNG; // 0x44

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_IBCAHEFBOEM_BJPJCBNLLGE_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
