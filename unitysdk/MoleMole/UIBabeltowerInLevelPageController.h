#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class EGOPCLAIICK;
class HDGDGHMDJLK;
namespace MoleMole { class ActivityTrickLevelContext; }
namespace MoleMole { class UIBabeltowerTrickLevelRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaAbyssBangbooRowV3WidgetController; }
namespace MoleMole { class UIYorozuyaAbyssHeadRowV2WidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_AMEMHKDIBEK_OFFSET UNITYSDK_OFFSET(0x19FA1370)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_BEFOEBLENDE_OFFSET UNITYSDK_OFFSET(0x19FA16B0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_BOENMOKBNPO_OFFSET UNITYSDK_OFFSET(0x19FA0BB0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_EOMDONDOJJI_OFFSET UNITYSDK_OFFSET(0x19F9F7A0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_FFCGCKKLNFI_OFFSET UNITYSDK_OFFSET(0x19FA0140)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19F9F570)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ILBPOJOHJPE_OFFSET UNITYSDK_OFFSET(0x19FA21F0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_JJIHNHHKJMF_OFFSET UNITYSDK_OFFSET(0x19FA06C0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_JLBOAJAOOCF_OFFSET UNITYSDK_OFFSET(0x19FA1AE0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F9F580)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19FA0080)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FA0300)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F9F610)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_PJCGPDBAIPL_OFFSET UNITYSDK_OFFSET(0x19FA1510)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FA0370)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19FA0600)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19FA0690)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19FA06A0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19FA06B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerInLevelPageController_TypeDefinitionIndex = 75614;

	class UIBabeltowerInLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::EGOPCLAIICK* _view; // 0x320
		::MoleMole::ActivityTrickLevelContext* IJKIODBMABN; // 0x328
		::System::Boolean BBBDDOGMIJO; // 0x330
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* EIGPFLNGPCA; // 0x338
		::MoleMole::UIYorozuyaAbyssBangbooRowV3WidgetController* FCEDGAKCEDL; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* JOIFDKGIGED; // 0x348
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* MDHDFFKMJMJ; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* BHBIMIDHHBC; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* PCKLFBDFDKH; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickLevelRowWidgetController*>* ELFODJPNFAI; // 0x368
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaAbyssHeadRowV2WidgetController*>* PFMIBNNGPJH; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void JJIHNHHKJMF(::HDGDGHMDJLK* IALBGBGKFLD)
		{
			return ((::System::Void(*)(::PVOID, ::HDGDGHMDJLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_JJIHNHHKJMF_OFFSET))(this, IALBGBGKFLD);
		}

		::System::Void BOENMOKBNPO(::HDGDGHMDJLK* IALBGBGKFLD)
		{
			return ((::System::Void(*)(::PVOID, ::HDGDGHMDJLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_BOENMOKBNPO_OFFSET))(this, IALBGBGKFLD);
		}

		::System::Void EOMDONDOJJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_EOMDONDOJJI_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* AMEMHKDIBEK()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_AMEMHKDIBEK_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* PJCGPDBAIPL()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_PJCGPDBAIPL_OFFSET))(this);
		}

		::System::Void BEFOEBLENDE(::HDGDGHMDJLK* IALBGBGKFLD)
		{
			return ((::System::Void(*)(::PVOID, ::HDGDGHMDJLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_BEFOEBLENDE_OFFSET))(this, IALBGBGKFLD);
		}

		::System::Void JLBOAJAOOCF(::HDGDGHMDJLK* IALBGBGKFLD)
		{
			return ((::System::Void(*)(::PVOID, ::HDGDGHMDJLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_JLBOAJAOOCF_OFFSET))(this, IALBGBGKFLD);
		}

		::System::Void FFCGCKKLNFI(::HDGDGHMDJLK* IALBGBGKFLD)
		{
			return ((::System::Void(*)(::PVOID, ::HDGDGHMDJLK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_FFCGCKKLNFI_OFFSET))(this, IALBGBGKFLD);
		}

		::System::Void ILBPOJOHJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ILBPOJOHJPE_OFFSET))(this);
		}
	};
}
