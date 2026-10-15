#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvTeamMembers; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5EC80)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5ED10)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5ECF0)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5EC90)
#define RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5EC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvTeamMembers_TypeDefinitionIndex = 23865;

	class TargetFetchAdvTeamMembers : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvTeamMembers* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvTeamMembers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVTEAMMEMBERS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
