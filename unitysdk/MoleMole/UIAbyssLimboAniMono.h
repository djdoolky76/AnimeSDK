#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BPNGLLLIMDC;
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIABYSSLIMBOANIMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x17E84E30)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x17E850F0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_PLAYUNLOCKANI_OFFSET UNITYSDK_OFFSET(0x17E85200)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETAFKUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x17E853D0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETNAMETEXT_OFFSET UNITYSDK_OFFSET(0x17E84CB0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0x17E852E0)
#define MOLEMOLE_UIABYSSLIMBOANIMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E85930)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssLimboAniMono_TypeDefinitionIndex = 54958;

	class UIAbyssLimboAniMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsBossRush; // 0x18
		::System::Boolean IsNest; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::GameObject* HardNestUnlockedDisableItem; // 0x20
		::System::String* UnlockName; // 0x28
		::UnityEngine::GameObject* AfkLock; // 0x30
		::UnityEngine::GameObject* VXRoot; // 0x38
		::UnityEngine::GameObject* AfkLock2; // 0x40
		::UnityEngine::GameObject* VXRoot2; // 0x48
		::UnityEngine::UI::Extension::UILocalizationText* NameText; // 0x50
		::MoleMole::NotificationBadge* Popup; // 0x58
		::UnityEngine::Animation* FDHKBJIFIEO; // 0x60
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO__CTOR_OFFSET))(this);
		}

		::System::Void SetNameText(::System::String* HIAIKHDFCLN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETNAMETEXT_OFFSET))(this, HIAIKHDFCLN);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_AWAKE_OFFSET))(this);
		}

		::BPNGLLLIMDC* get_Model()
		{
			return ((::BPNGLLLIMDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_GET_MODEL_OFFSET))(this);
		}

		::System::Single PlayUnlockAni()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_PLAYUNLOCKANI_OFFSET))(this);
		}

		::System::Void SetUnLockState(::System::Single FOIKIGDJLKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETUNLOCKSTATE_OFFSET))(this, FOIKIGDJLKN);
		}

		::System::Void SetAfkUnlockState(::System::Boolean AJCMAAHCOMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSLIMBOANIMONO_SETAFKUNLOCKSTATE_OFFSET))(this, AJCMAAHCOMP);
		}
	};
}
