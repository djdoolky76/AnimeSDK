#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDPLECHFPGP.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0F7F0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x18F0F800)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c__DisplayClass61_0_TypeDefinitionIndex = 80540;

	class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x10
		::IDPLECHFPGP template_; // 0x18
		::MoleMole::UIBubbleTips* tip; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlaySound_b__0(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__DISPLAYCLASS61_0__PLAYSOUND_B__0_OFFSET))(this, id);
		}
	};
}
