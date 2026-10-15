#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTeamEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB38920)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB38A00)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB389D0)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB38930)
#define RPG_GAMECORE_TARGETFETCHTEAMENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB388F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTeamEntity_TypeDefinitionIndex = 23912;

	class TargetFetchTeamEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTeamEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTeamEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTEAMENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
