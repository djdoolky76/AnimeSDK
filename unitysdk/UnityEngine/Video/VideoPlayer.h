#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace UnityEngine::Video { class VideoPlayer_B377BC869E446B7F; }
namespace UnityEngine::Video { class VideoPlayer_E686BBB9641A5875; }
namespace UnityEngine::Video { class VideoPlayer_F2726C2EF0F4EED9; }
namespace UnityEngine::Video { class VideoPlayer_F4CD639F28B807CE; }

#define UNITYENGINE_VIDEO_VIDEOPLAYER_E66476241FB57830_OFFSET UNITYSDK_OFFSET(0x43E56D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_E7FAE1B22EEB0C8F_OFFSET UNITYSDK_OFFSET(0x43E5750)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_EE888DB608B44708_OFFSET UNITYSDK_OFFSET(0x43E5790)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_F213A2C7D4A4C454_OFFSET UNITYSDK_OFFSET(0x43E5850)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_F48BD02D6B2F81F5_OFFSET UNITYSDK_OFFSET(0x43E57D0)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_F4A0759AA3F03922_OFFSET UNITYSDK_OFFSET(0x43E5810)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_F7BED4EDFD5BC2C3_OFFSET UNITYSDK_OFFSET(0x43E5710)
#define UNITYENGINE_VIDEO_VIDEOPLAYER_FB29702ADCFF5559_OFFSET UNITYSDK_OFFSET(0x43E5890)

namespace UnityEngine::Video
{
	inline static constexpr unsigned int VideoPlayer_TypeDefinitionIndex = 21469;

	class VideoPlayer : public ::UnityEngine::Behaviour
	{
	public:
		::UnityEngine::Video::VideoPlayer_E686BBB9641A5875* FFA05D76C9718438; // 0x18
		::UnityEngine::Video::VideoPlayer_E686BBB9641A5875* E31CB71E3A624E44; // 0x20
		::UnityEngine::Video::VideoPlayer_E686BBB9641A5875* AFC266424FCBAA07; // 0x28
		::UnityEngine::Video::VideoPlayer_E686BBB9641A5875* FE11D680EF9B2BC7; // 0x30
		::UnityEngine::Video::VideoPlayer_B377BC869E446B7F* F270A7A1FC859FDA; // 0x38
		::UnityEngine::Video::VideoPlayer_E686BBB9641A5875* B8DFB9B45C0C9158; // 0x40
		::UnityEngine::Video::VideoPlayer_F2726C2EF0F4EED9* E5987C5D0DC9ADD8; // 0x48
		::UnityEngine::Video::VideoPlayer_F4CD639F28B807CE* EEA34BEEF2CDAC34; // 0x50

		static ::System::Void F48BD02D6B2F81F5(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F48BD02D6B2F81F5_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void F4A0759AA3F03922(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F4A0759AA3F03922_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void F213A2C7D4A4C454(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F213A2C7D4A4C454_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void F7BED4EDFD5BC2C3(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F, ::System::String* EF92D7BA49D05EC0)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_F7BED4EDFD5BC2C3_OFFSET))(AFE8F10692F5139F, EF92D7BA49D05EC0);
		}

		static ::System::Void FB29702ADCFF5559(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_FB29702ADCFF5559_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void E7FAE1B22EEB0C8F(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_E7FAE1B22EEB0C8F_OFFSET))(AFE8F10692F5139F);
		}

		static ::System::Void E66476241FB57830(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F, ::System::Double F7C821B2C74DE4BB)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_E66476241FB57830_OFFSET))(AFE8F10692F5139F, F7C821B2C74DE4BB);
		}

		static ::System::Void EE888DB608B44708(::UnityEngine::Video::VideoPlayer* AFE8F10692F5139F, ::System::Int64 BAF3DAEA786A654A)
		{
			return ((::System::Void(*)(::UnityEngine::Video::VideoPlayer*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_VIDEO_VIDEOPLAYER_EE888DB608B44708_OFFSET))(AFE8F10692F5139F, BAF3DAEA786A654A);
		}
	};
}
