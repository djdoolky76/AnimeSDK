#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBMFHPMONGC;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define FBMFHPMONGC_BDLDAHFAFLO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x682300)
#define FBMFHPMONGC_BDLDAHFAFLO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int FBMFHPMONGC_BDLDAHFAFLO_TypeDefinitionIndex = 50516;

struct alignas(8) FBMFHPMONGC_BDLDAHFAFLO
{
	::System::Object* KIFJPEHBMCP; // 0x10
	::System::Byte _padding0[0x10];
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50
	::System::Int32 NPAKMAGBOCH; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BDLDAHFAFLO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + FBMFHPMONGC_BDLDAHFAFLO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
