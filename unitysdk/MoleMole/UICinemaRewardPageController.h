#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class AOKJBNONOAH;
class CFFFHMLOKPF;
class HKMDOAMKNEK;
class JDDKPKONMAL;
class NDJMMOGDHMK;
namespace MoleMole { class UIActivityGotoMissionRowWidgetController; }
namespace MoleMole { class UICinemaRewardContext; }
namespace MoleMole { class UICinemaRewardLevelWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1919F560)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x191A0C80)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1919F570)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET UNITYSDK_OFFSET(0x191A0060)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1919FE00)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1919FF70)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1919F600)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1919FD90)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0x191A0DD0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET UNITYSDK_OFFSET(0x191A0110)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1919FF10)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET UNITYSDK_OFFSET(0x191A06F0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET UNITYSDK_OFFSET(0x191A0340)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET UNITYSDK_OFFSET(0x191A0210)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET UNITYSDK_OFFSET(0x191A0EB0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x191A0FE0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x191A0FF0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x191A1080)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x191A1090)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x191A10A0)
#define MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x191A10B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardPageController_TypeDefinitionIndex = 59013;

	class UICinemaRewardPageController : public ::MoleMole::UIWindowController
	{
	public:
		::HKMDOAMKNEK* _view; // 0x320
		::JDDKPKONMAL* progressBarHandler; // 0x328
		::MoleMole::UICinemaRewardLevelWidgetController* levelWidgetController; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIActivityGotoMissionRowWidgetController*>* accessList; // 0x338
		::AOKJBNONOAH* itemIconHandler; // 0x340
		::System::Collections::Generic::List_1<::CFFFHMLOKPF*>* rewardList; // 0x348
		::NDJMMOGDHMK* model; // 0x350
		::MoleMole::UICinemaRewardContext* context; // 0x358
		::System::UInt32 nowShowLevel; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnServerDataChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONSERVERDATACHANGED_OFFSET))(this);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshRewardList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHREWARDLIST_OFFSET))(this);
		}

		::System::Void RefreshLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEVELINFO_OFFSET))(this);
		}

		::System::Void RefreshLeftExpInfo(::System::Int32 showItemCount, ::System::Int32 nextNeedCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHLEFTEXPINFO_OFFSET))(this, showItemCount, nextNeedCount);
		}

		::System::Void RefreshFetchAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_REFRESHFETCHALLBTN_OFFSET))(this);
		}

		::System::Void OnClickTakeAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_ONCLICKTAKEALLREWARD_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Int32 SortReward(::CFFFHMLOKPF* rewardA, ::CFFFHMLOKPF* rewardB)
		{
			return ((::System::Int32(*)(::PVOID, ::CFFFHMLOKPF*, ::CFFFHMLOKPF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER_SORTREWARD_OFFSET))(this, rewardA, rewardB);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
