#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ED65280)
#define SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED65340)

namespace SRDebugger::UI::Other
{
	class ScrollSettingsBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Object ScrollSensitivity; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SCROLLSETTINGSBEHAVIOUR_AWAKE_OFFSET))(this);
		}

	};
}
