#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelPlayAnimationNode; }

#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578EA0)
#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D578EB0)
#define RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPlayAnimationNode_TypeDefinitionIndex = 15946;

	class ChimeraDuelPlayAnimationNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraBattleAnimationType Anim; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPlayAnimationNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPlayAnimationNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPlayAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYANIMATIONNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
