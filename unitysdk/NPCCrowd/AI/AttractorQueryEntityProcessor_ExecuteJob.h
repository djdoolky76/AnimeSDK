#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NPCCrowd::AI { class AttractorRuntime; }
namespace NPCCrowd::AI { class AttractorRuntimeData; }

#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5C5620)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_FINDCLOSESTENTITYBYTAG_OFFSET UNITYSDK_OFFSET(0x5C5630)
#define NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x5C5610)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorQueryEntityProcessor_ExecuteJob_TypeDefinitionIndex = 66537;

	struct alignas(8) AttractorQueryEntityProcessor_ExecuteJob
	{
		// static const ::System::Single AttractorCD; // 0x0
		::Unity::Collections::NativeArray_1<::System::Boolean> _isUsing; // 0x10
		::System::Byte _padding0[0x8];
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> _obstacleGrid; // 0x20
		::System::Byte _padding1[0x48];
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> _data; // 0x70
		::System::Byte _padding2[0x18];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> _transformFragments; // 0x90
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> _queryBoxFragments; // 0xA0
		::System::Byte _padding4[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0xB0
		::System::Byte _padding5[0x8];
		::System::Single deltaTime; // 0xC0

		::System::Void _ctor(::NPCCrowd::AI::AttractorRuntimeData* runtimeData, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntimeData*, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB__CTOR_OFFSET))(this, runtimeData, deltaTime);
		}

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}

		::System::UInt32 FindClosestEntityByTag(::NPCCrowd::Ability::FTransformFragment transform, ::UnityEngine::Vector2 querySize, ::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::UInt32(*)(::PVOID, ::NPCCrowd::Ability::FTransformFragment, ::UnityEngine::Vector2, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORQUERYENTITYPROCESSOR_EXECUTEJOB_FINDCLOSESTENTITYBYTAG_OFFSET))(this, transform, querySize, runtime);
		}
	};
}
