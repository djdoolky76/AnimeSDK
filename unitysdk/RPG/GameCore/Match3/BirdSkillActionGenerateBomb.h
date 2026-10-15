#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateBomb; }

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84ABB0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D84ABC0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84AB80)

namespace RPG::GameCore::Match3
{
	class BirdSkillActionGenerateBomb : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::GameCore::Match3::BombType BombType; // 0x18
		::System::UInt32 BombCount; // 0x1C
		::System::Boolean IsSelfDestruct; // 0x20
		::System::Boolean GenerateAtCenter; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
