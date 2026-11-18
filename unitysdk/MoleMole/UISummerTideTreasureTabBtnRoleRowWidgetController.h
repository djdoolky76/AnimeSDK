#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class HOGEPMIFOGA;
class KGKLCBGGPDN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x188DCDC0)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188DCB60)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188DCC00)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_SETROLEDATA_OFFSET UNITYSDK_OFFSET(0x188DCE30)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x188DCF00)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188DCF60)
#define MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x188DD000)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureTabBtnRoleRowWidgetController_TypeDefinitionIndex = 71091;

	class UISummerTideTreasureTabBtnRoleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetRoleData(::KGKLCBGGPDN* roleConfig, ::System::Func_2<::System::Int32, ::System::Boolean>* checkRoleUnlock, ::System::Func_2<::System::Int32, ::System::Boolean>* checkRecommendUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::KGKLCBGGPDN*, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_SETROLEDATA_OFFSET))(this, roleConfig, checkRoleUnlock, checkRecommendUnlock);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::HOGEPMIFOGA* OGMPOGIHBIK()
		{
			return ((::HOGEPMIFOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURETABBTNROLEROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
