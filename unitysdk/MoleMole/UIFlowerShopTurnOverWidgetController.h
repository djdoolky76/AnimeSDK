#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ODNBJIEICJH;
class OFGINNOGGLC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFlowerShopTurnOverWidgetController_ViewModel; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x18D74900)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_JOEBEEOBBNN_OFFSET UNITYSDK_OFFSET(0x18D75100)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_KIMPBHLOHCP_OFFSET UNITYSDK_OFFSET(0x18D75200)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_LFOBOALJGLG_OFFSET UNITYSDK_OFFSET(0x18D74690)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_MMDFMBHMLGJ_OFFSET UNITYSDK_OFFSET(0x18D747A0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D74A10)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D74AA0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D745C0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D749A0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_SETINCOME_OFFSET UNITYSDK_OFFSET(0x18D74B20)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D74D20)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x18D74E30)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D74EC0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D74F50)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D74FE0)
#define MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18D75070)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopTurnOverWidgetController_TypeDefinitionIndex = 71040;

	class UIFlowerShopTurnOverWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OFGINNOGGLC* _view; // 0x2C8
		::ODNBJIEICJH* FPFDBCJDECN; // 0x2D0
		::MoleMole::UIFlowerShopTurnOverWidgetController_ViewModel* FFDBFAEKDCL; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIIncomeNumWidgetController*>* GMKGKKHMKKK; // 0x2E0
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* JDENFOCLIMB; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetIncome(::System::Int32 income, ::System::Boolean animation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_SETINCOME_OFFSET))(this, income, animation);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void MMDFMBHMLGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_MMDFMBHMLGJ_OFFSET))(this);
		}

		::System::Void JOEBEEOBBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_JOEBEEOBBNN_OFFSET))(this);
		}

		::System::Void LFOBOALJGLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_LFOBOALJGLG_OFFSET))(this);
		}

		::System::Void KIMPBHLOHCP(::System::Boolean AOKJEGNBALI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPTURNOVERWIDGETCONTROLLER_KIMPBHLOHCP_OFFSET))(this, AOKJEGNBALI);
		}
	};
}
