#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelPlayEyeAnimationNode; }

#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579050)
#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D579060)
#define RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D579000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPlayEyeAnimationNode_TypeDefinitionIndex = 15947;

	class ChimeraDuelPlayEyeAnimationNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Int32 EyeState; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPLAYEYEANIMATIONNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
