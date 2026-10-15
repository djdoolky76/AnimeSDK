#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistWayPointFCVCondition; }
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA8D0)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D3FCF10)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D3FC030)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3FA8E0)
#define RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3FCEE0)

namespace RPG::GameCore
{
	class AssistWayPointFCVCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::FloorCustomValueConfig* TargetFCV; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AssistWayPointFCVCondition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AssistWayPointFCVCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFCVCONDITION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
