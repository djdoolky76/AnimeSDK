#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasUnGottenLevelReward; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FE190)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FE310)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FE2E0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FE1A0)
#define RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FE160)

namespace RPG::GameCore
{
	class ByHasUnGottenLevelReward : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasUnGottenLevelReward* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasUnGottenLevelReward*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASUNGOTTENLEVELREWARD_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
