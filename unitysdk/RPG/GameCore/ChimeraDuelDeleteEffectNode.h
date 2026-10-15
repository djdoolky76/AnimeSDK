#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelDeleteEffectNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570DE0)
#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D570DF0)
#define RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D570D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelDeleteEffectNode_TypeDefinitionIndex = 15955;

	class ChimeraDuelDeleteEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* UniqueName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelDeleteEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelDeleteEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelDeleteEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELDELETEEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
