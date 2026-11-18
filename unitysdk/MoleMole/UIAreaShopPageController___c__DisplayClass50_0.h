#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;
namespace MoleMole { class UIAreaShopPageController; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13F680)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__0_OFFSET UNITYSDK_OFFSET(0x1A13F690)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__1_OFFSET UNITYSDK_OFFSET(0x1A13F790)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c__DisplayClass50_0_TypeDefinitionIndex = 71161;

	class UIAreaShopPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::IANDOOLAALI_DLAAJNDJPLO* __9__1; // 0x10
		::MoleMole::UIAreaShopPageController* __4__this; // 0x18
		::System::Int32 currencyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRefreshGoods_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__0_OFFSET))(this);
		}

		::System::Void _OnClickRefreshGoods_b__1(::OAEFGCLEHHO* _)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__1_OFFSET))(this, _);
		}
	};
}
