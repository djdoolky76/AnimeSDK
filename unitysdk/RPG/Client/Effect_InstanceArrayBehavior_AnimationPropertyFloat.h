#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0xCD3BB60)
#define RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xCD3AC60)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceArrayBehavior_AnimationPropertyFloat_TypeDefinitionIndex = 70616;

	class Effect_InstanceArrayBehavior_AnimationPropertyFloat : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::AnimationCurve* animation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_CTOR_OFFSET))(this);
		}

		::System::Single KFGJEKJHIMB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INSTANCEARRAYBEHAVIOR_ANIMATIONPROPERTYFLOAT_KFGJEKJHIMB_OFFSET))(this, a1);
		}

	};
}
