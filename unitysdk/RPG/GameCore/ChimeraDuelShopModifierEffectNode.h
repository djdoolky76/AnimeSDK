#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelShopModifierEffectNode; }

#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AA360)
#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AA370)
#define RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AA2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelShopModifierEffectNode_TypeDefinitionIndex = 15964;

	class ChimeraDuelShopModifierEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelShopModifierEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSHOPMODIFIEREFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
