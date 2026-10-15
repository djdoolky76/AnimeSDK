#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB70EF0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB71010)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB70FC0)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB70F00)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB70DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightRoleTotalDamage_TypeDefinitionIndex = 23993;

	class TargetSortByGridFightRoleTotalDamage : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTROLETOTALDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
