#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_AHMEFLBBEKA_OFFSET UNITYSDK_OFFSET(0xD97D2E0)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_CTOR_OFFSET UNITYSDK_OFFSET(0xD97D640)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_DDCCGJFLHEM_OFFSET UNITYSDK_OFFSET(0xD97D520)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_DOGPNOCCNHP_OFFSET UNITYSDK_OFFSET(0xD97D210)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_FOCUSORCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xD97D170)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD97D090)
#define RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD97CFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int NavigationEntryShortcut_TypeDefinitionIndex = 72618;

	class NavigationEntryShortcut : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::UINavigation::UINavigationArea* _TabBarArea; // 0x18
		::RPG::Client::AnimatorButton* _ShortcutButton; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void FocusOrClickButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_FOCUSORCLICKBUTTON_OFFSET))(this);
		}

		::System::Boolean DOGPNOCCNHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_DOGPNOCCNHP_OFFSET))(this);
		}

		::System::Int32 AHMEFLBBEKA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_AHMEFLBBEKA_OFFSET))(this, a1);
		}

		::System::Void DDCCGJFLHEM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVIGATIONENTRYSHORTCUT_DDCCGJFLHEM_OFFSET))(this, a1);
		}

	};
}
