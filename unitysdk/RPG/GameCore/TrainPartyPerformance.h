#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace RPG::GameCore { class TrainPartyPerformanceCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC33980)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC337E0)

namespace RPG::GameCore
{
	class TrainPartyPerformance : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformanceCharacter*>* Characters; // 0x10
		::System::String* LevelGraphConfigPath; // 0x18
		::Il2CppArray<::System::UInt32>* Groups; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformance* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
