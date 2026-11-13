#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PropCableLine; }
namespace UnityEngine { class GameObject; }

#define PJFNFMIPGFK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9E9CE0)
#define PJFNFMIPGFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9E9D30)
#define PJFNFMIPGFK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A9E9BF0)
#define PJFNFMIPGFK_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1A9E9C60)
#define PJFNFMIPGFK_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1A9E9C00)
#define PJFNFMIPGFK_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A9E9CA0)

inline static constexpr unsigned int PJFNFMIPGFK_TypeDefinitionIndex = 70719;

	class PJFNFMIPGFK : public ::System::Object
	{
	public:
		::RPG::Client::PropCableLine* IIHMHJBOJEB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_CTOR_OFFSET))(this);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFNFMIPGFK_CLEAR_OFFSET))(this);
		}

	};
