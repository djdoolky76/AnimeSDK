#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapTeamFormation; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1C640)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE1C6F0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE1C6B0)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE1C650)
#define RPG_GAMECORE_TARGETMAPTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE1C5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapTeamFormation_TypeDefinitionIndex = 24412;

	class TargetMapTeamFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPTEAMFORMATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
