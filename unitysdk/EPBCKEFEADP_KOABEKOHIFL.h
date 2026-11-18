#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/GraphicsFence.h"

class EPBCKEFEADP;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define EPBCKEFEADP_KOABEKOHIFL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x774960)
#define EPBCKEFEADP_KOABEKOHIFL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int EPBCKEFEADP_KOABEKOHIFL_TypeDefinitionIndex = 90002;

struct alignas(8) EPBCKEFEADP_KOABEKOHIFL
{
	::System::Object* CNCDBBAMLPL; // 0x10
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::EPBCKEFEADP* KLHPEBKNIFB; // 0x30
	::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter IELMICFKAAI; // 0x38
	::System::Int32 HNCMBCIKDPF; // 0x3C
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Byte _padding0[0x4];
	::UnityEngine::Rendering::GraphicsFence CBDIMHADOLF; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_KOABEKOHIFL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + EPBCKEFEADP_KOABEKOHIFL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
