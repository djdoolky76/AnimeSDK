#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/NPCCrowd/Lod/NPCCrowdDistanceProcessor_TaskRuntime.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Lod { class NPCCrowdDistanceManager; }
namespace System { class Object; }

#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE2D_OFFSET UNITYSDK_OFFSET(0x1003F180)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE_OFFSET UNITYSDK_OFFSET(0x1003F110)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x60E460)
#define NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_UPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1003F1E0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdDistanceProcessor_RefreshDistanceJob_TypeDefinitionIndex = 77008;

	struct alignas(8) NPCCrowdDistanceProcessor_RefreshDistanceJob
	{
		::Unity::Collections::NativeArray_1<::System::Object*> tasks; // 0x10

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_EXECUTE_OFFSET))(this, index);
		}

		static ::System::Void CheckDistance(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE_OFFSET))(task, pos1, pos2);
		}

		static ::System::Void CheckDistance2D(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_CHECKDISTANCE2D_OFFSET))(task, pos1, pos2);
		}

		static ::System::Void UpdateCallback(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime& task, ::NPCCrowd::Lod::NPCCrowdDistanceManager* manager, ::System::Int32 index)
		{
			return ((::System::Void(*)(::NPCCrowd::Lod::NPCCrowdDistanceProcessor_TaskRuntime&, ::NPCCrowd::Lod::NPCCrowdDistanceManager*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDDISTANCEPROCESSOR_REFRESHDISTANCEJOB_UPDATECALLBACK_OFFSET))(task, manager, index);
		}
	};
}
