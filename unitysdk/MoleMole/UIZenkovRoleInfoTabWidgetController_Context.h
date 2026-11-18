#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
class FAKLNMJEGOJ;

#define MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x13B40610)
#define MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B40640)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRoleInfoTabWidgetController_Context_TypeDefinitionIndex = 61542;

	class UIZenkovRoleInfoTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarItemData; // 0x28
		::FAKLNMJEGOJ* KovItem; // 0x30
		::System::Int32 WeaponID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AvatarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEINFOTABWIDGETCONTROLLER_CONTEXT_GET_AVATARID_OFFSET))(this);
		}
	};
}
