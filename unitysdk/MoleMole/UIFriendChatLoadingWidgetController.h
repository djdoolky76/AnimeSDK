#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class BFHAALDDHFF;
class FHCEOCOHFNN;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_MPMNEKGIMII_OFFSET UNITYSDK_OFFSET(0x18932500)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189322E0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x189323F0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18932370)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18932280)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18932670)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18932680)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18932710)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189327B0)
#define MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18932840)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatLoadingWidgetController_TypeDefinitionIndex = 76406;

	class UIFriendChatLoadingWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::FHCEOCOHFNN* _view; // 0x2F8
		::System::Boolean OMOBPLBEBKE; // 0x300
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* PLMNMBHFGAD; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void MPMNEKGIMII(::BFHAALDDHFF* IPMMCGDMODG)
		{
			return ((::System::Void(*)(::PVOID, ::BFHAALDDHFF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATLOADINGWIDGETCONTROLLER_MPMNEKGIMII_OFFSET))(this, IPMMCGDMODG);
		}
	};
}
