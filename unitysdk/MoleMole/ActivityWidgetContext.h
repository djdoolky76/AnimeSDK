#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMIAOBDMJOH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BPLMEMEELGI;
class CJIEIHEDMME;
class EECKKANKNBM;
class EHLHJNBELDJ;
class GIBMJLOJLKD;
class IILFLKLEPEP;
class KDJEMDDDGPG;
class KMBKDFCNHPJ;
class NEMGKAKOLMB;
namespace MoleMole { class ActivityGuideUIBaseWidgetController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDACTIVITYCOMPONENTHANDLER_OFFSET UNITYSDK_OFFSET(0x19217330)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDCOMPONENTCONTROLTAG_OFFSET UNITYSDK_OFFSET(0x19217B10)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLDORESET_OFFSET UNITYSDK_OFFSET(0x19217AA0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONDESTROY_OFFSET UNITYSDK_OFFSET(0x192179D0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONHIDE_OFFSET UNITYSDK_OFFSET(0x19217920)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONOPEN_OFFSET UNITYSDK_OFFSET(0x19217700)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONSHOW_OFFSET UNITYSDK_OFFSET(0x19217800)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_COPYBASE_OFFSET UNITYSDK_OFFSET(0x192170D0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_HASCOMPONENTCONTROLTAG_OFFSET UNITYSDK_OFFSET(0x19217C80)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_INITWIDGETACTIVITY_OFFSET UNITYSDK_OFFSET(0x19217050)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_SETBASEACTIVITYUIPROXY_OFFSET UNITYSDK_OFFSET(0x19217290)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT_TRYADDGUIDEBUTTONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192174A0)
#define MOLEMOLE_ACTIVITYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19217240)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityWidgetContext_TypeDefinitionIndex = 65679;

	class ActivityWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IILFLKLEPEP* activityPageData; // 0x28
		::CJIEIHEDMME* activityData; // 0x30
		::BPLMEMEELGI* componentCenter; // 0x38
		::KMBKDFCNHPJ* pageCenter; // 0x40
		::EECKKANKNBM* uiProxy; // 0x48
		::EHLHJNBELDJ* componentFactory; // 0x50
		::System::Collections::Generic::HashSet_1<::GMIAOBDMJOH>* controlTags; // 0x58
		::NEMGKAKOLMB* createProcessor; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void InitWidgetActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_INITWIDGETACTIVITY_OFFSET))(this);
		}

		::MoleMole::ActivityWidgetContext* CopyBase()
		{
			return ((::MoleMole::ActivityWidgetContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_COPYBASE_OFFSET))(this);
		}

		::System::Void SetBaseActivityUIProxy(::EECKKANKNBM* uiProxy)
		{
			return ((::System::Void(*)(::PVOID, ::EECKKANKNBM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_SETBASEACTIVITYUIPROXY_OFFSET))(this, uiProxy);
		}

		::System::Void AddActivityComponentHandler(::KDJEMDDDGPG* activityComponentHandler)
		{
			return ((::System::Void(*)(::PVOID, ::KDJEMDDDGPG*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDACTIVITYCOMPONENTHANDLER_OFFSET))(this, activityComponentHandler);
		}

		::System::Void TryAddGuideButtonComponent(::System::Int32 activityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_TRYADDGUIDEBUTTONCOMPONENT_OFFSET))(this, activityId);
		}

		::System::Void CallOnOpen(::MoleMole::ActivityGuideUIBaseWidgetController* activityController, ::GIBMJLOJLKD* baseView, ::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ActivityGuideUIBaseWidgetController*, ::GIBMJLOJLKD*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONOPEN_OFFSET))(this, activityController, baseView, openCtrlContext);
		}

		::System::Void CallOnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void CallOnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONHIDE_OFFSET))(this);
		}

		::System::Void CallOnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLONDESTROY_OFFSET))(this);
		}

		::System::Void CallDoReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_CALLDORESET_OFFSET))(this);
		}

		::System::Void AddComponentControlTag(::GMIAOBDMJOH controlTag)
		{
			return ((::System::Void(*)(::PVOID, ::GMIAOBDMJOH))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_ADDCOMPONENTCONTROLTAG_OFFSET))(this, controlTag);
		}

		::System::Boolean HasComponentControlTag(::GMIAOBDMJOH controlTag)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMIAOBDMJOH))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWIDGETCONTEXT_HASCOMPONENTCONTROLTAG_OFFSET))(this, controlTag);
		}
	};
}
