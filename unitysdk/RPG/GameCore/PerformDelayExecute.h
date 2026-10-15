#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PerformDelayExecute; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PERFORMDELAYEXECUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F54B0)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8F54C0)
#define RPG_GAMECORE_PERFORMDELAYEXECUTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F5480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformDelayExecute_TypeDefinitionIndex = 22832;

	class PerformDelayExecute : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* PerformTaskList; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicFloat* Delay; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformDelayExecute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformDelayExecute* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformDelayExecute*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMDELAYEXECUTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
