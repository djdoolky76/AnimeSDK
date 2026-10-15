#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionItemConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_MISSIONITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D859C70)
#define RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D859B80)
#define RPG_GAMECORE_MISSIONITEMCONFIG_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1D859C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionItemConfig_TypeDefinitionIndex = 18983;

	class MissionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromJson(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::MissionItemConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::MissionItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIG_FROMJSON_OFFSET))(a1, a2);
		}

	};
}
