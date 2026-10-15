#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSetChimeraLightWeightActiveNode; }

#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9F20)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9F30)
#define RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A9ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSetChimeraLightWeightActiveNode_TypeDefinitionIndex = 15970;

	class ChimeraDuelSetChimeraLightWeightActiveNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Targets; // 0x10
		::System::Boolean IsLightWeightActive; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSetChimeraLightWeightActiveNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSETCHIMERALIGHTWEIGHTACTIVENODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
