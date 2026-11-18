#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BIEHBLPBAHP;
class KOIDMLPJGML;
namespace MoleMole { class UIZenkovBagRoleWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170C4460)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagRoleWidgetController_Context_TypeDefinitionIndex = 85005;

	class UIZenkovBagRoleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BIEHBLPBAHP* WeaponEmptyDropTarget; // 0x28
		::System::String* WeaponEmptyLabel; // 0x30
		::System::Action_1<::MoleMole::UIZenkovBagRoleWidgetController*>* AfterContextApplied; // 0x38
		::System::String* WeaponEmptyBgPath; // 0x40
		::System::Action_1<::System::Int32>* OnSlotClicked; // 0x48
		::System::String* TeleportTextMapKey; // 0x50
		::System::Action_1<::System::Int32>* OnEmptyWeaponClicked; // 0x58
		::KOIDMLPJGML* WeaponViewData; // 0x60
		::System::Boolean DisplayAvatarIsUp; // 0x68
		::System::Boolean IsSlotLocked; // 0x69
		::System::Boolean IsCanUnlock; // 0x6A
		::System::Boolean IsSplitTeam; // 0x6B
		::System::Int32 SlotIndex; // 0x6C
		::System::Int32 DisplayAvatarTemplateId; // 0x70
		::System::Int32 LockTipGroupId; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
