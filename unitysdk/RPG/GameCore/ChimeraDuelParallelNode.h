#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }
namespace RPG::GameCore { class ChimeraDuelParallelNode; }

#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578D50)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D578D60)
#define RPG_GAMECORE_CHIMERADUELPARALLELNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelParallelNode_TypeDefinitionIndex = 15984;

	class ChimeraDuelParallelNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelNodeSequence*>* Sequences; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelParallelNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelParallelNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelParallelNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPARALLELNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
