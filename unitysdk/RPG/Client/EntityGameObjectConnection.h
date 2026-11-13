#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoLifeCircleEvent.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ADDLIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6D7820)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D7AA0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1A6D5D20)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A6D7A50)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A6D79F0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A6D7990)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_REMOVELIFECIRCLECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A6D78E0)
#define RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_SETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1A6D77D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityGameObjectConnection_TypeDefinitionIndex = 70364;

	class EntityGameObjectConnection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::GameEntity* HOEGAPJBABG; // 0x18
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* NCJCIIPKPON; // 0x20
		::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* AENKDHDOBAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_CTOR_OFFSET))(this);
		}

		::System::Void SetOwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_SETOWNERENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_GETOWNERENTITY_OFFSET))(this);
		}

		::System::Void AddLifeCircleCallback(::RPG::Client::MonoLifeCircleEvent a1, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoLifeCircleEvent, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ADDLIFECIRCLECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveLifeCircleCallback(::RPG::Client::MonoLifeCircleEvent a1, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoLifeCircleEvent, ::System::Action_1<::RPG::Client::EntityGameObjectConnection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_REMOVELIFECIRCLECALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYGAMEOBJECTCONNECTION_ONDESTROY_OFFSET))(this);
		}

	};
}
