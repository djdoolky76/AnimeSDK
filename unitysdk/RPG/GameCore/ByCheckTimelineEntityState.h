#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckTimelineEntityState; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D497030)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D497210)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4971E0)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D497040)
#define RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D497000)

namespace RPG::GameCore
{
	class ByCheckTimelineEntityState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::RPG::GameCore::DynamicString* StateName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckTimelineEntityState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckTimelineEntityState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMELINEENTITYSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
