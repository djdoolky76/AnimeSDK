#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/GridTag.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class TagBehaviourConfig; }

#define RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8247A0)
#define RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D824590)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TagBehaviourConfig_TypeDefinitionIndex = 24952;

	class TagBehaviourConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* DisableMoveGridTags; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::GridTag>* BreakWithNeighborGridTags; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* DisableMovePieceTags; // 0x20
		::Il2CppArray<::RPG::GameCore::Match3::PieceTag>* BreakWithNeighborPieceTags; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::TagBehaviourConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::TagBehaviourConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TAGBEHAVIOURCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
