#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTurnActionEntityTeamType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B4BB0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B4D70)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B4D40)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B4BC0)
#define RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTurnActionEntityTeamType_TypeDefinitionIndex = 23484;

	class ByCompareTurnActionEntityTeamType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTurnActionEntityTeamType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTurnActionEntityTeamType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETURNACTIONENTITYTEAMTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
