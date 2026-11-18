#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAOKHAHEDPM.h"
#include "unitysdk/JAHFCNNMABJ.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_LookAtIKSetting_TypeDefinitionIndex = 81125;

	struct alignas(8) AnimationSubManager_LookAtIKSetting
	{
		::Unity::Collections::NativeSlice_1<::JAHFCNNMABJ> Spines; // 0x10
		::System::Byte _padding0[0x8];
		::System::Single SpineWeight; // 0x20
		::System::Single SpineClampWeight; // 0x24
		::UnityEngine::Vector3 SpineTargetOffset; // 0x28
		::GAOKHAHEDPM Head; // 0x34
		::System::Single HeadWeight; // 0x3C
		::System::Single HeadClampWeight; // 0x40
		::System::Byte _padding1[0x4];
		::Unity::Collections::NativeSlice_1<::GAOKHAHEDPM> Eyes; // 0x48
		::System::Byte _padding2[0x8];
		::System::Single EyeWeight; // 0x58
		::System::Single EyeClampWeight; // 0x5C
		::System::Int32 ClampSmoothingIteration; // 0x60
	};
}
