#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class FAPOHCDOPBN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x17D812A0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x17D81520)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D811F0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D81420)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17D81530)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D81200)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D814B0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D81250)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x17D815A0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x17D81850)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D81B70)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D81B80)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x17D81C10)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17D81CA0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D81CB0)
#define MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D81CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRewardPreviewPopWindowController_TypeDefinitionIndex = 69226;

	class UIRewardPreviewPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::FAPOHCDOPBN* _view; // 0x320
		::System::Collections::Generic::List_1<::System::Object*>* AAGENFAINCH; // 0x328
		::System::String* NBNKJCEMOHD; // 0x330
		::System::String* AIJBCIPAIAB; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetData(::System::String* title, ::System::String* subTitle, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* rewardInfo, ::System::Int32 minCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_SETDATA_OFFSET))(this, title, subTitle, rewardInfo, minCount);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREWARDPREVIEWPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
