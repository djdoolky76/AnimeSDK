#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AIPAFAGLLGH;
class HFEDNAJAAMJ;
class MLPACHEMFIF;
class NOHGMPIMCEF;
class OKEKBNAEHAG;
class OLIPCNFAECO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_CMLGBBJEHIP_OFFSET UNITYSDK_OFFSET(0x196D4760)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196D5400)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x196D4490)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196D5490)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196D3FE0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196D4040)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET UNITYSDK_OFFSET(0x196D4600)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET UNITYSDK_OFFSET(0x196D5A60)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0x196D5510)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196D5D60)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196D5E40)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x196D5ED0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196D5F70)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196D6000)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x196D6090)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCinemaDateWidgetController_TypeDefinitionIndex = 62746;

	class UIInLevelPauseCinemaDateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OLIPCNFAECO* _view; // 0x2C8
		::System::Boolean GAOHKIGAMPK; // 0x2D0
		::System::Byte _padding0[0x7];
		::NOHGMPIMCEF* datePlayController; // 0x2D8
		::HFEDNAJAAMJ* cinemaDateConfig; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>* rateInfoList; // 0x2E8
		::System::Collections::Generic::List_1<::OKEKBNAEHAG*>* challengeDataList; // 0x2F0
		::System::Boolean KAABGGMMGMN; // 0x2F8
		::System::Byte _padding1[0x7];
		::AIPAFAGLLGH* GLAPBJDJMAD; // 0x300
		::MoleMole::UIInLevelPauseCinemaSingleWidgetController* BKBCHJEPGMN; // 0x308
		::System::Collections::Generic::List_1<::MLPACHEMFIF*>* singleChallengeList; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshDateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET))(this);
		}

		::System::Void RefreshMissionTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET))(this);
		}

		::System::Void RefreshMissionSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CMLGBBJEHIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_CMLGBBJEHIP_OFFSET))(this);
		}
	};
}
