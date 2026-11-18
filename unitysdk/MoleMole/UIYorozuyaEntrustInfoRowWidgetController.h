#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaEntrustInfoRowWidgetController_EChallengeType.h"
#include "unitysdk/MoleMole/UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo.h"
#include "unitysdk/System/Nullable_1.h"

class EGMJAPMDEIH;
class EODOHHJANJD;
class MAPGJBPIGLF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_GJOOOLCAMEI_OFFSET UNITYSDK_OFFSET(0x16718740)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16718200)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16718290)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16718050)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16718190)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETABYSS_OFFSET UNITYSDK_OFFSET(0x16718F10)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x16719680)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGEBYOVERRIDEITEMDATA_OFFSET UNITYSDK_OFFSET(0x16718E70)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGE_OFFSET UNITYSDK_OFFSET(0x16718E00)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETPLAYTYPETEXT_OFFSET UNITYSDK_OFFSET(0x167194B0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETRALLYCHALLENGE_OFFSET UNITYSDK_OFFSET(0x167185C0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x167183C0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEIDVALID_OFFSET UNITYSDK_OFFSET(0x16718310)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16719700)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16719710)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167197A0)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16719830)
#define MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167198C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaEntrustInfoRowWidgetController_TypeDefinitionIndex = 49760;

	class UIYorozuyaEntrustInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MAPGJBPIGLF* _view; // 0x2F8
		::EGMJAPMDEIH* AJLHHAOHPMM; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean _CheckChallengeIDValid(::System::Int32 questID, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEIDVALID_OFFSET))(this, questID, type);
		}

		::System::Boolean _CheckChallengeFinish(::System::Int32 questID, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER__CHECKCHALLENGEFINISH_OFFSET))(this, questID, type);
		}

		::System::Void SetRallyChallenge(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETRALLYCHALLENGE_OFFSET))(this, id);
		}

		::System::Void SetHollowChallenge(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGE_OFFSET))(this, id);
		}

		::System::Void SetHollowChallengeByOverrideItemData(::System::Int32 id, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo overrideChangeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_OverrideChangeInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETHOLLOWCHALLENGEBYOVERRIDEITEMDATA_OFFSET))(this, id, overrideChangeInfo);
		}

		::System::Void SetAbyss(::EODOHHJANJD* abyss)
		{
			return ((::System::Void(*)(::PVOID, ::EODOHHJANJD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETABYSS_OFFSET))(this, abyss);
		}

		::System::Void SetPlayTypeText(::System::String* title, ::System::Int32 progress, ::System::Int32 totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETPLAYTYPETEXT_OFFSET))(this, title, progress, totalProgress);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GJOOOLCAMEI(::System::Int32 MGMDLMBEDJF, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType OBNIAHNMHPF, ::System::Boolean OFINNBGHDGI, ::System::Nullable_1<::System::Object*> LGAHKHEIONI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIYorozuyaEntrustInfoRowWidgetController_EChallengeType, ::System::Boolean, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAENTRUSTINFOROWWIDGETCONTROLLER_GJOOOLCAMEI_OFFSET))(this, MGMDLMBEDJF, OBNIAHNMHPF, OFINNBGHDGI, LGAHKHEIONI);
		}
	};
}
