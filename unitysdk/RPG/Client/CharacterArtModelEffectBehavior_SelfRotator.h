#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE3F50)
#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE3E80)
#define RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE3F40)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterArtModelEffectBehavior_SelfRotator_TypeDefinitionIndex = 70256;

	struct alignas(8) CharacterArtModelEffectBehavior_SelfRotator
	{
		::UnityEngine::GameObject* Target; // 0x10
		::UnityEngine::Vector3 RotationSpeed; // 0x18
		::UnityEngine::Vector3 AccumulatedRotation; // 0x24
		::UnityEngine::Quaternion InitialRotation; // 0x30
		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERARTMODELEFFECTBEHAVIOR_SELFROTATOR_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
