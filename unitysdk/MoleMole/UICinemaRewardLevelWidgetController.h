#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class LNHGEFHFOGK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_FLEJKHLBECL_OFFSET UNITYSDK_OFFSET(0x17564960)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175644C0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17564550)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175643F0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17564450)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_SETASSETPATHGETTER_OFFSET UNITYSDK_OFFSET(0x175645D0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_SETSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x17564620)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175646C0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17564720)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175647B0)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17564840)
#define MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x175648D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardLevelWidgetController_TypeDefinitionIndex = 65285;

	class UICinemaRewardLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::LNHGEFHFOGK* _view; // 0x2C8
		::System::Func_3<::System::Int32, ::System::Boolean, ::Foundation::AssetPath>* AHGDEKLLDIC; // 0x2D0
		::System::Threading::CancellationTokenSource* effectTokenSource; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetAssetPathGetter(::System::Func_3<::System::Int32, ::System::Boolean, ::Foundation::AssetPath>* assetPathGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::System::Int32, ::System::Boolean, ::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_SETASSETPATHGETTER_OFFSET))(this, assetPathGetter);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid SetShowLevel(::System::Boolean isGold, ::System::Int32 level, ::System::Boolean hasEffect)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_SETSHOWLEVEL_OFFSET))(this, isGold, level, hasEffect);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::Foundation::AssetPath FLEJKHLBECL(::System::Int32 BIOGEIHKABE, ::System::Boolean KOBGFABAOEE)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELWIDGETCONTROLLER_FLEJKHLBECL_OFFSET))(this, BIOGEIHKABE, KOBGFABAOEE);
		}
	};
}
