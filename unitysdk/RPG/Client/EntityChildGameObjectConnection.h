#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CLEARCONNECTION_OFFSET UNITYSDK_OFFSET(0xD7B8A60)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xD7B8BC0)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xD7B8AB0)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_INITOWNERGOCONNECTION_OFFSET UNITYSDK_OFFSET(0xD7B8A10)
#define RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD7B8B70)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityChildGameObjectConnection_TypeDefinitionIndex = 70360;

	class EntityChildGameObjectConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::EntityGameObjectConnection* CEMHGCDIIEG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CTOR_OFFSET))(this);
		}

		::System::Void InitOwnerGoConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_INITOWNERGOCONNECTION_OFFSET))(this);
		}

		::System::Void ClearConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_CLEARCONNECTION_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCHILDGAMEOBJECTCONNECTION_ONDESTROY_OFFSET))(this);
		}

	};
}
