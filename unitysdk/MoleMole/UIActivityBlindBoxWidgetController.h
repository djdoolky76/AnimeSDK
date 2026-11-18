#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AEGIAGMBLOC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_DNEFLJBMLCE_OFFSET UNITYSDK_OFFSET(0x19B8AB50)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_NFLMAPEAJHA_OFFSET UNITYSDK_OFFSET(0x19B8ABE0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19B8A290)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B89DC0)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19B8A300)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19B89E60)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19B8A590)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19B8A920)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19B8A980)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x19B8AA20)
#define MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19B8AAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxWidgetController_TypeDefinitionIndex = 77929;

	class UIActivityBlindBoxWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Action_1<::System::Int32>* OnTabIdxChanged; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void DNEFLJBMLCE(::System::Int32 EOGLMAEPALE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_DNEFLJBMLCE_OFFSET))(this, EOGLMAEPALE);
		}

		::System::Void NFLMAPEAJHA(::System::Boolean CGPBOKCEGAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_NFLMAPEAJHA_OFFSET))(this, CGPBOKCEGAO);
		}

		::AEGIAGMBLOC* OGMPOGIHBIK()
		{
			return ((::AEGIAGMBLOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
