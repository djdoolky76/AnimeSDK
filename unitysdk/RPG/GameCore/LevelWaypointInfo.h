#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelWaypointInfo; }

#define RPG_GAMECORE_LEVELWAYPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C3120)
#define RPG_GAMECORE_LEVELWAYPOINTINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C3130)
#define RPG_GAMECORE_LEVELWAYPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CF2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelWaypointInfo_TypeDefinitionIndex = 17250;

	class LevelWaypointInfo : public ::RPG::GameCore::LevelObjectInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelWaypointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelWaypointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelWaypointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelWaypointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELWAYPOINTINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
