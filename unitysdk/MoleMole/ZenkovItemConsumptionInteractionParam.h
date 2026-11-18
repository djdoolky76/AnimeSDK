#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InteractionSpecialParamBase.h"

namespace System { class String; }

#define MOLEMOLE_ZENKOVITEMCONSUMPTIONINTERACTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12876670)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovItemConsumptionInteractionParam_TypeDefinitionIndex = 43667;

	class ZenkovItemConsumptionInteractionParam : public ::MoleMole::InteractionSpecialParamBase
	{
	public:
		// static const ::System::String* DefaultHudIcon; // 0x0
		// static const ::System::String* DefaultListIconInsufficient; // 0x0
		// static const ::System::String* DefaultListIconSufficient; // 0x0
		::System::String* HudIcon; // 0x10
		::System::String* ListIconInsufficient; // 0x18
		::System::String* ListIconSufficient; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVITEMCONSUMPTIONINTERACTIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
