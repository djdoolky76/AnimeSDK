#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class ElfFarmCellData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CJIANKCKLKA_CLEAR_OFFSET UNITYSDK_OFFSET(0x177D6DB0)
#define CJIANKCKLKA_CTOR_OFFSET UNITYSDK_OFFSET(0x177D6FD0)
#define CJIANKCKLKA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x177D68E0)
#define CJIANKCKLKA_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x177D6D30)
#define CJIANKCKLKA_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x177D68F0)
#define CJIANKCKLKA_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x177D6D70)

inline static constexpr unsigned int CJIANKCKLKA_TypeDefinitionIndex = 70614;

	class CJIANKCKLKA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* HFLDHJHJNCF; // 0x10
		::RPG::Client::ElfFarmCellData* KJHODFDPOCG; // 0x18
		::UnityEngine::GameObject* BHOMJHDIOMH; // 0x20
		::System::String* BFDAADMGNFD; // 0x28
		::UnityEngine::GameObject* FAEGPGKBBLI; // 0x30
		::System::String* PILMABHICEE; // 0x38
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
