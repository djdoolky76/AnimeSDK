#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelWaitReplaceEffectNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AC1E0)
#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AC200)
#define RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AC180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWaitReplaceEffectNode_TypeDefinitionIndex = 15956;

	class ChimeraDuelWaitReplaceEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* TargetSelector; // 0x10
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30
		::System::Single WaitTime; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWaitReplaceEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWAITREPLACEEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
