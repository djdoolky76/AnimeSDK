#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopLevelInfoWidgetController.h"

class BDNPNPOIKIA;
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET UNITYSDK_OFFSET(0x1A21A2F0)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A219F60)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A21A4F0)
#define MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1A21A590)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeLevelInfoWidgetController_TypeDefinitionIndex = 48732;

	class UIArcadeLevelInfoWidgetController : public ::MoleMole::UIGeneralShopLevelInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		::System::Void __base_SetByTemplate(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET))(this, P0, P1);
		}

		static ::System::Void MONMIILJFIM(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::BDNPNPOIKIA* DEKJDEPKKLH, ::System::Single PJJNGDCJEDA)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::BDNPNPOIKIA*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADELEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET))(FCCLIEJAKLI, DEKJDEPKKLH, PJJNGDCJEDA);
		}
	};
}
