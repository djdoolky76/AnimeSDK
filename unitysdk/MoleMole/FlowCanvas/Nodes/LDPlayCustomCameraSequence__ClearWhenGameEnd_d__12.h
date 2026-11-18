#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/ValueType.h"

class MOHMFDKOJJH;
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x69D490)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPlayCustomCameraSequence__ClearWhenGameEnd_d__12_TypeDefinitionIndex = 46375;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	struct alignas(8) LDPlayCustomCameraSequence__ClearWhenGameEnd_d__12
	{
		::System::WeakReference_1<::MOHMFDKOJJH*>* performer; // 0x10
		::Cysharp::Threading::Tasks::UniTask finishEventTask; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Object* __u__1; // 0x38
		::System::Byte _padding0[0x8];
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPLAYCUSTOMCAMERASEQUENCE__CLEARWHENGAMEEND_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
