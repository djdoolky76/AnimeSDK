#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebateCostChangce; }

#define RPG_GAMECORE_DEBATECOSTCHANGCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C7950)
#define RPG_GAMECORE_DEBATECOSTCHANGCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C7970)
#define RPG_GAMECORE_DEBATECOSTCHANGCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C7910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateCostChangce_TypeDefinitionIndex = 21932;

	class DebateCostChangce : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 CostNum; // 0x18
		::System::Single WaitSecond; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateCostChangce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateCostChangce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebateCostChangce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebateCostChangce*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATECOSTCHANGCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
