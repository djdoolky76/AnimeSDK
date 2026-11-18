#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PGCKDGJCNLH.h"

namespace System { class Action; }

#define MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT_AVATARFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEF1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchRoleCardWidgetControllerContext_AvatarForm_TypeDefinitionIndex = 72924;

	class UIPlayerSkinSwitchRoleCardWidgetControllerContext_AvatarForm : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickItemAction; // 0x28
		::PGCKDGJCNLH FormConfigData; // 0x30
		::System::Boolean Equipped; // 0x48
		::System::Boolean Unlocked; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT_AVATARFORM__CTOR_OFFSET))(this);
		}
	};
}
