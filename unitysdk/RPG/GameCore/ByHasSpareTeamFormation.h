#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasSpareTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FB9F0)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FBC00)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FBBD0)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FBA00)
#define RPG_GAMECORE_BYHASSPARETEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FB9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSpareTeamFormation_TypeDefinitionIndex = 22640;

	class ByHasSpareTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasSpareTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasSpareTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSPARETEAMFORMATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
