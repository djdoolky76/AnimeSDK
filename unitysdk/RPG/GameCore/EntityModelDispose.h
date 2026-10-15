#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_ENTITYMODELDISPOSE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6645E0)

namespace RPG::GameCore
{
	class EntityModelDispose : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* UnityGo; // 0x10
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMODELDISPOSE_CTOR_OFFSET))(this);
		}

	};
}
