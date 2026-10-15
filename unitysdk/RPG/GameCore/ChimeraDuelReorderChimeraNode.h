#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelReorderChimeraNode; }

#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B6C0)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57B6D0)
#define RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57B630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelReorderChimeraNode_TypeDefinitionIndex = 15968;

	class ChimeraDuelReorderChimeraNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelReorderChimeraNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelReorderChimeraNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREORDERCHIMERANODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
