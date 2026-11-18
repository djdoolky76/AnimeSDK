#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace NPCCrowd::AI { class NPCCrowdActionManager; }
namespace NPCCrowd::Ability { class CrowdSplineBakeCacheManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5C9350)
#define NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BEAE0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int CrowdSplineBakeCacheManager__NavmeshToSplineFollowAsync_d__38_TypeDefinitionIndex = 38851;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38>
	struct alignas(8) CrowdSplineBakeCacheManager__NavmeshToSplineFollowAsync_d__38
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::NPCCrowd::AI::NPCCrowdActionManager* _actionManager_5__2; // 0x18
		::NPCCrowd::Ability::CrowdSplineBakeCacheManager* __4__this; // 0x20
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x28
		::System::Boolean snapToGround; // 0x30
		::System::Boolean loop; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 __1__state; // 0x34
		::System::Int32 _navHandler_5__3; // 0x38
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x3C
		::System::Single stopRadius; // 0x40
		::System::UInt32 entityId; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_CROWDSPLINEBAKECACHEMANAGER__NAVMESHTOSPLINEFOLLOWASYNC_D__38_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
