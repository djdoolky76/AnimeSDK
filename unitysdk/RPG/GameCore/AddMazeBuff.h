#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddMazeBuff; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADDMAZEBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D358BB0)
#define RPG_GAMECORE_ADDMAZEBUFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35AF80)
#define RPG_GAMECORE_ADDMAZEBUFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddMazeBuff_TypeDefinitionIndex = 20419;

	class AddMazeBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PredicateConfig* Condition; // 0x28
		::RPG::GameCore::TargetEvaluator* BindingAffectedTarget; // 0x30
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x38
		::RPG::GameCore::DynamicFloat* Count; // 0x40
		::RPG::GameCore::DynamicFloat* Level; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddMazeBuff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddMazeBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDMAZEBUFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
