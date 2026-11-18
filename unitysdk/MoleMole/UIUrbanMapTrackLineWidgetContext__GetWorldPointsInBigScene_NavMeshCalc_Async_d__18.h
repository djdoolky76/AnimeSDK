#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71A4C0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext__GetWorldPointsInBigScene_NavMeshCalc_Async_d__18_TypeDefinitionIndex = 52014;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	struct alignas(8) UIUrbanMapTrackLineWidgetContext__GetWorldPointsInBigScene_NavMeshCalc_Async_d__18
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> __t__builder; // 0x10
		::System::Byte _padding0[0x10];
		::System::Object* __7__wrap4; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _pointList_5__2; // 0x30
		::System::Object* __u__1; // 0x38
		::System::Byte _padding1[0x8];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _navMeshPaths_5__4; // 0x50
		::MoleMole::UIUrbanMapTrackLineWidgetContext* __4__this; // 0x58
		::System::Int32 __1__state; // 0x60
		::UnityEngine::Vector3 _firstPoint_5__3; // 0x64
		::UnityEngine::Vector3 playerPosVal; // 0x70

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
