#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MainMissionState.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMainMissionState; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BC4A0)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BC710)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BC6D0)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BC4B0)
#define RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BC460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMainMissionState_TypeDefinitionIndex = 20313;

	class ByCompareMainMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::RPG::GameCore::MainMissionState MainMissionState; // 0x24
		::System::Boolean AllStoryLine; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMainMissionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMainMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMAINMISSIONSTATE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
