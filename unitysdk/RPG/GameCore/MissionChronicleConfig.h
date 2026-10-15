#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleGraphType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleLogicConnectionNodeConfig; }
namespace RPG::GameCore { class ChronicleNodeConfig; }
namespace RPG::GameCore { class MissionChronicleConfig; }

#define RPG_GAMECORE_MISSIONCHRONICLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D856C70)
#define RPG_GAMECORE_MISSIONCHRONICLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D856AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChronicleConfig_TypeDefinitionIndex = 18979;

	class MissionChronicleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChronicleGraphType GraphType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ChronicleNodeConfig*>* NodeList; // 0x18
		::Il2CppArray<::RPG::GameCore::ChronicleLogicConnectionNodeConfig*>* LogicConnectionList; // 0x20
		::System::UInt32 StartNodeID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionChronicleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionChronicleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHRONICLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
