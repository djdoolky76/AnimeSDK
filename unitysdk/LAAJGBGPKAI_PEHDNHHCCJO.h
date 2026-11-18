#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class FBAMLABJMKF;
class KBLDMNGMDAM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define LAAJGBGPKAI_PEHDNHHCCJO_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78CE50)
#define LAAJGBGPKAI_PEHDNHHCCJO_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int LAAJGBGPKAI_PEHDNHHCCJO_TypeDefinitionIndex = 84458;

struct alignas(8) LAAJGBGPKAI_PEHDNHHCCJO
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::FBAMLABJMKF* COBEJJHGMPO; // 0x20
	::System::Action* NPFIONPDFED; // 0x28
	::KBLDMNGMDAM* JEHKPHNJOIM; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x38
	::System::String* MCOHLHMKLIP; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_PEHDNHHCCJO_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_PEHDNHHCCJO_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
