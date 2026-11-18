#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class KOPLGEFDECB;
class KOPLGEFDECB_BGHEEPBCPBI;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EC7E0)
#define KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B0120)

inline static constexpr unsigned int KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH_TypeDefinitionIndex = 80627;

struct alignas(8) KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Boolean> IELMICFKAAI; // 0x10
	::KOPLGEFDECB* AMNIHACKELI; // 0x18
	::KOPLGEFDECB_BGHEEPBCPBI* KLHPEBKNIFB; // 0x20
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ECODFICGLGM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + KOPLGEFDECB_BGHEEPBCPBI_JBBOCKICEBH_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
