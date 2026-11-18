#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PKOGEOBCDDO;

#define MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1760E300)
#define MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS7_0__TRYSENDINVITATION_B__2_OFFSET UNITYSDK_OFFSET(0x1760E310)

namespace MoleMole
{
	inline static constexpr unsigned int UIInvitationMessageWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 44697;

	class UIInvitationMessageWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::PKOGEOBCDDO* trustLvConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrySendInvitation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINVITATIONMESSAGEWIDGETCONTROLLER___C__DISPLAYCLASS7_0__TRYSENDINVITATION_B__2_OFFSET))(this);
		}
	};
}
