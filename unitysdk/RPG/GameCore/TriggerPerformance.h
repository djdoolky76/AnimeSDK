#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class TriggerPerformance; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define RPG_GAMECORE_TRIGGERPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29CE0)
#define RPG_GAMECORE_TRIGGERPERFORMANCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC29CF0)
#define RPG_GAMECORE_TRIGGERPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC29CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerPerformance_TypeDefinitionIndex = 20299;

	class TriggerPerformance : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ELevelPerformanceType PerformanceType; // 0x18
		::System::UInt32 PerformanceID; // 0x1C
		::RPG::GameCore::DynamicString* PerformanceType_DS; // 0x20
		::RPG::GameCore::DynamicString* PerformanceID_DS; // 0x28
		::System::Boolean SaveProgress; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TriggerPerformanceMask* MaskConfig; // 0x38
		::System::Boolean InheritOwnerEntityCustomData; // 0x40
		::System::Byte _padding1[0x7];
		::RPG::GameCore::LevelGraphValueSource* ValueSource; // 0x48
		::System::Boolean CloseScreenCrack; // 0x50
		::System::Boolean CloseMaskAndCrack; // 0x51
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPERFORMANCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
