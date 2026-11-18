#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/SharedStateData.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_CLEARMASK_OFFSET UNITYSDK_OFFSET(0x6CC620)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_GETLAYERCLIPDATA_OFFSET UNITYSDK_OFFSET(0x6CC6D0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_INITDATA_OFFSET UNITYSDK_OFFSET(0x6CC5F0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_SETVALIDLAYERMASK_OFFSET UNITYSDK_OFFSET(0x6CC670)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationClipDataMultiLayer_TypeDefinitionIndex = 61787;

	struct alignas(4) AnimationClipDataMultiLayer
	{
		::NPCCrowd::Animation::CPUStateMachine::AnimationClipData Clip0; // 0x10
		::NPCCrowd::Animation::CPUStateMachine::AnimationClipData Clip1; // 0x40
		::NPCCrowd::Animation::CPUStateMachine::AnimationClipData Clip2; // 0x70
		::NPCCrowd::Animation::CPUStateMachine::AnimationClipData Clip3; // 0xA0
		::System::Byte ValidLayerMask; // 0xD0

		::System::Void InitData(::Il2CppArray<::Foundation::StateMachine::StateId>* states, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData> sharedData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::StateMachine::StateId>*, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::CPUStateMachine::SharedStateData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_INITDATA_OFFSET))(this, states, sharedData);
		}

		::System::Void ClearMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_CLEARMASK_OFFSET))(this);
		}

		::System::Void SetValidLayerMask(::System::Int32 layerIdx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_SETVALIDLAYERMASK_OFFSET))(this, layerIdx);
		}

		::NPCCrowd::Animation::CPUStateMachine::AnimationClipData GetLayerClipData(::System::Int32 index)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationClipData(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAMULTILAYER_GETLAYERCLIPDATA_OFFSET))(this, index);
		}
	};
}
