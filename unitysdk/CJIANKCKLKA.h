#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CJIANKCKLKA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD212CA0)
#define CJIANKCKLKA_CTOR_OFFSET UNITYSDK_OFFSET(0xD212EB0)
#define CJIANKCKLKA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xD2127D0)
#define CJIANKCKLKA_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xD212C20)
#define CJIANKCKLKA_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xD2127E0)
#define CJIANKCKLKA_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xD212C60)

	class CJIANKCKLKA : public ::System::Object
	{
	public:
		::RPG::Client::ElfFarmCellData* KJHODFDPOCG; // 0x10
		::UnityEngine::Transform* HFLDHJHJNCF; // 0x18
		::System::String* BFDAADMGNFD; // 0x20
		::UnityEngine::GameObject* FAEGPGKBBLI; // 0x28
		::System::String* PILMABHICEE; // 0x30
		::UnityEngine::GameObject* BHOMJHDIOMH; // 0x38
		::UnityEngine::Quaternion FLNOBMJMDNG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIANKCKLKA_CTOR_OFFSET))(this);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIANKCKLKA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CJIANKCKLKA_ONSPAWNASYNC_OFFSET))(this, a1);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIANKCKLKA_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIANKCKLKA_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIANKCKLKA_CLEAR_OFFSET))(this);
		}

	};
