#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADLNNPBDDIH;
namespace RPG::Client { class AdventureWaypointConfig; }
namespace RPG::Client { class IMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class IWayPointTarget; }

#define RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF9C3C0)
#define RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0xDF9BF90)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF9D230)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETFOURROTATEVOXELWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF9D1D0)
#define RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDF9CBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapIconExtensions_TypeDefinitionIndex = 64344;

	class MapIconExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsInCurrentScene(::RPG::Client::IMapIcon* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_ISINCURRENTSCENE_OFFSET))(a1);
		}

		static ::RPG::Client::AdventureWaypointConfig* GetWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1)
		{
			return ((::RPG::Client::AdventureWaypointConfig*(*)(::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS_GETWAYPOINTCONFIG_OFFSET))(a1);
		}

		static ::RPG::Client::IWayPointTarget* _GetFiveDimWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::ADLNNPBDDIH* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::ADLNNPBDDIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETFIVEDIMWAYPOINTCONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IWayPointTarget* _GetFourRotateVoxelWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::ADLNNPBDDIH* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::ADLNNPBDDIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETFOURROTATEVOXELWAYPOINTCONFIG_OFFSET))(a1, a2);
		}

		static ::RPG::Client::IWayPointTarget* _GetMazeWaypointConfig(::RPG::Client::IMapIconTrackSnapshot* a1, ::ADLNNPBDDIH* a2)
		{
			return ((::RPG::Client::IWayPointTarget*(*)(::RPG::Client::IMapIconTrackSnapshot*, ::ADLNNPBDDIH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPICONEXTENSIONS__GETMAZEWAYPOINTCONFIG_OFFSET))(a1, a2);
		}

	};
}
