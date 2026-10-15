#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_ANIMSPEED_CTOR_OFFSET UNITYSDK_OFFSET(0xCD1EA00)
#define RPG_CLIENT_EFFECT_ANIMSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD1E830)

namespace RPG::Client
{
	class Effect_AnimSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* Target; // 0x18
		::System::Single PlaySpeed; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Animator* TargetAnimator; // 0x28
		::System::Boolean IsFollowAnimatorSpeed; // 0x30
		::System::Byte _padding1[0x7];
		::UnityEngine::MaterialPropertyBlock* DMOKGPMOFGM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ANIMSPEED_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_ANIMSPEED_UPDATE_OFFSET))(this);
		}

	};
}
