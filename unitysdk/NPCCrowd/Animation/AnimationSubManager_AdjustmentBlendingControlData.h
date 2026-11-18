#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/Foundation/EnumAsFlag_1.h"

namespace System { class Object; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x632A00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GETBONEFLAGS_OFFSET UNITYSDK_OFFSET(0x6329F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x610D20)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_RESET_OFFSET UNITYSDK_OFFSET(0x632950)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x105E53F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingControlData_TypeDefinitionIndex = 81129;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingControlData
	{
		static ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData* StaticGet_Default()
		{
			return (::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingControlData_TypeDefinitionIndex)->GetStaticField(0xB990);
		}
		::System::Int32 ClipId; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double BeginTime; // 0x18
		::System::Double EndTime; // 0x20
		::System::Double BeginTimestamp; // 0x28
		::System::Single ClipLength; // 0x30
		::UnityEngine::NapTransformData Loop; // 0x34
		::UnityEngine::NapTransformData Origin; // 0x64
		::System::Object* Data; // 0x94

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GET_ISNULL_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_RESET_OFFSET))(this);
		}

		::Foundation::EnumAsFlag_1<::System::Object*> GetBoneFlags()
		{
			return ((::Foundation::EnumAsFlag_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_GETBONEFLAGS_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Double timestamp, ::System::Int32 clipId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGCONTROLDATA_CONTAINS_OFFSET))(this, timestamp, clipId);
		}
	};
}
