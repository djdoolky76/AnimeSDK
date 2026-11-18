#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIRecommendGroupRowWidgetController_RecommendGroupRowType.h"

class BFLBNDFBIBH;
class EMONNCFEDAO;
class IKFBCIGNNEP;
class KELBBDCLIGC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRecommendTypePropertyRowWidgetController; }
namespace MoleMole { class UIRecommendTypeSuitRowWidgetController; }
namespace MoleMole { template <typename T> class UIRoleEquipRecommendPopContext_1; }
namespace System { template <typename T> class Action_1; }
template <typename T> class DFDEIDBBGHG_1;

#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FF7150)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FF71E0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FF7020)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FF7080)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x18FF7790)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORPROPERTY_OFFSET UNITYSDK_OFFSET(0x18FF7A00)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORSUIT_OFFSET UNITYSDK_OFFSET(0x18FF7260)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF8030)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FF8040)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FF80D0)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FF8160)
#define MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FF81F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendGroupRowWidgetController_TypeDefinitionIndex = 75548;

	class UIRecommendGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::KELBBDCLIGC* _view; // 0x2F8
		::MoleMole::UIRoleEquipRecommendPopContext_1<::EMONNCFEDAO*>* DAAAEJDBNFI; // 0x300
		::MoleMole::UIRecommendTypeSuitRowWidgetController* AEPEHLFEGEE; // 0x308
		::MoleMole::UIRecommendTypePropertyRowWidgetController* LFCPGOCFINB; // 0x310
		::MoleMole::UIRecommendGroupRowWidgetController_RecommendGroupRowType BIMGFFHKENK; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshViewForSuit(::System::Action_1<::System::Boolean>* onSuitFocusChange, ::System::Boolean isConfigData, ::DFDEIDBBGHG_1<::BFLBNDFBIBH*>* configSuitData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Boolean, ::DFDEIDBBGHG_1<::BFLBNDFBIBH*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORSUIT_OFFSET))(this, onSuitFocusChange, isConfigData, configSuitData);
		}

		::System::Void RefreshViewForProperty(::System::Boolean isConfigData, ::DFDEIDBBGHG_1<::IKFBCIGNNEP*>* configPropertyData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::DFDEIDBBGHG_1<::IKFBCIGNNEP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHVIEWFORPROPERTY_OFFSET))(this, isConfigData, configPropertyData);
		}

		::System::Void RefreshUI(::System::Boolean NotEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, NotEmpty);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDGROUPROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
