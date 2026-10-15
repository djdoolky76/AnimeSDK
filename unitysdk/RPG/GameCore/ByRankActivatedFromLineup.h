#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByRankActivatedFromLineup; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D506AA0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D506C90)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D506C60)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D506AB0)
#define RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D506A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRankActivatedFromLineup_TypeDefinitionIndex = 23060;

	class ByRankActivatedFromLineup : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x20
		::System::UInt32 Rank; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRankActivatedFromLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRankActivatedFromLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANKACTIVATEDFROMLINEUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
