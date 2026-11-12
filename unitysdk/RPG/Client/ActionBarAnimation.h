#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_ACTIONBARANIMATION_CTOR_OFFSET UNITYSDK_OFFSET(0xCCEE280)
#define RPG_CLIENT_ACTIONBARANIMATION_GET_ACTIONANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCCEE220)
#define RPG_CLIENT_ACTIONBARANIMATION_GET_FADEINANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCCEE160)
#define RPG_CLIENT_ACTIONBARANIMATION_GET_FADEOUTANIMCLIPNAME_OFFSET UNITYSDK_OFFSET(0xCCEE1C0)
#define RPG_CLIENT_ACTIONBARANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCCEE110)

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarAnimation_TypeDefinitionIndex = 74900;

	class ActionBarAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* FadeInAnimClip; // 0x18
		::UnityEngine::AnimationClip* FadeOutAnimClip; // 0x20
		::UnityEngine::AnimationClip* ActionAnimClip; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONBARANIMATION_CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONBARANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::String* get_FadeInAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONBARANIMATION_GET_FADEINANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_FadeOutAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONBARANIMATION_GET_FADEOUTANIMCLIPNAME_OFFSET))(this);
		}

		::System::String* get_ActionAnimClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIONBARANIMATION_GET_ACTIONANIMCLIPNAME_OFFSET))(this);
		}

	};
}
