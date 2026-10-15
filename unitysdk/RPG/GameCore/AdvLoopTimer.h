#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvLoopTimer; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVLOOPTIMER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D375680)
#define RPG_GAMECORE_ADVLOOPTIMER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D375690)
#define RPG_GAMECORE_ADVLOOPTIMER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D375650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLoopTimer_TypeDefinitionIndex = 21229;

	class AdvLoopTimer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single WaitInterval; // 0x18
		::System::Boolean AllowRestart; // 0x1C
		::System::Boolean ExecuteWhenStart; // 0x1D
		::System::Boolean LoopUntilSuccess; // 0x1E
		::System::Byte _padding0[0x1];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTimeUp; // 0x20
		::RPG::GameCore::PredicateConfig* BreakCondition; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLoopTimer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLoopTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvLoopTimer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvLoopTimer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOOPTIMER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
