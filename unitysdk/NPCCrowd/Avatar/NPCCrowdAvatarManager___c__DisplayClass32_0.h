#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D25B0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__POSTLOADAVATARGOGALGAME_B__1_OFFSET UNITYSDK_OFFSET(0xE0D25C0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__POSTLOADAVATARGOGALGAME_B__2_OFFSET UNITYSDK_OFFSET(0xE0D25E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass32_0_TypeDefinitionIndex = 61118;

	class NPCCrowdAvatarManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::NPCCrowd::FNPCAttachPointNameHandle headBoneNameHandle; // 0x10
		::NPCCrowd::FNPCAttachPointNameHandle middlePointNameHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAvatarGoGalgame_b__1(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__POSTLOADAVATARGOGALGAME_B__1_OFFSET))(this, slotInfo);
		}

		::System::Boolean _PostLoadAvatarGoGalgame_b__2(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS32_0__POSTLOADAVATARGOGALGAME_B__2_OFFSET))(this, slotInfo);
		}
	};
}
