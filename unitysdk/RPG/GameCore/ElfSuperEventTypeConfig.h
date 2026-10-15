#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfSuperEventTypeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60BE80)
#define RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSuperEventTypeConfig_TypeDefinitionIndex = 18467;

	class ElfSuperEventTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RestaurantSuperEventType SuperEventType; // 0x10
		::System::Single CountdownTime; // 0x14
		::System::UInt32 MaxBubbleCount; // 0x18
		::System::Single BubbleInterval; // 0x1C
		::System::Single BubbleChance; // 0x20
		::System::Single BubbleDuration; // 0x24
		::System::UInt32 BubbleBonus; // 0x28
		::System::UInt32 BubbleBonusAdd; // 0x2C
		::System::Single Duration; // 0x30
		::System::Byte _padding0[0x4];
		::System::String* Buffname; // 0x38
		::System::String* FoodPath; // 0x40
		::Il2CppArray<::System::String*>* BehaviorNameList; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfSuperEventTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfSuperEventTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
