#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
namespace SRDebugger { class Settings_KeyboardShortcut; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FFF4000)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF54E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_EXECUTESHORTCUT_OFFSET UNITYSDK_OFFSET(0x1FFF4430)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_TOGGLETAB_OFFSET UNITYSDK_OFFSET(0x1FFF4140)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATELEGACYINPUTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1FFF50C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FFF50B0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int KeyboardShortcutListenerService_TypeDefinitionIndex = 39009;

	class KeyboardShortcutListenerService
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _shortcuts; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_AWAKE_OFFSET))(this);
		}

		::System::Void ToggleTab(::SRDebugger::DefaultTabs a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_TOGGLETAB_OFFSET))(this, a1);
		}

		::System::Void ExecuteShortcut(::SRDebugger::Settings_KeyboardShortcut* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Settings_KeyboardShortcut*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_EXECUTESHORTCUT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateLegacyInputSystem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_KEYBOARDSHORTCUTLISTENERSERVICE_UPDATELEGACYINPUTSYSTEM_OFFSET))(this);
		}

	};
}
