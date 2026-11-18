#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PGCKDGJCNLH.h"

#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A22AA80)
#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__RESETCONTEXTS_B__0_OFFSET UNITYSDK_OFFSET(0x1A22AA90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarFormSwitchDialogPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 86347;

	class UIAvatarFormSwitchDialogPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Int32 curEquippedForm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ResetContexts_b__0(::PGCKDGJCNLH x, ::PGCKDGJCNLH y)
		{
			return ((::System::Int32(*)(::PVOID, ::PGCKDGJCNLH, ::PGCKDGJCNLH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__RESETCONTEXTS_B__0_OFFSET))(this, x, y);
		}
	};
}
