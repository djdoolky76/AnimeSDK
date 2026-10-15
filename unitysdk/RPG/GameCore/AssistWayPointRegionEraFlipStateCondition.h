#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointRegionEraFlipStateCondition; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB250)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3FFFE0)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FC0F0)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3FB260)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FFFB0)

namespace RPG::GameCore
{
	class AssistWayPointRegionEraFlipStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::EraStateType TargetRegionEraFlipState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
