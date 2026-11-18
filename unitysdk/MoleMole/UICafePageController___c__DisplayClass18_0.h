#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFCCPGCGLIE;
namespace MoleMole { class UICafePageController; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1738BA30)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__0_OFFSET UNITYSDK_OFFSET(0x1738BA40)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__1_OFFSET UNITYSDK_OFFSET(0x1738BA90)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__2_OFFSET UNITYSDK_OFFSET(0x1738BAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass18_0_TypeDefinitionIndex = 52441;

	class UICafePageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::EFCCPGCGLIE* selectedCafeItem; // 0x10
		::MoleMole::UICafePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _PayCafe_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__0_OFFSET))(this);
		}

		::System::Void _PayCafe_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__1_OFFSET))(this);
		}

		::System::Void _PayCafe_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS18_0__PAYCAFE_B__2_OFFSET))(this);
		}
	};
}
