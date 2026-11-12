#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class ScrollRect; }

#define SRDEBUGGER_UI_SHELLCOMMANDHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0xF47D530)

namespace SRDebugger::UI
{
	inline static constexpr unsigned int ShellCommandHelper_TypeDefinitionIndex = 48737;

	class ShellCommandHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::InputField* ShellCommandField; // 0x18
		::UnityEngine::UI::Button* ConfirmBtn; // 0x20
		::UnityEngine::UI::ScrollRect* SuggestionsScrollRect; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_SHELLCOMMANDHELPER_CTOR_OFFSET))(this);
		}

	};
}
