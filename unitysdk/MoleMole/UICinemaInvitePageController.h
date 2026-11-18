#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/PAOFHMIAFAE.h"

class KPMBBKJABGC;
class MOGLNKNAJPM;
class NDJMMOGDHMK;
class NGOGMFGAAOM;
class OAEFGCLEHHO;
class PNPFJKPGEHF;
namespace MoleMole { class UICinemaInviteMovieWidgetController; }
namespace MoleMole { class UICinemaInvitePageContext; }
namespace MoleMole { class UICinemaInviteRoleWidgetController; }
namespace MoleMole { class UICinemaInviteWidgetContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x1A36E740)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A36DAE0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCINEMAPLAYEXIT_OFFSET UNITYSDK_OFFSET(0x1A36EE90)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x1A36E790)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLOSESELECTMOVIE_OFFSET UNITYSDK_OFFSET(0x1A36E8F0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A36DAF0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELERROR_OFFSET UNITYSDK_OFFSET(0x1A36EE40)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A36EC30)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A36E4F0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSTARTDATELEVEL_OFFSET UNITYSDK_OFFSET(0x1A36E9A0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A36E550)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A36DB80)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A36DDD0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTMOVIE_OFFSET UNITYSDK_OFFSET(0x1A36E2B0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTROLE_OFFSET UNITYSDK_OFFSET(0x1A36E0A0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36F050)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A36F060)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A36F0F0)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A36F100)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A36F110)
#define MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A36F120)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInvitePageController_TypeDefinitionIndex = 54119;

	class UICinemaInvitePageController : public ::MoleMole::UIWindowController
	{
	public:
		::NGOGMFGAAOM* _view; // 0x320
		::MoleMole::UICinemaInviteRoleWidgetController* roleSelectWidget; // 0x328
		::MoleMole::UICinemaInviteMovieWidgetController* movieSelectWidget; // 0x330
		::PAOFHMIAFAE state; // 0x338
		::System::Byte _padding0[0x4];
		::MoleMole::UICinemaInviteWidgetContext* widgetContext; // 0x340
		::MoleMole::UICinemaInvitePageContext* inviteContext; // 0x348
		::KPMBBKJABGC* inviteHandler; // 0x350
		::System::Collections::Generic::List_1<::MOGLNKNAJPM*>* dateLevelDataList; // 0x358
		::NDJMMOGDHMK* cinemaModel; // 0x360
		::MOGLNKNAJPM* nowSelectLevel; // 0x368
		::System::Boolean clickLevelMask; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::NGOGMFGAAOM* GetView()
		{
			return ((::NGOGMFGAAOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void OnClickClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLICKCLOSE_OFFSET))(this);
		}

		::System::Void OnCloseSelectMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCLOSESELECTMOVIE_OFFSET))(this);
		}

		::System::Void OpenSelectRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTROLE_OFFSET))(this);
		}

		::System::Void OpenSelectMovie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_OPENSELECTMOVIE_OFFSET))(this);
		}

		::System::Void OnStartDateLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONSTARTDATELEVEL_OFFSET))(this);
		}

		::System::Void OnEnterCinemaLevelSuccess(::PNPFJKPGEHF* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::PNPFJKPGEHF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELSUCCESS_OFFSET))(this, rcvMessage);
		}

		::System::Void OnEnterCinemaLevelError(::OAEFGCLEHHO* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONENTERCINEMALEVELERROR_OFFSET))(this, rcvMessage);
		}

		::System::Void OnCinemaPlayExit(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER_ONCINEMAPLAYEXIT_OFFSET))(this, isFinish);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
