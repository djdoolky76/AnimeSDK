#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbilityPropertyRangeGroup; }
namespace RPG::GameCore { class DynamicValueRangeCallback; }

#define RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33F240)
#define RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D33F120)

namespace RPG::GameCore
{
	class AbilityPropertyRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AbilityProperty Property; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbilityPropertyRangeGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbilityPropertyRangeGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYRANGEGROUP_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
