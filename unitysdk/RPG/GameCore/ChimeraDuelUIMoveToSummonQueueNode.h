#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelUIMoveToSummonQueueNode; }

#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ABD70)
#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5ABD80)
#define RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ABCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelUIMoveToSummonQueueNode_TypeDefinitionIndex = 15969;

	class ChimeraDuelUIMoveToSummonQueueNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelUIMoveToSummonQueueNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELUIMOVETOSUMMONQUEUENODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
