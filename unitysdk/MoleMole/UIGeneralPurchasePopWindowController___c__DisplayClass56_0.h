#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPGBJFMCIA.h"
#include "unitysdk/System/Object.h"

class NBDLJECLJJO;
namespace MoleMole { class UIGeneralPurchasePopWindowController; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x180479B0)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__DOPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0x180479C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass56_0_TypeDefinitionIndex = 56606;

	class UIGeneralPurchasePopWindowController___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralPurchasePopWindowController* __4__this; // 0x10
		::NBDLJECLJJO* goodsInfo; // 0x18
		::ILPGBJFMCIA purchaseGoodsInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS56_0__DOPURCHASE_B__0_OFFSET))(this);
		}
	};
}
