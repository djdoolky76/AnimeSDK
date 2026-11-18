#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALLHKDOEKBK;
namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x187C0220)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__INITTAB_B__2_OFFSET UNITYSDK_OFFSET(0x187C0230)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController___c__DisplayClass19_1_TypeDefinitionIndex = 66945;

	template <typename T>
	class UIHandBookManualWidgetController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::ALLHKDOEKBK* item; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::MoleMole::UIBaseController* _InitTab_b__2()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER___C__DISPLAYCLASS19_1__INITTAB_B__2_OFFSET))(this);
		}
	};
}
