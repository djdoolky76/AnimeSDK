#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IIBNCFPOGDH;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIBNCFPOGDH_ADMOPJCLCGK_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F7780)
#define IIBNCFPOGDH_ADMOPJCLCGK_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIBNCFPOGDH_ADMOPJCLCGK_TypeDefinitionIndex = 87266;

struct alignas(8) IIBNCFPOGDH_ADMOPJCLCGK
{
	::IIBNCFPOGDH* KLHPEBKNIFB; // 0x10
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x30
	::System::Object* GHANCJDIDBC; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_ADMOPJCLCGK_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_ADMOPJCLCGK_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
