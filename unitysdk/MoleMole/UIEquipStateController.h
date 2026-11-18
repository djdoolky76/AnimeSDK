#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMonoController.h"

class BHBOJCCMJBE;
class HGAJKHIMKJP;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIEQUIPSTATECONTROLLER_GET_CURITEMDATA_OFFSET UNITYSDK_OFFSET(0x18D642D0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_HIDEBTNS_OFFSET UNITYSDK_OFFSET(0x18D59E70)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18D642E0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_REALDELETE_OFFSET UNITYSDK_OFFSET(0x18D64E00)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_REFRESHTOGGLESTATE_OFFSET UNITYSDK_OFFSET(0x18D65230)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x18D59D10)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_SETONITEMDATANULLHIDEBTNS_OFFSET UNITYSDK_OFFSET(0x18D651E0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLEDELETE_OFFSET UNITYSDK_OFFSET(0x18D64AA0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLELOCK_OFFSET UNITYSDK_OFFSET(0x18D64640)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER_TRIGGERTOGGLEAUDIO_OFFSET UNITYSDK_OFFSET(0x18D64FE0)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D66A90)
#define MOLEMOLE_UIEQUIPSTATECONTROLLER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x18D66B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIEquipStateController_TypeDefinitionIndex = 47929;

	class UIEquipStateController : public ::MoleMole::UIMonoController
	{
	public:
		::UnityEngine::UI::Extension::UIButtonEx* LockSwitchBtn; // 0x80
		::UnityEngine::UI::Extension::UIButtonEx* DeleteBtn; // 0x88
		::UnityEngine::GameObject* LockSwitchLock; // 0x90
		::UnityEngine::GameObject* LockSwitchUnLock; // 0x98
		::UnityEngine::UI::Image* LockSwitchLockImage; // 0xA0
		::UnityEngine::UI::Image* LockSwitchUnLockImage; // 0xA8
		::UnityEngine::GameObject* DeleteLock; // 0xB0
		::UnityEngine::GameObject* DeleteUnLock; // 0xB8
		::UnityEngine::UI::Image* DeleteLockImage; // 0xC0
		::UnityEngine::UI::Image* DeleteUnLockImage; // 0xC8
		::UnityEngine::UI::Extension::UILocalizationText* LockSwitchConsoleTipText; // 0xD0
		::UnityEngine::UI::Extension::UILocalizationText* DeleteConsoleTipText; // 0xD8
		::System::Boolean EnableLockControl; // 0xE0
		::System::Boolean EnableDelControl; // 0xE1
		::System::Byte _padding0[0x6];
		::HGAJKHIMKJP* _curItemData; // 0xE8
		::System::Action* stateChangeAction; // 0xF0
		::System::Boolean _OnItemDataNullHideBtns; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::HGAJKHIMKJP* get_CurItemData()
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_GET_CURITEMDATA_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_ONAWAKE_OFFSET))(this);
		}

		::System::Void ToggleLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLELOCK_OFFSET))(this);
		}

		::System::Void ToggleDelete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TOGGLEDELETE_OFFSET))(this);
		}

		::System::Void RealDelete(::BHBOJCCMJBE* equip, ::System::Boolean isNoShowTips)
		{
			return ((::System::Void(*)(::PVOID, ::BHBOJCCMJBE*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_REALDELETE_OFFSET))(this, equip, isNoShowTips);
		}

		::System::Void TriggerToggleAudio(::System::Boolean isLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_TRIGGERTOGGLEAUDIO_OFFSET))(this, isLock);
		}

		::System::Void SetOnItemDataNullHideBtns(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_SETONITEMDATANULLHIDEBTNS_OFFSET))(this, state);
		}

		::System::Void RefreshToggleState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_REFRESHTOGGLESTATE_OFFSET))(this);
		}

		::System::Void SetItemData(::HGAJKHIMKJP* itemData, ::System::Action* changeAction)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_SETITEMDATA_OFFSET))(this, itemData, changeAction);
		}

		::System::Void HideBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER_HIDEBTNS_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEQUIPSTATECONTROLLER___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
