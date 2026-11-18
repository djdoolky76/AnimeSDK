#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/FNPCAttachPointNameHandle.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__BINDBONESLOTSGALGAME_B__0_OFFSET UNITYSDK_OFFSET(0xF14D4D0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__BINDBONESLOTSGALGAME_B__1_OFFSET UNITYSDK_OFFSET(0xF14D4F0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF14D4C0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager___c__DisplayClass30_0_TypeDefinitionIndex = 61115;

	class NPCCrowdAvatarManager___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::NPCCrowd::FNPCAttachPointNameHandle middlePointNameHandle; // 0x10
		::NPCCrowd::FNPCAttachPointNameHandle headBoneNameHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BindBoneSlotsGalgame_b__0(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__BINDBONESLOTSGALGAME_B__0_OFFSET))(this, slotInfo);
		}

		::System::Boolean _BindBoneSlotsGalgame_b__1(::NPCCrowd::Animation::NPCCPUAnimationSlotInfo* slotInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER___C__DISPLAYCLASS30_0__BINDBONESLOTSGALGAME_B__1_OFFSET))(this, slotInfo);
		}
	};
}
