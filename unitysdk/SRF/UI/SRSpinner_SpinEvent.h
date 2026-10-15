#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define SRF_UI_SRSPINNER_SPINEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED81BF0)

namespace SRF::UI
{
	class SRSpinner_SpinEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_SRSPINNER_SPINEVENT_CTOR_OFFSET))(this);
		}

	};
}
