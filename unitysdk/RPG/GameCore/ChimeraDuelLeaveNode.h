#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelLeaveNode; }

#define RPG_GAMECORE_CHIMERADUELLEAVENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A3620)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A3630)
#define RPG_GAMECORE_CHIMERADUELLEAVENODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A35D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelLeaveNode_TypeDefinitionIndex = 15960;

	class ChimeraDuelLeaveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::Single TurnTime; // 0x18
		::System::Single TurnAngle; // 0x1C
		::System::Single TurnRatio; // 0x20
		::System::Single Speed; // 0x24
		::System::Single LeaveTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelLeaveNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelLeaveNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelLeaveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELLEAVENODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
