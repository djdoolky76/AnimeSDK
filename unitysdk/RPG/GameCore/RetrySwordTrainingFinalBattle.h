#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RetrySwordTrainingFinalBattle; }

#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96B8D0)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96B8E0)
#define RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96B8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetrySwordTrainingFinalBattle_TypeDefinitionIndex = 20331;

	class RetrySwordTrainingFinalBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRetry; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetrySwordTrainingFinalBattle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetrySwordTrainingFinalBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETRYSWORDTRAININGFINALBATTLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
