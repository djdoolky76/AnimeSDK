#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTurnOwnerHasActionInTurn; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D542370)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5424F0)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5424C0)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D542380)
#define RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D542340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerHasActionInTurn_TypeDefinitionIndex = 23480;

	class ByTurnOwnerHasActionInTurn : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerHasActionInTurn* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerHasActionInTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERHASACTIONINTURN_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
