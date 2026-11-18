#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MOFCAHPDLFF_BADKNPNCFOD;
class MOFCAHPDLFF_IGOGLLMOODO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7538C0)
#define MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

inline static constexpr unsigned int MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI_TypeDefinitionIndex = 68523;

struct alignas(8) MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI
{
	::MOFCAHPDLFF_BADKNPNCFOD* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask>* LBFIDGLNMNL; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder ECODFICGLGM; // 0x20
	::System::Object* CNCDBBAMLPL; // 0x30
	::MOFCAHPDLFF_IGOGLLMOODO* PGDOJBDJBOL; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter IELMICFKAAI; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* PPFFGLLDOOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_BADKNPNCFOD_NOANMMIKIJI_SETSTATEMACHINE_OFFSET))(this, PPFFGLLDOOL);
	}
};
