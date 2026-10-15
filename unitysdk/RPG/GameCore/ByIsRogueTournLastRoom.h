#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRogueTournLastRoom; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5206B0)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D520830)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D520800)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5206C0)
#define RPG_GAMECORE_BYISROGUETOURNLASTROOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D520680)

namespace RPG::GameCore
{
	class ByIsRogueTournLastRoom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournLastRoom* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournLastRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNLASTROOM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
