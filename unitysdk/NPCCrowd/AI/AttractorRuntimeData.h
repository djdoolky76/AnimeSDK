#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2D_2.h"
#include "unitysdk/Foundation/Container/NativeHashSet_2.h"
#include "unitysdk/NPCCrowd/AI/FAttractorBase.h"
#include "unitysdk/NPCCrowd/AI/FConflictData.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavigationObstacleGridCellLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCEntityNativeData.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItem.h"
#include "unitysdk/NPCCrowd/Ability/NavigationObstacleItemEqualsFunc.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NPCCrowd::AI { class AttractorRuntime; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ADDATTRACTOR_OFFSET UNITYSDK_OFFSET(0xED53750)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xED533F0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONATTRACTORENABLED_OFFSET UNITYSDK_OFFSET(0xED540E0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xED54150)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA_SWITCHANDREMOVEATTRACTOR_OFFSET UNITYSDK_OFFSET(0xED53BB0)
#define NPCCROWD_AI_ATTRACTORRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xED54510)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorRuntimeData_TypeDefinitionIndex = 74595;

	class AttractorRuntimeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AttractorRuntime*>* handles; // 0x10
		::Unity::Collections::NativeArray_1<::System::Int32> attractorHandler; // 0x18
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FAttractorBase> attractorBase; // 0x28
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> transform; // 0x38
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::AI::FConflictData> conflictedArea; // 0x48
		::System::Byte _padding3[0x8];
		::Foundation::Container::NativeHashSet_2<::NPCCrowd::Ability::NPCEntityNativeData, ::NPCCrowd::Ability::NPCEntityNativeData> NativeData; // 0x58
		::System::Byte _padding4[0x18];
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> queryBox; // 0x78
		::System::Byte _padding5[0x8];
		::System::Int32 Count; // 0x88
		::System::Int32 capcity; // 0x8C
		::Foundation::Container::HierarchicalHashGrid2D_2<::NPCCrowd::Ability::NavigationObstacleItem, ::NPCCrowd::Ability::NavigationObstacleItemEqualsFunc> ObstacleGrid; // 0x90
		::System::Byte _padding6[0x48];
		::Unity::Collections::NativeArray_1<::System::Boolean> bIsUsing; // 0xE0
		::System::Byte _padding7[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavigationObstacleGridCellLocationFragment> ObstacleLocation; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 capcity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_INIT_OFFSET))(this, capcity);
		}

		::System::Void AddAttractor(::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ADDATTRACTOR_OFFSET))(this, runtime);
		}

		::System::Void SwitchAndRemoveAttractor(::NPCCrowd::AI::AttractorRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_SWITCHANDREMOVEATTRACTOR_OFFSET))(this, runtime);
		}

		::System::Void OnAttractorEnabled(::NPCCrowd::AI::AttractorRuntime* runtime, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AttractorRuntime*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONATTRACTORENABLED_OFFSET))(this, runtime, enable);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORRUNTIMEDATA_ONDESTROY_OFFSET))(this);
		}
	};
}
