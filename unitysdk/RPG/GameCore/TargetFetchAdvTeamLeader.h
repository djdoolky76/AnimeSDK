#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvTeamLeader; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5E960)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5EA60)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5EA30)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5E970)
#define RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamLeader_TypeDefinitionIndex = 23864;

	class TargetFetchAdvTeamLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean FetchLatestTeamLeader; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamLeader* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMLEADER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
