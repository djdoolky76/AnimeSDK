#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERENTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F618570)
#define AKTRIGGERENTER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1F6184A0)

inline static constexpr unsigned int AkTriggerEnter_TypeDefinitionIndex = 44965;

	class AkTriggerEnter : public ::AkTriggerBase
	{
	public:
		::UnityEngine::GameObject* triggerObject; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERENTER_CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKTRIGGERENTER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

	};
