#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD725110)
#define RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD725300)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoAnimatorStateSimpleEvent_TypeDefinitionIndex = 68517;

	class MonoAnimatorStateSimpleEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Animator; // 0x18
		::Il2CppArray<::System::Object*>* StateEvents; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOANIMATORSTATESIMPLEEVENT_AWAKE_OFFSET))(this);
		}

	};
}
