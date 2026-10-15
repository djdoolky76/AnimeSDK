#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbilityPropertyValue; }

#define RPG_GAMECORE_ABILITYPROPERTYVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3118D0)
#define RPG_GAMECORE_ABILITYPROPERTYVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D311780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyValue_TypeDefinitionIndex = 12756;

	class AbilityPropertyValue : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x10
		::RPG::GameCore::AbilityProperty PropertyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbilityPropertyValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbilityPropertyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYVALUE_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
