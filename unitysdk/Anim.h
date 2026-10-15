#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TransformAnimationType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define ANIM_CHJKJPDBNAH_OFFSET UNITYSDK_OFFSET(0x15BC48D0)
#define ANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC49C0)
#define ANIM_JNMBPDMIEOL_OFFSET UNITYSDK_OFFSET(0x15BC4970)
#define ANIM_MPFAHKMNKOM_OFFSET UNITYSDK_OFFSET(0x15BC4920)

	class Anim : public ::System::Object
	{
	public:
		::TransformAnimationType AnimationType; // 0x10
		::System::Single Delay; // 0x14
		::System::Single Duration; // 0x18
		::System::Boolean CanOverrideAxis; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 IsRandomAxis; // 0x20
		::UnityEngine::Vector3 Axis; // 0x2C
		::System::Single AnimMotionScale; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* Curve; // 0x40
		::System::Single TriggerWaveRadius; // 0x48
		::System::Byte _padding2[0x4];
		::System::String* EffectPath; // 0x50
		::UnityEngine::Vector3 EffectOffset; // 0x58
		::System::Single EffectScale; // 0x64
		::System::String* AttachPoint; // 0x68
		::System::Boolean IsAttach; // 0x70
		::System::Byte _padding3[0x7];
		::System::String* AudioEventNanme; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_CTOR_OFFSET))(this);
		}

		::System::Boolean CHJKJPDBNAH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_CHJKJPDBNAH_OFFSET))(this);
		}

		::System::Boolean MPFAHKMNKOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_MPFAHKMNKOM_OFFSET))(this);
		}

		::System::Boolean JNMBPDMIEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIM_JNMBPDMIEOL_OFFSET))(this);
		}

	};
