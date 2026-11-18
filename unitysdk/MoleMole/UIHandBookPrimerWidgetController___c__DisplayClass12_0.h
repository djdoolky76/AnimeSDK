#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALLHKDOEKBK;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }

#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17690850)
#define MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS12_0__INITTAB_B__1_OFFSET UNITYSDK_OFFSET(0x17690860)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPrimerWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 91319;

	class UIHandBookPrimerWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::ALLHKDOEKBK* item; // 0x10
		::MoleMole::UIHandBookPrimerWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBaseController* _InitTab_b__1()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPRIMERWIDGETCONTROLLER___C__DISPLAYCLASS12_0__INITTAB_B__1_OFFSET))(this);
		}
	};
}
