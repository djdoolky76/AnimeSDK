#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIMarcelNameWidgetController_Display.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FBHPDPBIGPK;
class OIKMPFJEAMC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_CHKEBKGPAKL_OFFSET UNITYSDK_OFFSET(0x18815A00)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_FIXPOSITION_OFFSET UNITYSDK_OFFSET(0x18816180)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_GKCBHCJHFKB_OFFSET UNITYSDK_OFFSET(0x18816600)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HGNCFAPBMEC_OFFSET UNITYSDK_OFFSET(0x18815BF0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HIDETEAMGOOD_OFFSET UNITYSDK_OFFSET(0x18815200)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HMJJBEIDFEA_OFFSET UNITYSDK_OFFSET(0x18817110)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_KABHHACPKOC_OFFSET UNITYSDK_OFFSET(0x18816C20)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18816900)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18816990)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188153F0)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET UNITYSDK_OFFSET(0x18817150)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SHOWNAME_OFFSET UNITYSDK_OFFSET(0x18815180)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18816A10)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18816A70)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18816B00)
#define MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18816B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelNameWidgetController_TypeDefinitionIndex = 67350;

	class UIMarcelNameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OIKMPFJEAMC* _view; // 0x2C8
		::UnityEngine::RectTransform* OGKGOCLDPKN; // 0x2D0
		::UnityEngine::RectTransform* HMACGBELCKO; // 0x2D8
		::UnityEngine::Transform* AFGPKFGNEJD; // 0x2E0
		::UnityEngine::Vector2 KIJEOOMELGM; // 0x2E8
		::MoleMole::UIMarcelNameWidgetController_Display AILDKDDKPEK; // 0x2F0
		::System::UInt32 MGCMLBHOELA; // 0x2F4
		::FBHPDPBIGPK* EHFBAPOFEDN; // 0x2F8
		::Foundation::Coroutine::CoroutineHandle IOMGJGBCBGH; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ShowName(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_SHOWNAME_OFFSET))(this, value);
		}

		::System::Void HideTeamGood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HIDETEAMGOOD_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean FixPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_FIXPOSITION_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CHKEBKGPAKL(::System::UInt32 ACHBBPJIBIE)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_CHKEBKGPAKL_OFFSET))(this, ACHBBPJIBIE);
		}

		::System::Void GKCBHCJHFKB(::UnityEngine::Vector3 ILLAACIBJNC)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_GKCBHCJHFKB_OFFSET))(this, ILLAACIBJNC);
		}

		::System::Void KABHHACPKOC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_KABHHACPKOC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HMJJBEIDFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HMJJBEIDFEA_OFFSET))(this);
		}

		::System::Void OPKPKCIPEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_OPKPKCIPEGO_OFFSET))(this);
		}

		::System::Void HGNCFAPBMEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELNAMEWIDGETCONTROLLER_HGNCFAPBMEC_OFFSET))(this);
		}
	};
}
