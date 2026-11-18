#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CALCPATH_ASYNC_D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75E2C0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CALCPATH_ASYNC_D__20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__CalcPath_Async_d__20_TypeDefinitionIndex = 52015;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
	struct alignas(8) UIUrbanMapTrackLineWidgetContext__CalcPath_Async_d__20
	{
		::System::Object* __7__wrap2; // 0x10
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _navMeshPaths_5__2; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x30
		::System::Byte _padding0[0x10];
		::System::Object* __u__1; // 0x48
		::System::Byte _padding1[0x8];
		::System::Int32 __1__state; // 0x58
		::UnityEngine::Vector3 targetPos; // 0x5C
		::UnityEngine::Vector3 playerPosVal; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CALCPATH_ASYNC_D__20_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CALCPATH_ASYNC_D__20_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
