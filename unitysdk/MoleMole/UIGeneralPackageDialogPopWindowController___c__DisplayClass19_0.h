#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPGBJFMCIA.h"
#include "unitysdk/System/Object.h"

class NBDLJECLJJO;
namespace MoleMole { class UIGeneralPackageDialogPopWindowController; }

#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1759FA50)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0x1759FA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPackageDialogPopWindowController___c__DisplayClass19_0_TypeDefinitionIndex = 78745;

	class UIGeneralPackageDialogPopWindowController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralPackageDialogPopWindowController* __4__this; // 0x10
		::NBDLJECLJJO* goodsInfo; // 0x18
		::ILPGBJFMCIA purchaseGoodsInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS19_0__DOPURCHASE_B__0_OFFSET))(this);
		}
	};
}
