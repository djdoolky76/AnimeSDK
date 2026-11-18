#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKAppliedState.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKDecisionFragment.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKGlobalConfig.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdLookAtIKInputFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Collections/NativeHashMap_2.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x70F790)
#define NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONJOB_GETTARGETGENERATION_OFFSET UNITYSDK_OFFSET(0x137AADF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdLookAtIKDecisionJob_TypeDefinitionIndex = 72937;

	struct alignas(8) NPCCrowdLookAtIKDecisionJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> CrowdIsUsing; // 0x10
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeArray_1<::System::UInt32> CrowdEntityIds; // 0x20
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKInputFragment> InputFragments; // 0x30
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKAppliedState> AppliedStates; // 0x40
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeHashMap_2<::System::Int32, ::System::Byte> ConfigTags; // 0x50
		::System::Byte _padding4[0x8];
		::NPCCrowd::Animation::FNPCCrowdLookAtIKGlobalConfig GlobalConfig; // 0x60
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::FNPCCrowdLookAtIKDecisionFragment> DecisionFragments; // 0x98
		::System::Byte _padding5[0x8];
		::System::Object* Commands; // 0xA8

		::System::Void Execute(::System::Int32 crowdIndex, ::UnityEngine::Jobs::TransformAccess npcTransform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONJOB_EXECUTE_OFFSET))(this, crowdIndex, npcTransform);
		}

		static ::System::Int32 GetTargetGeneration(::System::Int32 targetType, ::NPCCrowd::Animation::FNPCCrowdLookAtIKGlobalConfig config)
		{
			return ((::System::Int32(*)(::System::Int32, ::NPCCrowd::Animation::FNPCCrowdLookAtIKGlobalConfig))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDLOOKATIKDECISIONJOB_GETTARGETGENERATION_OFFSET))(targetType, config);
		}
	};
}
