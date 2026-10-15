#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsActivityInSchedule; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D8E20)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D8FD0)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D8FA0)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D8E30)
#define RPG_GAMECORE_BYISACTIVITYINSCHEDULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D8DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsActivityInSchedule_TypeDefinitionIndex = 20953;

	class ByIsActivityInSchedule : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ActivityPanelID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsActivityInSchedule* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsActivityInSchedule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISACTIVITYINSCHEDULE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
