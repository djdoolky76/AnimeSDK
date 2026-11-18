#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BPHGNMNLLHF;
class KGMBACANDLO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET UNITYSDK_OFFSET(0x12BF1C70)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GJLALEHFOBG_OFFSET UNITYSDK_OFFSET(0x12BF21D0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF0F70)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF1CF0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BF0CB0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF0F00)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0x12BF1000)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET UNITYSDK_OFFSET(0x12BF1860)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET UNITYSDK_OFFSET(0x12BF1BF0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF1F30)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF1F90)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF2020)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BF20B0)
#define MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF2140)

namespace MoleMole
{
	inline static constexpr unsigned int UITeamEditIconWidgetController_TypeDefinitionIndex = 52554;

	class UITeamEditIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KGMBACANDLO* _view; // 0x2C8
		::System::Action_1<::System::Int32>* IconClickAction; // 0x2D0
		::System::Int32 Index; // 0x2D8
		::System::Boolean IsBigScene; // 0x2DC
		::System::Byte _padding0[0x3];
		::UnityEngine::Material* KIDIEPJJLHE; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshAvatar(::BPHGNMNLLHF* avatarItem, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::BPHGNMNLLHF*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHAVATAR_OFFSET))(this, avatarItem, isLock);
		}

		::System::Void RefreshBuddy(::System::UInt32 buddyID, ::System::Boolean hasBuddy, ::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_REFRESHBUDDY_OFFSET))(this, buddyID, hasBuddy, isLock);
		}

		::System::Void SetAniState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_SETANISTATE_OFFSET))(this);
		}

		::System::Boolean GetIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GETISEMPTY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GJLALEHFOBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEAMEDITICONWIDGETCONTROLLER_GJLALEHFOBG_OFFSET))(this);
		}
	};
}
