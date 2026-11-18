#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class NJDIHHLAMHO;
class OHDHGHEIFAI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14BF9FB0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14BF9DF0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BF9EB0)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x14BF9F00)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BFA020)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14BFA080)
#define MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BFA120)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFightUI_SingleLevelInfoWidgetController_TypeDefinitionIndex = 82613;

	class UIActivityFightUI_SingleLevelInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetLevel(::NMANHEHIJAL_1<::OHDHGHEIFAI*>* levels)
		{
			return ((::System::Void(*)(::PVOID, ::NMANHEHIJAL_1<::OHDHGHEIFAI*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, levels);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::NJDIHHLAMHO* OGMPOGIHBIK()
		{
			return ((::NJDIHHLAMHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFIGHTUI_SINGLELEVELINFOWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
