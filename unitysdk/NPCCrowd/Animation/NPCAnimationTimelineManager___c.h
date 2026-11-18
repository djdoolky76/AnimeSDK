#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/FNPCCrowdTimelineEventConfig.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class AnimatorZoneSegmentWrap; }
namespace System { template <typename T> class Comparison_1; }

#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__BUILDNATIVECLIPCONFIG_B__35_0_OFFSET UNITYSDK_OFFSET(0x10030F50)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10030F00)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10030F40)
#define NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__INITZONEDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0x10030F90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAnimationTimelineManager___c_TypeDefinitionIndex = 76895;

	class NPCAnimationTimelineManager___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineManager___c_TypeDefinitionIndex)->GetStaticField(0x39BC0);
		}
		static ::System::Comparison_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::NPCCrowd::Animation::AnimatorZoneSegmentWrap*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineManager___c_TypeDefinitionIndex)->GetStaticField(0x39BC8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCAnimationTimelineManager___c_TypeDefinitionIndex)->GetStaticField(0x39BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildNativeClipConfig_b__35_0(::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig a, ::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig, ::NPCCrowd::Animation::FNPCCrowdTimelineEventConfig))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__BUILDNATIVECLIPCONFIG_B__35_0_OFFSET))(this, a, b);
		}

		::System::Int32 _InitZoneData_b__42_0(::NPCCrowd::Animation::AnimatorZoneSegmentWrap* a, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap* b)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*, ::NPCCrowd::Animation::AnimatorZoneSegmentWrap*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCANIMATIONTIMELINEMANAGER___C__INITZONEDATA_B__42_0_OFFSET))(this, a, b);
		}
	};
}
