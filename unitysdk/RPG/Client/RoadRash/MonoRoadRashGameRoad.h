#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class TrackExtensionMonoPlugin; }
namespace System { class Object; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_CTOR_OFFSET UNITYSDK_OFFSET(0xDED5DF0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xDED5C90)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_RESET_OFFSET UNITYSDK_OFFSET(0xDED5D20)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameRoad_TypeDefinitionIndex = 75862;

	class MonoRoadRashGameRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::TrackExtensionMonoPlugin* Track; // 0x18
		::System::UInt32 StartPointIndex; // 0x20
		::System::UInt32 EndPointIndex; // 0x24
		::Il2CppArray<::System::Object*>* Links; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_CTOR_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROAD_RESET_OFFSET))(this);
		}

	};
}
