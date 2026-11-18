#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D2560)
#define NPCCROWD_ANIMATION_NPCUNIONANIMATOR___C__DISPLAYCLASS53_0__RANDOMPLAYANIMATIONCLIP_B__0_OFFSET UNITYSDK_OFFSET(0xE0D2570)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCUnionAnimator___c__DisplayClass53_0_TypeDefinitionIndex = 85032;

	class NPCUnionAnimator___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* randomAnimationIds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RandomPlayAnimationClip_b__0(::NPCCrowd::Animation::NPCCPUAnimationClipInfo* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCUNIONANIMATOR___C__DISPLAYCLASS53_0__RANDOMPLAYANIMATIONCLIP_B__0_OFFSET))(this, a);
		}
	};
}
