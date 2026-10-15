#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapAllTeamMemberFromFirstEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB696B0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB69830)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB69800)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB696C0)
#define RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB69680)

namespace RPG::GameCore
{
	class TargetMapAllTeamMemberFromFirstEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveUnselectable; // 0x10
		::System::Boolean SelectEnemyTeam; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLTEAMMEMBERFROMFIRSTENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
