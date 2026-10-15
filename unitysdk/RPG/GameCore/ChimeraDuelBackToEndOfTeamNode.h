#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelBackToEndOfTeamNode; }

#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56D850)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56D860)
#define RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56D800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBackToEndOfTeamNode_TypeDefinitionIndex = 16019;

	class ChimeraDuelBackToEndOfTeamNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Target; // 0x10
		::System::Single TransitionTime; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBackToEndOfTeamNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBACKTOENDOFTEAMNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
