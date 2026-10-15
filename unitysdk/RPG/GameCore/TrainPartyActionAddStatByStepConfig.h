#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionAddStatByStepConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFF0A0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFF0B0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFF050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatByStepConfig_TypeDefinitionIndex = 18074;

	class TrainPartyActionAddStatByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x18
		::System::UInt32 PassengerParam; // 0x1C
		::Il2CppArray<::RPG::GameCore::TrainPartyStatType>* AddTypeList; // 0x20
		::System::Int32 UpdatePerStep; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
