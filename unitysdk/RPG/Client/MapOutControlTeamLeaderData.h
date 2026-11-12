#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFAAAA0)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFAA890)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0xDFAA8A0)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xDFAA900)
#define RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xDFAA9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapOutControlTeamLeaderData_TypeDefinitionIndex = 64359;

	class MapOutControlTeamLeaderData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x10
		static ::System::UInt32* StaticGet_IconType()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "MapOutControlTeamLeaderData")->GetStaticField(0x10C60);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_CCTOR_OFFSET))();
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPOUTCONTROLTEAMLEADERDATA_GET_ROTATION_OFFSET))(this);
		}

	};
}
