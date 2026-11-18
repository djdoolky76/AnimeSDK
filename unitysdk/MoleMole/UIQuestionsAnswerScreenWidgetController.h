#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class IMLJGFCEKCE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailContext; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleContext; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETODETAIL_OFFSET UNITYSDK_OFFSET(0x168DD950)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSETTLE_OFFSET UNITYSDK_OFFSET(0x168DDDE0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSTANDBY_OFFSET UNITYSDK_OFFSET(0x168DD810)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_DIRECTCHANGETOSETTLE_OFFSET UNITYSDK_OFFSET(0x168DDBE0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEIN_OFFSET UNITYSDK_OFFSET(0x168DDF10)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEOUT_OFFSET UNITYSDK_OFFSET(0x168DDEA0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEIN_OFFSET UNITYSDK_OFFSET(0x168DDFF0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEOUT_OFFSET UNITYSDK_OFFSET(0x168DDF80)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEIN_OFFSET UNITYSDK_OFFSET(0x168DE060)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEOUT_OFFSET UNITYSDK_OFFSET(0x168DE0D0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x168DDA00)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDESTANDBY_OFFSET UNITYSDK_OFFSET(0x168DD8B0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168DD700)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168DD790)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168DD4E0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168DD690)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168DE140)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168DE1A0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168DE230)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168DE2C0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168DE350)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenWidgetController_TypeDefinitionIndex = 73954;

	class UIQuestionsAnswerScreenWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::IMLJGFCEKCE* _view; // 0x2C8
		::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController* IKABNDOFHNG; // 0x2D0
		::MoleMole::UIQuestionsAnswerScreenDetailWidgetController* HPELNFEHKCG; // 0x2D8
		::MoleMole::UIQuestionsAnswerScreenSettleWidgetController* GGCENIGAJDK; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToStandby()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSTANDBY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask HideStandBy()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDESTANDBY_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToDetail(::MoleMole::UIQuestionsAnswerScreenDetailContext* context)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenDetailContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETODETAIL_OFFSET))(this, context);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::System::Void DirectChangeToSettle(::MoleMole::UIQuestionsAnswerScreenSettleContext* context, ::System::Threading::CancellationToken cts)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenSettleContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_DIRECTCHANGETOSETTLE_OFFSET))(this, context, cts);
		}

		::Cysharp::Threading::Tasks::UniTask ChangeToSettle(::MoleMole::UIQuestionsAnswerScreenSettleContext* context, ::System::Threading::CancellationToken cts)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::UIQuestionsAnswerScreenSettleContext*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_CHANGETOSETTLE_OFFSET))(this, context, cts);
		}

		::System::String* GetQuestionAnswerScreenUIPageDetailFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEOUT_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageDetailFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGEDETAILFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageSettlementFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEOUT_OFFSET))(this);
		}

		::System::String* GetQuestionAnswerScreenUIPageSettlementFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONANSWERSCREENUIPAGESETTLEMENTFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionsAnswerScreenUIPageStandbyFadeIn()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEIN_OFFSET))(this);
		}

		::System::String* GetQuestionsAnswerScreenUIPageStandbyFadeOut()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER_GETQUESTIONSANSWERSCREENUIPAGESTANDBYFADEOUT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
