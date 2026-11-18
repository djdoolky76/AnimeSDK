#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IFCFOENFEKA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x17DA2260)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17DA2000)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17DA20A0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_SETCARD_OFFSET UNITYSDK_OFFSET(0x17DA22D0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA2380)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17DA23E0)
#define MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17DA2480)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightRecommendCardInfoWidgetController_TypeDefinitionIndex = 79434;

	class UIScaryNightRecommendCardInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetCard(::System::Int32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_SETCARD_OFFSET))(this, cardID);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::IFCFOENFEKA* OGMPOGIHBIK()
		{
			return ((::IFCFOENFEKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTRECOMMENDCARDINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
