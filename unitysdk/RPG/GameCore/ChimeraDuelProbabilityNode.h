#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelProbabilityNode; }
namespace RPG::GameCore { class ChimeraDuelProbilityComparePredicate; }

#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579C40)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D579C50)
#define RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelProbabilityNode_TypeDefinitionIndex = 15980;

	class ChimeraDuelProbabilityNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelProbilityComparePredicate* Condition; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* CommonNode; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* FailNode; // 0x20
		::RPG::GameCore::ChimeraDuelPredicateBase* ExtraCastCondition; // 0x28
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* ExtraNode; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelProbabilityNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelProbabilityNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPROBABILITYNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
