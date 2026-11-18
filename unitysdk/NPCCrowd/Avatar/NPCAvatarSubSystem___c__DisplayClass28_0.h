#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/System/Object.h"

class COCJHGGDBCA;

#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11FC26C0)
#define NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS28_0__REFRESHALLNPCTIMEPERIODTAGS_B__0_OFFSET UNITYSDK_OFFSET(0x11FC26D0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarSubSystem___c__DisplayClass28_0_TypeDefinitionIndex = 84811;

	class NPCAvatarSubSystem___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::ProtoScript::TimePeriodType period; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshAllNpcTimePeriodTags_b__0(::COCJHGGDBCA* npcComp)
		{
			return ((::System::Void(*)(::PVOID, ::COCJHGGDBCA*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARSUBSYSTEM___C__DISPLAYCLASS28_0__REFRESHALLNPCTIMEPERIODTAGS_B__0_OFFSET))(this, npcComp);
		}
	};
}
