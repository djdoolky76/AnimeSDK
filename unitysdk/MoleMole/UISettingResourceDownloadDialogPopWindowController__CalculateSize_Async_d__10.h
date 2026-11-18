#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToMainThreadAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/ValueType.h"

class INBICHEAODL;
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75E210)
#define MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceDownloadDialogPopWindowController__CalculateSize_Async_d__10_TypeDefinitionIndex = 81866;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	struct alignas(8) UISettingResourceDownloadDialogPopWindowController__CalculateSize_Async_d__10
	{
		::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable_Awaiter __u__2; // 0x10
		::INBICHEAODL* picker; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* _fullPackages_5__4; // 0x38
		::System::Exception* _ex_5__7; // 0x40
		::System::Object* __7__wrap1; // 0x48
		::System::Action_2<::System::Int64, ::System::Int64>* finishCallback; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::Int32 __7__wrap2; // 0x5C
		::System::Int64 _totalSize_5__5; // 0x60
		::System::Int64 _fullSize_5__6; // 0x68
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEDOWNLOADDIALOGPOPWINDOWCONTROLLER__CALCULATESIZE_ASYNC_D__10_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
