#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdSkillActionGeneratePiece; }

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB51940)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB51950)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB51910)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGeneratePiece_TypeDefinitionIndex = 25411;

	class BirdSkillActionGeneratePiece : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x18
		::System::UInt32 PieceCount; // 0x1C
		::System::Boolean ScoreBonus; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
