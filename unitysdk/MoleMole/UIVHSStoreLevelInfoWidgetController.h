#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopLevelInfoWidgetController.h"

class DMCKDNIBENI;
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET UNITYSDK_OFFSET(0x164D1AA0)
#define MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x164D17C0)
#define MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x164D1CD0)
#define MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x164D1D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreLevelInfoWidgetController_TypeDefinitionIndex = 41221;

	class UIVHSStoreLevelInfoWidgetController : public ::MoleMole::UIGeneralShopLevelInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		::System::Void __base_SetByTemplate(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET))(this, P0, P1);
		}

		static ::System::Void MONMIILJFIM(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::DMCKDNIBENI* DEKJDEPKKLH, ::System::Single PJJNGDCJEDA)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::DMCKDNIBENI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORELEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET))(FCCLIEJAKLI, DEKJDEPKKLH, PJJNGDCJEDA);
		}
	};
}
