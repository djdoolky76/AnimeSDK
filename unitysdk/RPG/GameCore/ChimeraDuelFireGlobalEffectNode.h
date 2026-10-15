#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelFireGlobalEffectNode; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A17F0)
#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A1810)
#define RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A1780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelFireGlobalEffectNode_TypeDefinitionIndex = 15957;

	class ChimeraDuelFireGlobalEffectNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::String* AnchorName; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::MVector3 Scale; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelFireGlobalEffectNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELFIREGLOBALEFFECTNODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
