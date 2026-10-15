#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
namespace SRDebugger::UI::Controls { class InfoBlock; }
namespace SRF::UI { class FlashGraphic; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_UI_TABS_PERFORMANCEINFOCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xE95ECF0)

namespace SRDebugger::UI::Tabs
{
	class PerformanceInfoController : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::SRDebugger::UI::Controls::InfoBlock* InfoBlockPrefab; // 0x48
		::UnityEngine::RectTransform* LayoutContainer; // 0x50
		::SRF::UI::FlashGraphic* ToggleButton; // 0x58
		::System::Single UpdateInterval; // 0x60
		// static const ::System::Object Tick; // 0x0
		// static const ::System::Object Cross; // 0x0
		// static const ::System::String* NameColor; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_PERFORMANCEINFOCONTROLLER_CTOR_OFFSET))(this);
		}

	};
}
