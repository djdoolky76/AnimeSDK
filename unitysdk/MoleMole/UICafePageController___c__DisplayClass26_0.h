#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

class EFCCPGCGLIE;
namespace MoleMole { class UICafePageController; }
namespace System { class Action; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18488110)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET UNITYSDK_OFFSET(0x18488120)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET UNITYSDK_OFFSET(0x18488130)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass26_0_TypeDefinitionIndex = 52440;

	class UICafePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UICafePageController* __4__this; // 0x10
		::EFCCPGCGLIE* cafeItem; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowDrinkCafeFinished_b__0(::DJDDGKFCNAJ_IGOPHLMOGAO _)
		{
			return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_B__0_OFFSET))(this, _);
		}

		::System::Void _OnShowDrinkCafeFinished_g__ShowTip_1(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_0__ONSHOWDRINKCAFEFINISHED_G__SHOWTIP_1_OFFSET))(this, onFinish);
		}
	};
}
