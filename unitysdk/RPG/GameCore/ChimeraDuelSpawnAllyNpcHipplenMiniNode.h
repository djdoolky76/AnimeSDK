#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelSpawnAllyNpcHipplenMiniNode; }

#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57CE60)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57CE70)
#define RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57CE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSpawnAllyNpcHipplenMiniNode_TypeDefinitionIndex = 15953;

	class ChimeraDuelSpawnAllyNpcHipplenMiniNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Single DitherTime; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Owners; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSpawnAllyNpcHipplenMiniNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSPAWNALLYNPCHIPPLENMININODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
