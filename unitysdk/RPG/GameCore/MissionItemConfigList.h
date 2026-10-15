#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionItemConfig; }
namespace RPG::GameCore { class MissionItemConfigList; }

#define RPG_GAMECORE_MISSIONITEMCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887950)
#define RPG_GAMECORE_MISSIONITEMCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D887860)

namespace RPG::GameCore
{
	class MissionItemConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionItemConfig*>* ItemConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionItemConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionItemConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONITEMCONFIGLIST_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
