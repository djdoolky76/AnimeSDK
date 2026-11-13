#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionAddStatConfig; }
namespace RPG::GameCore { class TrainPartyStat; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D85A0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F5D85B0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5D8550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatConfig_TypeDefinitionIndex = 18239;

	class TrainPartyActionAddStatConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x18
		::System::UInt32 PassengerParam; // 0x1C
		::Il2CppArray<::RPG::GameCore::TrainPartyStat*>* AddList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
