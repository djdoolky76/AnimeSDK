#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopLevelInfoWidgetController.h"

class OKNCHCKBLHI;
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET UNITYSDK_OFFSET(0x167F3D30)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x167F3660)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167F4080)
#define MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x167F4120)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopLevelInfoWidgetController_TypeDefinitionIndex = 82578;

	class UIVideoshopLevelInfoWidgetController : public ::MoleMole::UIGeneralShopLevelInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::System::Object* template_, ::System::Single curLevelData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_, curLevelData);
		}

		::System::Void __base_SetByTemplate(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER___BASE_SETBYTEMPLATE_OFFSET))(this, P0, P1);
		}

		static ::System::Void MONMIILJFIM(::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI, ::OKNCHCKBLHI* DEKJDEPKKLH, ::System::Single PJJNGDCJEDA)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UILocalizationText*, ::OKNCHCKBLHI*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPLEVELINFOWIDGETCONTROLLER_MONMIILJFIM_OFFSET))(FCCLIEJAKLI, DEKJDEPKKLH, PJJNGDCJEDA);
		}
	};
}
