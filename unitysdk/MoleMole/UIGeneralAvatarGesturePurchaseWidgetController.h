#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CJIKKLKJJAP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }

#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_GOKKLBCCHBP_OFFSET UNITYSDK_OFFSET(0x180A46E0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x180A4930)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180A4590)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180A4630)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180A4790)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180A47F0)
#define MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180A4890)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralAvatarGesturePurchaseWidgetController_TypeDefinitionIndex = 73750;

	class UIGeneralAvatarGesturePurchaseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void GOKKLBCCHBP(::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_GOKKLBCCHBP_OFFSET))(this, AAOCANGHBDG);
		}

		::CJIKKLKJJAP* OGMPOGIHBIK()
		{
			return ((::CJIKKLKJJAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALAVATARGESTUREPURCHASEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
