#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortMonsterRank; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTMONSTERRANK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB461C0)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB46330)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB462F0)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB461D0)
#define RPG_GAMECORE_TARGETSORTMONSTERRANK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortMonsterRank_TypeDefinitionIndex = 23986;

	class TargetSortMonsterRank : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MonsterRank MaxRank; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortMonsterRank* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortMonsterRank*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTMONSTERRANK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
