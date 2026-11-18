#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/LNEOFHJCAMI.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6FF410)
#define MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int AreaCategoryInOutSubsystem__GetAreaByPositionAsync_d__29_TypeDefinitionIndex = 60547;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
	struct alignas(8) AreaCategoryInOutSubsystem__GetAreaByPositionAsync_d__29
	{
		::System::Object* __u__1; // 0x10
		::System::Byte _padding0[0x20];
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::LNEOFHJCAMI> __t__builder; // 0x40
		::System::Byte _padding1[0x20];
		::System::Int32 __1__state; // 0x68
		::KFNMABCCOEB categoryType; // 0x6C
		::UnityEngine::Vector3 position; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_AREACATEGORYINOUTSUBSYSTEM__GETAREABYPOSITIONASYNC_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
