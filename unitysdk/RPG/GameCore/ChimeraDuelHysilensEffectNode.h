#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelHysilensEffectNode; }

#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D575430)
#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D575440)
#define RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5753E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelHysilensEffectNode_TypeDefinitionIndex = 15981;

	class ChimeraDuelHysilensEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* HPChangeValue; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* AtkChangeValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelHysilensEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelHysilensEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelHysilensEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELHYSILENSEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
