#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_F2726C2EF0F4EED9_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_F2726C2EF0F4EED9__CTOR_OFFSET UNITYSDK_OFFSET(0x43E5590)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_F2726C2EF0F4EED9_TypeDefinitionIndex = 21468;

	class VideoPlayer_F2726C2EF0F4EED9 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F2726C2EF0F4EED9__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F, ::System::Double F7C821B2C74DE4BB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F2726C2EF0F4EED9_INVOKE_OFFSET))(this, AFE8F10692F5139F, F7C821B2C74DE4BB);
		}
	};
}
