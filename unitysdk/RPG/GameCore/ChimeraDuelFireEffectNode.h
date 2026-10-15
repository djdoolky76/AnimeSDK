#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelFireEffectNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A14E0)
#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1500)
#define RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A1480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelFireEffectNode_TypeDefinitionIndex = 15954;

	class ChimeraDuelFireEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
