#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelSaveEntitySelectionConfig; }
namespace RPG::GameCore { class ChimeraDuelReplaceSavedEntitiesNode; }

#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A9610)
#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A9620)
#define RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A95C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelReplaceSavedEntitiesNode_TypeDefinitionIndex = 15971;

	class ChimeraDuelReplaceSavedEntitiesNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::BaseChimeraDuelSaveEntitySelectionConfig* SavedSelection; // 0x10
		::System::Boolean IsForceRaplace; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelReplaceSavedEntitiesNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELREPLACESAVEDENTITIESNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
