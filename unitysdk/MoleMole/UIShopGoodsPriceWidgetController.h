#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EKONLEPGMOH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15C6B210)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C6AFB0)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C6B050)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6B280)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15C6B2E0)
#define MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15C6B380)

namespace MoleMole
{
	inline static constexpr unsigned int UIShopGoodsPriceWidgetController_TypeDefinitionIndex = 83953;

	class UIShopGoodsPriceWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::EKONLEPGMOH* OGMPOGIHBIK()
		{
			return ((::EKONLEPGMOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPGOODSPRICEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
