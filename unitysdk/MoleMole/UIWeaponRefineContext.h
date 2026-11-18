#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPHGNMNLLHF;
class HGAJKHIMKJP;
namespace MoleMole { class UIRoleEquipReplaceWidgetController; }

#define MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B2E7D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeaponRefineContext_TypeDefinitionIndex = 40531;

	class UIWeaponRefineContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x28
		::MoleMole::UIRoleEquipReplaceWidgetController* equipReplaceWidget; // 0x30
		::HGAJKHIMKJP* ItemDevelopData; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAPONREFINECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
