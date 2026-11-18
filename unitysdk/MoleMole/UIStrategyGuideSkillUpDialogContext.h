#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164AB5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillUpDialogContext_TypeDefinitionIndex = 71337;

	class UIStrategyGuideSkillUpDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::System::UInt32 AvatarID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
