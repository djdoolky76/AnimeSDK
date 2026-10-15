#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTurnOwnerHasPendingOneMore; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D542830)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5429B0)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D542980)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D542840)
#define RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D542800)

namespace RPG::GameCore
{
	class ByTurnOwnerHasPendingOneMore : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasPendingOneMore*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASPENDINGONEMORE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
