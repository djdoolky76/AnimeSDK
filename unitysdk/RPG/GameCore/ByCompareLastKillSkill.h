#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareLastKillSkill; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B9EA0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BA060)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BA030)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B9EB0)
#define RPG_GAMECORE_BYCOMPARELASTKILLSKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B9E70)

namespace RPG::GameCore
{
	class ByCompareLastKillSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* TargetSkillName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareLastKillSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareLastKillSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARELASTKILLSKILL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
