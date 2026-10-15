#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableSummonUnitGather; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLESUMMONUNITGATHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E9DA0)
#define RPG_GAMECORE_DISABLESUMMONUNITGATHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E9DB0)
#define RPG_GAMECORE_DISABLESUMMONUNITGATHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E9D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableSummonUnitGather_TypeDefinitionIndex = 20165;

	class DisableSummonUnitGather : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Single DelayTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableSummonUnitGather* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableSummonUnitGather*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableSummonUnitGather* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableSummonUnitGather*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLESUMMONUNITGATHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
