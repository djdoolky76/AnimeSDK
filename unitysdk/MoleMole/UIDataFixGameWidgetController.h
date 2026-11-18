#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class APNMGOHIMKO;
class KKPMALBDBLA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_AANDPPEGOJA_OFFSET UNITYSDK_OFFSET(0x15990190)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0x1598FA80)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_IGPFLNLLOJJ_OFFSET UNITYSDK_OFFSET(0x159901A0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1598FEA0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1598FF40)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1598FAA0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1598FC80)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x1598FD60)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0x1598FFC0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0x1598FA90)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15990010)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15990070)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x159900C0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15990100)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15990140)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixGameWidgetController_TypeDefinitionIndex = 49871;

	class UIDataFixGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KKPMALBDBLA* _view; // 0x2C8
		::APNMGOHIMKO* OPOLMJLMHCD; // 0x2D0
		::UnityEngine::Transform* _ACLGFHPPBFN_k__BackingField; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET))(this);
		}

		::System::Void set_ContentRoot(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetView(::System::Boolean isReal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET))(this, isReal);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void AANDPPEGOJA(::System::Boolean LJGPHMJCCKO, ::System::Int32 PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_AANDPPEGOJA_OFFSET))(this, LJGPHMJCCKO, PIIPCLCCOIG);
		}

		::System::Boolean IGPFLNLLOJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_IGPFLNLLOJJ_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::System::Boolean FNKPAOHCOPM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, FNKPAOHCOPM);
		}
	};
}
