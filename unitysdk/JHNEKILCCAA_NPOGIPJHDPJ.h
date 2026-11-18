#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JHNEKILCCAA;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define JHNEKILCCAA_NPOGIPJHDPJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CF3F0)
#define JHNEKILCCAA_NPOGIPJHDPJ_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int JHNEKILCCAA_NPOGIPJHDPJ_TypeDefinitionIndex = 68313;

struct alignas(8) JHNEKILCCAA_NPOGIPJHDPJ
{
	::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter KIFJPEHBMCP; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::JHNEKILCCAA* KLHPEBKNIFB; // 0x30
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* BLGHPNHGALH; // 0x38
	::Il2CppArray<::System::Boolean>* FGMKCGFKFHN; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48
	::UnityEngine::Vector2 BAPHCPMCJPJ; // 0x4C
	::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter IELMICFKAAI; // 0x54
	::System::Byte _padding0[0x3];
	::System::ValueTuple_2<::System::Single, ::System::Single> CNBGAEKFCHI; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNEKILCCAA_NPOGIPJHDPJ_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + JHNEKILCCAA_NPOGIPJHDPJ_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
