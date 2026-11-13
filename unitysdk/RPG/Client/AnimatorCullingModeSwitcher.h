#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9B640)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1BE9B5A0)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_JCCDNPBIFHG_OFFSET UNITYSDK_OFFSET(0x1BE9B460)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1BE9B560)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_START_OFFSET UNITYSDK_OFFSET(0x1BE9B310)
#define RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BE9B4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimatorCullingModeSwitcher_TypeDefinitionIndex = 73091;

	class AnimatorCullingModeSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* _TargetAnimator; // 0x18
		::UnityEngine::AnimatorCullingMode _OriginMode; // 0x20
		::UnityEngine::AnimatorCullingMode _TargetMode; // 0x24
		::System::Int32 _DelayTickCount; // 0x28
		::System::Int32 ONJLDCPDKFD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_UPDATE_OFFSET))(this);
		}

		::System::Void JCCDNPBIFHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_JCCDNPBIFHG_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATORCULLINGMODESWITCHER_DESPAWNED_OFFSET))(this);
		}

	};
}
