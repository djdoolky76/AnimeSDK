#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHDPDELCDNI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETFOOTINDEX_OFFSET UNITYSDK_OFFSET(0x67E7A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETTOEINDEX_OFFSET UNITYSDK_OFFSET(0x67E7B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0x114C4F90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepSetting_TypeDefinitionIndex = 81200;

	struct alignas(8) AnimationSubManager_FootStepSetting
	{
		static ::NPCCrowd::Animation::AnimationSubManager_FootStepSetting* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_FootStepSetting*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepSetting_TypeDefinitionIndex)->GetStaticField(0x11000);
		}
		::System::Single BlendTime; // 0x10
		::HHDPDELCDNI LeftFootIndex; // 0x14
		::HHDPDELCDNI RightFootIndex; // 0x18
		::HHDPDELCDNI LeftToeIndex; // 0x1C
		::HHDPDELCDNI RightToeIndex; // 0x20
		::HHDPDELCDNI PelvisIndex; // 0x24
		::System::Single MaxCastDistance; // 0x28
		::System::Single LegLength; // 0x2C
		::System::Single FootHeight; // 0x30
		::System::Single AnimUpStairHeight; // 0x34
		::System::Single AnimDownStairHeight; // 0x38
		::System::Single MaxIkVelocity; // 0x3C
		::System::Single MaxAngularVelocity; // 0x40
		::UnityEngine::Vector3 ToeOffset; // 0x44
		::UnityEngine::Vector3 HeelOffset; // 0x50
		::UnityEngine::LayerMask IKLayerMask; // 0x5C
		::System::Single PelvisVelocity; // 0x60
		::System::Single PelvisThreshold; // 0x64
		::System::Single PelvisStiffness; // 0x68
		::System::Single PelvisDamping; // 0x6C
		::Unity::Collections::NativeSlice_1<::System::Int32> AnimIdArray; // 0x70
		::System::Byte _padding0[0x8];
		::Unity::Collections::NativeSlice_1<::System::Int32> LeftFootSegmentOffset; // 0x80
		::System::Byte _padding1[0x8];
		::Unity::Collections::NativeSlice_1<::System::Int32> RightFootSegmentOffset; // 0x90
		::System::Byte _padding2[0x8];
		::Unity::Collections::NativeSlice_1<::System::Object*> LeftFootOnGroundSegments; // 0xA0
		::System::Byte _padding3[0x8];
		::Unity::Collections::NativeSlice_1<::System::Object*> RightFootOnGroundSegments; // 0xB0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING__CCTOR_OFFSET))();
		}

		::HHDPDELCDNI GetFootIndex(::System::Int32 i)
		{
			return ((::HHDPDELCDNI(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETFOOTINDEX_OFFSET))(this, i);
		}

		::HHDPDELCDNI GetToeIndex(::System::Int32 i)
		{
			return ((::HHDPDELCDNI(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPSETTING_GETTOEINDEX_OFFSET))(this, i);
		}
	};
}
