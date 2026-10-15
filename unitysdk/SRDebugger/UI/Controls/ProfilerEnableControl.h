#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED5B480)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_START_OFFSET UNITYSDK_OFFSET(0x1ED5AE70)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_TOGGLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1ED5B3B0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATELABELS_OFFSET UNITYSDK_OFFSET(0x1ED5B0E0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ED5B380)

namespace SRDebugger::UI::Controls
{
	class ProfilerEnableControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Boolean _previousState; // 0x48
		::System::Byte _padding0[0x7];
		::UnityEngine::UI::Text* ButtonText; // 0x50
		::UnityEngine::UI::Button* EnableButton; // 0x58
		::UnityEngine::UI::Text* Text; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_START_OFFSET))(this);
		}

		::System::Void UpdateLabels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATELABELS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void ToggleProfiler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERENABLECONTROL_TOGGLEPROFILER_OFFSET))(this);
		}

	};
}
