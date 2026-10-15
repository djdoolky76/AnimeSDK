#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelStartSequeceConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class RetargetPerSequence; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RETARGETPERSEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96B5C0)
#define RPG_GAMECORE_RETARGETPERSEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96B5D0)
#define RPG_GAMECORE_RETARGETPERSEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96B590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RetargetPerSequence_TypeDefinitionIndex = 22449;

	class RetargetPerSequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Parallel; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::System::Boolean IncludeLimbo; // 0x30
		::System::Boolean RandomTargetOnlyForBackup; // 0x31
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::LevelStartSequeceConfig*>* SequenceList; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetargetPerSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RetargetPerSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RetargetPerSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETARGETPERSEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
