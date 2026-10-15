#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace RPG::GameCore { class TrainPartyPerformanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC343E0)
#define RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC34190)

namespace RPG::GameCore
{
	class TrainPartyPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Environment; // 0x10
		::Il2CppArray<::System::UInt32>* Groups; // 0x18
		::Il2CppArray<::System::String*>* Characters; // 0x20
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformance*>* Performances; // 0x28
		::Il2CppArray<::RPG::GameCore::TrainPartyPerformance*>* ConstPerformances; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyPerformanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
