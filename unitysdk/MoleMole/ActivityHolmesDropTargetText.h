#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_DJAPJJEEDEA_OFFSET UNITYSDK_OFFSET(0x19215C80)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_GNNIBOKGOHM_OFFSET UNITYSDK_OFFSET(0x19216D70)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_IGIHGNONKDJ_OFFSET UNITYSDK_OFFSET(0x19215950)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x19215EE0)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x19216720)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDROP_OFFSET UNITYSDK_OFFSET(0x19215670)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x19216A60)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x19215C10)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x19215E90)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_SETUP_OFFSET UNITYSDK_OFFSET(0x19215500)
#define MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19216F30)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityHolmesDropTargetText_TypeDefinitionIndex = 91918;

	class ActivityHolmesDropTargetText : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 FNLGDLHAEGD; // 0x18
		::System::Int32 KELFMOCEOMC; // 0x1C
		::System::Int32 FBNHDHJJFAM; // 0x20
		::System::Boolean LOADPILONHF; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 HIJJNECNEHM; // 0x28
		::System::Byte _padding1[0x4];
		::System::String* INBGDKGAAEB; // 0x30
		::UnityEngine::RectTransform* GJBIPCOKJJP; // 0x38
		::UnityEngine::RectTransform* EDBOCHAHMLI; // 0x40
		::UnityEngine::RectTransform* LIAGCNBOOID; // 0x48
		::UnityEngine::RectTransform* LFAPPOMDPKG; // 0x50
		::System::Action_1<::System::Int32>* EHPCFCFJMOG; // 0x58
		::System::Action* BCDIOOAOBMF; // 0x60
		::System::Action_1<::System::Int32>* NCFKIDDINHL; // 0x68
		::UnityEngine::RectTransform* LKJDAMBFFBK; // 0x70
		::System::Boolean AJCJEJGICBA; // 0x78
		::System::Byte _padding2[0x7];
		::UnityEngine::GameObject* FLLLLNEEFJP; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::System::Int32 OBNIAHNMHPF, ::System::Int32 BLIIBGEDDEI, ::System::Int32 EOIGADNFKBC, ::System::Boolean LOPDBIAAELH, ::System::Int32 IDMLGAJHDIN, ::System::String* HBFBFEBPNGF, ::UnityEngine::RectTransform* OJHJEJIANOO, ::UnityEngine::RectTransform* GIDBHMMCMBP, ::UnityEngine::RectTransform* OBDLBDMDCGB, ::UnityEngine::RectTransform* BKGDNDPJFNN, ::System::Action_1<::System::Int32>* CNMFADNJAKA, ::System::Action* LGCNPCMFFJE, ::System::Action_1<::System::Int32>* HHJAOAAOLMA, ::UnityEngine::RectTransform* AAFBLAFOKFN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::String*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action_1<::System::Int32>*, ::System::Action*, ::System::Action_1<::System::Int32>*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_SETUP_OFFSET))(this, OBNIAHNMHPF, BLIIBGEDDEI, EOIGADNFKBC, LOPDBIAAELH, IDMLGAJHDIN, HBFBFEBPNGF, OJHJEJIANOO, GIDBHMMCMBP, OBDLBDMDCGB, BKGDNDPJFNN, CNMFADNJAKA, LGCNPCMFFJE, HHJAOAAOLMA, AAFBLAFOKFN);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDROP_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTERENTER_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONPOINTEREXIT_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONBEGINDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Void IGIHGNONKDJ(::System::Boolean FIPHFGHNNBE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_IGIHGNONKDJ_OFFSET))(this, FIPHFGHNNBE);
		}

		::System::Boolean GNNIBOKGOHM(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_GNNIBOKGOHM_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Boolean DJAPJJEEDEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYHOLMESDROPTARGETTEXT_DJAPJJEEDEA_OFFSET))(this);
		}
	};
}
