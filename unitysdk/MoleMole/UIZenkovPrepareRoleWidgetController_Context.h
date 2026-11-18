#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class UIZenkovPrepareRoleWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EACF10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPrepareRoleWidgetController_Context_TypeDefinitionIndex = 42262;

	class UIZenkovPrepareRoleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnSlotClicked; // 0x28
		::System::Action_1<::System::Int32>* OnWeaponSlotClicked; // 0x30
		::System::String* TeleportTextMapKey; // 0x38
		::System::Action_1<::MoleMole::UIZenkovPrepareRoleWidgetController*>* AfterContextApplied; // 0x40
		::System::Nullable_1<::System::Int32> DisplayAvatarTemplateId; // 0x48
		::System::Boolean DisplayAvatarIsUp; // 0x50
		::System::Boolean IsSplitTeam; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 LockTipGroupId; // 0x54
		::System::Int32 SlotIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPREPAREROLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
