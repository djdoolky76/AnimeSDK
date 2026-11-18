#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class AKNNIKCLGMD;
class EDAJINIEKKH;
class KDFEBFHFCHO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_FFOAGCGFMPE_OFFSET UNITYSDK_OFFSET(0x13B278B0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_JEJNBKEOIIC_OFFSET UNITYSDK_OFFSET(0x13B27DD0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_LKNPLCEGPCI_OFFSET UNITYSDK_OFFSET(0x13B27840)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B26820)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13B26930)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B268B0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13B26550)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET UNITYSDK_OFFSET(0x13B276B0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13B27AF0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13B27B80)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13B27C10)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13B27CB0)
#define MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13B27D40)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossCardWidgetController_TypeDefinitionIndex = 64313;

	class UIVRBossCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 OKMNJKBCDOA = 0x3; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* GBIOILNMJIF; // 0x2F8
		::MoleMole::UIDailyChallengeCardRowWidgetController* FPHNNMJGFHC; // 0x300
		::EDAJINIEKKH* _view; // 0x308
		::KDFEBFHFCHO* MFKDIEAPOHO; // 0x310
		::MoleMole::UIDoubleTipsInfoWidgetController* PFAPPMIONFJ; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetRewardBuffIcon(::System::Boolean show, ::System::Int32 buffID, ::JMKLPPGLKJJ rewardBuffGameTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::JMKLPPGLKJJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_SETREWARDBUFFICON_OFFSET))(this, show, buffID, rewardBuffGameTag);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void JEJNBKEOIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_JEJNBKEOIIC_OFFSET))(this);
		}

		::System::Void LKNPLCEGPCI(::System::Boolean AMGAAHMANDM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_LKNPLCEGPCI_OFFSET))(this, AMGAAHMANDM);
		}

		::System::Void FFOAGCGFMPE(::System::Boolean AMGAAHMANDM, ::AKNNIKCLGMD* FHGBGDDHAGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::AKNNIKCLGMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSCARDWIDGETCONTROLLER_FFOAGCGFMPE_OFFSET))(this, AMGAAHMANDM, FHGBGDDHAGA);
		}
	};
}
