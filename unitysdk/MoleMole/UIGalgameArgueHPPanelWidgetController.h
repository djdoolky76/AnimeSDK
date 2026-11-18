#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class GCIMMDDIFBJ;
class JCJNGHFIIMM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam; }
namespace MoleMole { class UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam; }
namespace MoleMole { class UIGalgameArgueHPWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_ARGUEAVATARNAMEANIM_OFFSET UNITYSDK_OFFSET(0x180A0770)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_HPTOPROOT_OFFSET UNITYSDK_OFFSET(0x180A0660)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GLOPKLIDCJL_OFFSET UNITYSDK_OFFSET(0x180A16B0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITNAMEPANEL_OFFSET UNITYSDK_OFFSET(0x180A1780)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITPANEL_OFFSET UNITYSDK_OFFSET(0x180A11E0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_JNOMGLHDKFF_OFFSET UNITYSDK_OFFSET(0x180A1270)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_NBAOJIBCGEL_OFFSET UNITYSDK_OFFSET(0x180A0CC0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x180A0700)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180A0810)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x180A1190)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180A08B0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETARGUENAMEPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x180A0F30)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHEALTH_OFFSET UNITYSDK_OFFSET(0x180A1D70)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETPLAYERNAME_OFFSET UNITYSDK_OFFSET(0x180A1AE0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x180A1DE0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180A1EC0)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x180A1F60)
#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x180A1FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPPanelWidgetController_TypeDefinitionIndex = 81005;

	class UIGalgameArgueHPPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIGalgameArgueHPWidgetController*>* ECCBOEPNIMK; // 0x2C8
		::System::Int32 NIIBOCJKJGP; // 0x2D0
		::System::Int32 NPOBODHNANF; // 0x2D4
		::System::Boolean PDBGMDLHGIJ; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HPTopRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_HPTOPROOT_OFFSET))(this);
		}

		::GCIMMDDIFBJ* get_ArgueAvatarNameAnim()
		{
			return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GET_ARGUEAVATARNAMEANIM_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void InitPanel(::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam* panelParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueHPPanelParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITPANEL_OFFSET))(this, panelParam);
		}

		::System::Void InitNamePanel(::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam* namePanelParam)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGalgameArgueHPPanelWidgetController_ArgueNamePanelParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_INITNAMEPANEL_OFFSET))(this, namePanelParam);
		}

		::System::Void SetPlayerName(::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETPLAYERNAME_OFFSET))(this, displayName);
		}

		::System::Void SetArgueNamePanelVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETARGUENAMEPANELVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SetHealth(::System::Int32 newHealth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_SETHEALTH_OFFSET))(this, newHealth);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::JCJNGHFIIMM* OGMPOGIHBIK()
		{
			return ((::JCJNGHFIIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void GLOPKLIDCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_GLOPKLIDCJL_OFFSET))(this);
		}

		::System::Void JNOMGLHDKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_JNOMGLHDKFF_OFFSET))(this);
		}

		::System::Void NBAOJIBCGEL(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_NBAOJIBCGEL_OFFSET))(this, MBJDMKCGOCK);
		}
	};
}
