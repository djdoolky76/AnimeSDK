#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleMiddleMissionPackConfig; }
namespace RPG::GameCore { class MiddleMissionPackConfig; }

#define RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2840)
#define RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B2780)

namespace RPG::GameCore
{
	class ChronicleMiddleMissionPackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiddleMissionPackConfig*>* MissionPackList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChronicleMiddleMissionPackConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChronicleMiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLEMIDDLEMISSIONPACKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
