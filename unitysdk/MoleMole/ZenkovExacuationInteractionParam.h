#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InteractionSpecialParamBase.h"

namespace System { class String; }

#define MOLEMOLE_ZENKOVEXACUATIONINTERACTIONPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12876620)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovExacuationInteractionParam_TypeDefinitionIndex = 82314;

	class ZenkovExacuationInteractionParam : public ::MoleMole::InteractionSpecialParamBase
	{
	public:
		// static const ::System::String* DefaultHudIcon; // 0x0
		// static const ::System::String* DefaultListIconInsufficient; // 0x0
		// static const ::System::String* DefaultListIconSufficient; // 0x0
		::System::Boolean IsItemConsumption; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* HudIcon; // 0x18
		::System::String* ListIconInsufficient; // 0x20
		::System::String* ListIconSufficient; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVEXACUATIONINTERACTIONPARAM__CTOR_OFFSET))(this);
		}
	};
}
