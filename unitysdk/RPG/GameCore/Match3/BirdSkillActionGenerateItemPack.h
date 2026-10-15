#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdSkillActionGenerateItemPack; }

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D400)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81D410)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81D3D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateItemPack_TypeDefinitionIndex = 24933;

	class BirdSkillActionGenerateItemPack : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ItemPackCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
