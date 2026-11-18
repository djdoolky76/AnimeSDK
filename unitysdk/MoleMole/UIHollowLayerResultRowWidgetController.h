#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Nullable_1.h"

class JKMBEBEMFNI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19C6ED10)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C6EDA0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19C6EC40)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19C6ECA0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x19C6EE20)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_SETTIMERICONACTIVE_OFFSET UNITYSDK_OFFSET(0x19C6F110)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_SETTIMERICONPATH_OFFSET UNITYSDK_OFFSET(0x19C6F180)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6F200)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19C6F260)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C6F2F0)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19C6F380)
#define MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19C6F410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowLayerResultRowWidgetController_TypeDefinitionIndex = 86484;

	class UIHollowLayerResultRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JKMBEBEMFNI* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::String* title, ::System::String* desc, ::System::Nullable_1<::System::UInt32> time)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, title, desc, time);
		}

		::System::Void SetTimerIconActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_SETTIMERICONACTIVE_OFFSET))(this, active);
		}

		::System::Void SetTimerIconPath(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER_SETTIMERICONPATH_OFFSET))(this, assetPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWLAYERRESULTROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
