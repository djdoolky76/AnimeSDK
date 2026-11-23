#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_E686BBB9641A5875_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_E686BBB9641A5875__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_E686BBB9641A5875_TypeDefinitionIndex = 21465;

	class VideoPlayer_E686BBB9641A5875 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_E686BBB9641A5875__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_E686BBB9641A5875_INVOKE_OFFSET))(this, AFE8F10692F5139F);
		}
	};
}
