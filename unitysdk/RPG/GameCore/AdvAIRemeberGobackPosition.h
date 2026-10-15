#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAIRemeberGobackPosition; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D360120)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D360150)
#define RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3600D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAIRemeberGobackPosition_TypeDefinitionIndex = 20004;

	class AdvAIRemeberGobackPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAIRemeberGobackPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAIRemeberGobackPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAIREMEBERGOBACKPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
