#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class IIBNCFPOGDH;
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IIBNCFPOGDH_PGHANMCFEEI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F7790)
#define IIBNCFPOGDH_PGHANMCFEEI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int IIBNCFPOGDH_PGHANMCFEEI_TypeDefinitionIndex = 87265;

struct alignas(8) IIBNCFPOGDH_PGHANMCFEEI
{
	::System::Threading::CancellationToken AMIDHEAIANO; // 0x10
	::System::Object* GHANCJDIDBC; // 0x18
	::IIBNCFPOGDH* KLHPEBKNIFB; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x38
	::System::UInt32 AELLPLBJELA; // 0x48
	::System::Boolean LBMHCGGBIMG; // 0x4C
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_PGHANMCFEEI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IIBNCFPOGDH_PGHANMCFEEI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
