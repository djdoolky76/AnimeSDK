#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Video { class VideoPlayer; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_B377BC869E446B7F_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_B377BC869E446B7F__CTOR_OFFSET UNITYSDK_OFFSET(0x29BD7B0)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_B377BC869E446B7F_TypeDefinitionIndex = 21466;

	class VideoPlayer_B377BC869E446B7F : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_B377BC869E446B7F__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F, ::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_B377BC869E446B7F_INVOKE_OFFSET))(this, AFE8F10692F5139F, B083BE7841B347C4);
		}
	};
}
