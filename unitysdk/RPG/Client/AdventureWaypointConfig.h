#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureWaypointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class IWayPointTarget; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREWAYPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7C210)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureWaypointConfig_TypeDefinitionIndex = 71030;

	class AdventureWaypointConfig : public ::System::Object
	{
	public:
		::RPG::Client::IWayPointTarget* Target; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt64 CreateTime; // 0x28
		::UnityEngine::Vector2 Offset2D; // 0x30
		::RPG::Client::AdventureWaypointType WaypointType; // 0x38
		::UnityEngine::Vector3 Offset; // 0x3C
		::System::Single ShowRangeMin; // 0x48
		::System::Boolean IsNew; // 0x4C
		::System::Boolean IsTeleport; // 0x4D
		::System::Boolean IsInMinRange; // 0x4E
		::System::Byte _padding0[0x1];
		::System::Single ToShowAnimTime; // 0x50
		::System::Single ShowRangeMax; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREWAYPOINTCONFIG_CTOR_OFFSET))(this);
		}

	};
}
