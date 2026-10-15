#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_ABILITYPROPERTYCHANGEREASONEXTENSION_TOPARAMSTRING_OFFSET UNITYSDK_OFFSET(0xE4BB1C0)

namespace RPG::GameCore
{
	class AbilityPropertyChangeReasonExtension : public ::System::Object
	{
	public:
		static ::System::String* ToParamString(::RPG::GameCore::AbilityPropertyChangeReason a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::AbilityPropertyChangeReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYCHANGEREASONEXTENSION_TOPARAMSTRING_OFFSET))(a1);
		}

	};
}
