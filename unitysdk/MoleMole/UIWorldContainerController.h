#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x14E40E20)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14E40E10)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_HCJGGHLFKKE_OFFSET UNITYSDK_OFFSET(0x14E40FB0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_JBFOBHINGLG_OFFSET UNITYSDK_OFFSET(0x14E416F0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14E40F60)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_NAIFNIJGDJE_OFFSET UNITYSDK_OFFSET(0x14E41740)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_OKNIFEKFFHF_OFFSET UNITYSDK_OFFSET(0x14E416A0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E41470)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E40E30)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E41570)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E41580)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x14E41610)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldContainerController_TypeDefinitionIndex = 73086;

	class UIWorldContainerController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean OKGEGMHLDBB; // 0x320
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 ABILHOKBOBN; // 0x324

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OKNIFEKFFHF(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_OKNIFEKFFHF_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void NAIFNIJGDJE(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_NAIFNIJGDJE_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void JBFOBHINGLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_JBFOBHINGLG_OFFSET))(this);
		}

		::System::Void HCJGGHLFKKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_HCJGGHLFKKE_OFFSET))(this);
		}
	};
}
