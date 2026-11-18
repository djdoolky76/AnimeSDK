#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class IBENDELLLAO;
namespace MoleMole { class NotificationBadgeEx; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_SCROLLVIEWARROW_AWAKE_OFFSET UNITYSDK_OFFSET(0x13116F00)
#define MOLEMOLE_SCROLLVIEWARROW_BLBLAPFEBAD_OFFSET UNITYSDK_OFFSET(0x13117D50)
#define MOLEMOLE_SCROLLVIEWARROW_BLMMDBDBIFM_OFFSET UNITYSDK_OFFSET(0x13117220)
#define MOLEMOLE_SCROLLVIEWARROW_FANIHLEKLGE_OFFSET UNITYSDK_OFFSET(0x13117CD0)
#define MOLEMOLE_SCROLLVIEWARROW_FCBNBHANOOL_OFFSET UNITYSDK_OFFSET(0x13116FE0)
#define MOLEMOLE_SCROLLVIEWARROW_GETENDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x13117720)
#define MOLEMOLE_SCROLLVIEWARROW_GETSTARTNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x131175B0)
#define MOLEMOLE_SCROLLVIEWARROW_HEPPNFJMJNL_OFFSET UNITYSDK_OFFSET(0x13117040)
#define MOLEMOLE_SCROLLVIEWARROW_HIDEARROW_OFFSET UNITYSDK_OFFSET(0x131171D0)
#define MOLEMOLE_SCROLLVIEWARROW_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x131178E0)
#define MOLEMOLE_SCROLLVIEWARROW_SETARROWSTATE_OFFSET UNITYSDK_OFFSET(0x13116F50)
#define MOLEMOLE_SCROLLVIEWARROW_SETENDHINT_OFFSET UNITYSDK_OFFSET(0x13117430)
#define MOLEMOLE_SCROLLVIEWARROW_SETSTARTHINT_OFFSET UNITYSDK_OFFSET(0x131172B0)
#define MOLEMOLE_SCROLLVIEWARROW_SHOWARROW_OFFSET UNITYSDK_OFFSET(0x13117180)
#define MOLEMOLE_SCROLLVIEWARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x13117890)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewArrow_TypeDefinitionIndex = 48938;

	class ScrollViewArrow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* StartNormal; // 0x18
		::UnityEngine::GameObject* StartHighLight; // 0x20
		::UnityEngine::UI::Extension::UIButtonEx* StartBtn; // 0x28
		::MoleMole::NotificationBadgeEx* StartBageEx; // 0x30
		::UnityEngine::GameObject* EndNormal; // 0x38
		::UnityEngine::GameObject* EndHighLight; // 0x40
		::UnityEngine::UI::Extension::UIButtonEx* EndBtn; // 0x48
		::MoleMole::NotificationBadgeEx* EndBageEx; // 0x50
		::UnityEngine::CanvasGroup* DAJCAKIEFBC; // 0x58
		::UnityEngine::CanvasGroup* DMPPIFLLKDC; // 0x60
		::UnityEngine::CanvasGroup* HFONECDKDKF; // 0x68
		::UnityEngine::CanvasGroup* HDPEHBHHEOD; // 0x70
		::System::Boolean JLGMOMAGAKL; // 0x78
		::System::Boolean GEKMKGFCKGA; // 0x79
		::System::Boolean JFHPCPDDDGE; // 0x7A
		::System::Byte _padding0[0x5];
		::IBENDELLLAO* CLLECGOOMJD; // 0x80
		::IBENDELLLAO* DMENDHEONHF; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_AWAKE_OFFSET))(this);
		}

		::System::Void SetArrowState(::System::Boolean GEKMKGFCKGA, ::System::Boolean JFHPCPDDDGE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETARROWSTATE_OFFSET))(this, GEKMKGFCKGA, JFHPCPDDDGE);
		}

		::System::Void ShowArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SHOWARROW_OFFSET))(this);
		}

		::System::Void HideArrow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_HIDEARROW_OFFSET))(this);
		}

		::System::Void SetStartHint(::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETSTARTHINT_OFFSET))(this, CPHDDAGKHLB);
		}

		::System::Void SetEndHint(::System::Boolean CPHDDAGKHLB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_SETENDHINT_OFFSET))(this, CPHDDAGKHLB);
		}

		::IBENDELLLAO* GetStartNotificationNode()
		{
			return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_GETSTARTNOTIFICATIONNODE_OFFSET))(this);
		}

		::IBENDELLLAO* GetEndNotificationNode()
		{
			return ((::IBENDELLLAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_GETENDNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void BLMMDBDBIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_BLMMDBDBIFM_OFFSET))(this);
		}

		::System::Void FANIHLEKLGE(::System::Boolean GEKMKGFCKGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_FANIHLEKLGE_OFFSET))(this, GEKMKGFCKGA);
		}

		::System::Void BLBLAPFEBAD(::System::Boolean JFHPCPDDDGE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_BLBLAPFEBAD_OFFSET))(this, JFHPCPDDDGE);
		}

		::System::Void FCBNBHANOOL(::System::Boolean GEKMKGFCKGA, ::System::Boolean JFHPCPDDDGE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_FCBNBHANOOL_OFFSET))(this, GEKMKGFCKGA, JFHPCPDDDGE);
		}

		::System::Void PDKCHDBODJB(::UnityEngine::GameObject* JEIDPPCEHLD, ::UnityEngine::CanvasGroup*& OGGNEJKDDCJ, ::System::Boolean AMGAAHMANDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_PDKCHDBODJB_OFFSET))(this, JEIDPPCEHLD, OGGNEJKDDCJ, AMGAAHMANDM);
		}

		::System::Void HEPPNFJMJNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWARROW_HEPPNFJMJNL_OFFSET))(this);
		}
	};
}
