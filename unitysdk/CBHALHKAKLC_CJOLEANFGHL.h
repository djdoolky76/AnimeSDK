#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class CBHALHKAKLC_LIOJHDJKKLL;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CBHALHKAKLC_CJOLEANFGHL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x679DB0)
#define CBHALHKAKLC_CJOLEANFGHL_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x4B8950)

inline static constexpr unsigned int CBHALHKAKLC_CJOLEANFGHL_TypeDefinitionIndex = 55903;

struct alignas(8) CBHALHKAKLC_CJOLEANFGHL
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Action* ELNJNJAIFGE; // 0x38
	::System::Action* AJNEOEGFCIE; // 0x40
	::CBHALHKAKLC_LIOJHDJKKLL* PGDOJBDJBOL; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBHALHKAKLC_CJOLEANFGHL_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CBHALHKAKLC_CJOLEANFGHL_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
