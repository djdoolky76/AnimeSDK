#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionMapNpcType; }

#define RPG_GAMECORE_MISSIONMAPNPCTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887A80)
#define RPG_GAMECORE_MISSIONMAPNPCTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887960)

namespace RPG::GameCore
{
	class MissionMapNpcType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 NPCID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPNPCTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionMapNpcType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionMapNpcType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPNPCTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
