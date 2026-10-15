#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByTriggeredTrackedSearch; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D398B60)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D398D20)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D398CF0)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D398B70)
#define RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D398B30)

namespace RPG::GameCore
{
	class AdvByTriggeredTrackedSearch : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Single CheckTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByTriggeredTrackedSearch* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByTriggeredTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTRIGGEREDTRACKEDSEARCH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
