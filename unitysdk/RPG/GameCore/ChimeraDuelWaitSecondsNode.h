#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelWaitSecondsNode; }

#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57EB10)
#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57EB20)
#define RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57EA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitSecondsNode_TypeDefinitionIndex = 15958;

	class ChimeraDuelWaitSecondsNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single WaitTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitSecondsNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitSecondsNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitSecondsNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITSECONDSNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
