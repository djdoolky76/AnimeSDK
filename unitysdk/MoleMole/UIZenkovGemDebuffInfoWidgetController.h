#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class GCIMMDDIFBJ;
class HPBBKPBNNKC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x13B3F510)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_HIDEWITHFADEOUT_OFFSET UNITYSDK_OFFSET(0x13B3F390)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x13B3F130)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B3EFE0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13B3F560)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B3F1A0)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3F780)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13B3F790)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13B3F830)
#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13B3F8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffInfoWidgetController_TypeDefinitionIndex = 87209;

	class UIZenkovGemDebuffInfoWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::GCIMMDDIFBJ* EEFOCCNFJCO; // 0x2F8
		::System::Int32 FDBLEIAIKLK; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void HideWithFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_HIDEWITHFADEOUT_OFFSET))(this);
		}

		::System::Void HideImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HPBBKPBNNKC* OGMPOGIHBIK()
		{
			return ((::HPBBKPBNNKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
