#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareTeamFormationWidth; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B2FD0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B3240)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B3210)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B2FE0)
#define RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B2FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamFormationWidth_TypeDefinitionIndex = 22923;

	class ByCompareTeamFormationWidth : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamFormationWidth* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamFormationWidth*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMFORMATIONWIDTH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
