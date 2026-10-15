#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupSpatialInfo; }

#define RPG_GAMECORE_LEVELGROUPSPATIALINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1C00)
#define RPG_GAMECORE_LEVELGROUPSPATIALINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B1BC0)

namespace RPG::GameCore
{
	class LevelGroupSpatialInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSpatialInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSpatialInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSPATIALINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
