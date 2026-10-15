#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelNpcFireEffectNode; }
namespace RPG::GameCore { class ChimeraDuelNpcSelectorConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5786A0)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5786C0)
#define RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D578640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcFireEffectNode_TypeDefinitionIndex = 15950;

	class ChimeraDuelNpcFireEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::RPG::GameCore::ChimeraDuelNpcSelectorConfig* Npc; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::RPG::MVector3 Scale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNpcFireEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCFIREEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
