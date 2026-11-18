#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UILevelResultDelayEvent_DelayItem.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UILEVELRESULTDELAYEVENT_HGJHLAGIGCC_NBFEILKMLLM_OFFSET UNITYSDK_OFFSET(0x19611350)
#define MOLEMOLE_UILEVELRESULTDELAYEVENT_HGJHLAGIGCC__CTOR_OFFSET UNITYSDK_OFFSET(0x196112B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultDelayEvent_HGJHLAGIGCC_TypeDefinitionIndex = 76570;

	class UILevelResultDelayEvent_HGJHLAGIGCC : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultDelayEvent_DelayItem DNNLKKILKOO; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_HGJHLAGIGCC__CTOR_OFFSET))(this);
		}

		::System::Void NBFEILKMLLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTDELAYEVENT_HGJHLAGIGCC_NBFEILKMLLM_OFFSET))(this);
		}
	};
}
