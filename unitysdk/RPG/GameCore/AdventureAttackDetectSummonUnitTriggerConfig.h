#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAttackDetectSummonUnitTriggerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B74C0)
#define RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B73C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAttackDetectSummonUnitTriggerConfig_TypeDefinitionIndex = 16277;

	class AdventureAttackDetectSummonUnitTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SummonUnitID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* DetectSummonUnitTriggerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureAttackDetectSummonUnitTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREATTACKDETECTSUMMONUNITTRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
