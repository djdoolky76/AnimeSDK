#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASASSISTAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7300)
#define RPG_GAMECORE_BYHASASSISTAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4F7480)
#define RPG_GAMECORE_BYHASASSISTAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4F7450)
#define RPG_GAMECORE_BYHASASSISTAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4F7310)
#define RPG_GAMECORE_BYHASASSISTAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4F72D0)

namespace RPG::GameCore
{
	class ByHasAssistAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
