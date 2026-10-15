#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureBehaviorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D389DA0)
#define RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D389A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBehaviorConfig_TypeDefinitionIndex = 17630;

	class AdventureBehaviorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Priority; // 0x10
		::System::Boolean ForceControl; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AdventureCharacterUnitState AIAbnormalState; // 0x18
		::RPG::GameCore::AdventureBehaviorClampAlertLevel AlertLevelClamp; // 0x1C
		::Il2CppArray<::System::String*>* PersistantEffectList; // 0x20
		::Il2CppArray<::System::String*>* EffectsPath; // 0x28
		::System::Boolean MuteAlertLevelDecline; // 0x30
		::System::Boolean MaxAlertLevelOnAdd; // 0x31
		::System::Boolean AffectAlertValue; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureBehaviorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureBehaviorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEHAVIORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
