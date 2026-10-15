#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInCustomTeamFormation; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D517CB0)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D517F70)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D517F40)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D517CC0)
#define RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D517C80)

namespace RPG::GameCore
{
	class ByIsInCustomTeamFormation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::System::String*>* CustomFormationNames; // 0x30
		::System::Boolean CheckSlot; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInCustomTeamFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInCustomTeamFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINCUSTOMTEAMFORMATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
