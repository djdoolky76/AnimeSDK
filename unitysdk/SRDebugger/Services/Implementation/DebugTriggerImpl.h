#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/PinAlignment.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
namespace SRDebugger::Services { class IConsoleService; }
namespace SRDebugger::UI::Other { class TriggerRoot; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FFF2D80)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x1FFF2320)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFF33D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1FFF2240)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FFF2C00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONACTIVESCENECHANGED_OFFSET UNITYSDK_OFFSET(0x1FFF3160)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FFF2F30)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONERROR_OFFSET UNITYSDK_OFFSET(0x1FFF2E70)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONTRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1FFF3170)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SETTRIGGERPOSITION_OFFSET UNITYSDK_OFFSET(0x1FFF2CE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x1FFF22A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1FFF2C10)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DebugTriggerImpl_TypeDefinitionIndex = 39006;

	class DebugTriggerImpl
	{
	public:
		::SRDebugger::PinAlignment _position; // 0x48
		::System::Byte _padding0[0x4];
		::SRDebugger::UI::Other::TriggerRoot* _trigger; // 0x50
		::SRDebugger::Services::IConsoleService* _consoleService; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void set_IsEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_ISENABLED_OFFSET))(this, a1);
		}

		::SRDebugger::PinAlignment get_Position()
		{
			return ((::SRDebugger::PinAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::SRDebugger::PinAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_AWAKE_OFFSET))(this);
		}

		::System::Void OnError(::SRDebugger::Services::IConsoleService* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IConsoleService*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONERROR_OFFSET))(this, a1);
		}

		::System::Void CreateTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_CREATETRIGGER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void OnActiveSceneChanged(::UnityEngine::SceneManagement::Scene a1, ::UnityEngine::SceneManagement::Scene a2)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONACTIVESCENECHANGED_OFFSET))(a1, a2);
		}

		::System::Void OnTriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_ONTRIGGERBUTTONCLICK_OFFSET))(this);
		}

		static ::System::Void SetTriggerPosition(::UnityEngine::RectTransform* a1, ::SRDebugger::PinAlignment a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::SRDebugger::PinAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DEBUGTRIGGERIMPL_SETTRIGGERPOSITION_OFFSET))(a1, a2);
		}

	};
}
