#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client::ParkourGame { class MonoParkourRoad; }
namespace RPG::Client::ParkourGame { class MonoParkourRoadMap; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA73360)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GDNLDLHEIHM_OFFSET UNITYSDK_OFFSET(0xDA73260)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GET_CURPARKOURROADMAP_OFFSET UNITYSDK_OFFSET(0xDA72FF0)
#define RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDA730D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourRoadDesignTool_TypeDefinitionIndex = 74218;

	class ParkourRoadDesignTool : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourRoadMap* FEOIFLFOIOF; // 0x18
		::System::Single RoadMinDistance; // 0x20
		::System::Single RoadMaxDistance; // 0x24
		::System::Boolean Update; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::Client::ParkourGame::MonoParkourRoad*>* HAEBADKILLO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_CTOR_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourRoadMap* get_CurParkourRoadMap()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoadMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GET_CURPARKOURROADMAP_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad* GDNLDLHEIHM(::System::String* a1)
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURROADDESIGNTOOL_GDNLDLHEIHM_OFFSET))(this, a1);
		}

	};
}
