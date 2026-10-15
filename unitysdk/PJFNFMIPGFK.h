#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PropCableLine; }
namespace UnityEngine { class GameObject; }

#define PJFNFMIPGFK_CLEAR_OFFSET UNITYSDK_OFFSET(0xC285390)
#define PJFNFMIPGFK_CTOR_OFFSET UNITYSDK_OFFSET(0xC2853E0)
#define PJFNFMIPGFK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xC2852A0)
#define PJFNFMIPGFK_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xC285310)
#define PJFNFMIPGFK_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xC2852B0)
#define PJFNFMIPGFK_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xC285350)

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
