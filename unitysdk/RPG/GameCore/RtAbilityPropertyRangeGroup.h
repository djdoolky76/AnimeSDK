#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class RtAbilityPropertyRangeGroup; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AE80)
#define RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtAbilityPropertyRangeGroup_TypeDefinitionIndex = 17661;

	class RtAbilityPropertyRangeGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RtAbilityProperty Property; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* Ranges; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAbilityPropertyRangeGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAbilityPropertyRangeGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYPROPERTYRANGEGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
