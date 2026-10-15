#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTurnOwnerActionPhaseEnd; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D541EB0)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D542030)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D542000)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D541EC0)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D541E80)

namespace RPG::GameCore
{
	class ByTurnOwnerActionPhaseEnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
