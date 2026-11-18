#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;

#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1810AA80)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_PLAY_OFFSET UNITYSDK_OFFSET(0x1810A9C0)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_STOP_OFFSET UNITYSDK_OFFSET(0x1810AA30)
#define MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1810A9A0)

namespace MoleMole
{
	inline static constexpr unsigned int MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo_TypeDefinitionIndex = 44950;

	class MultipleVideoPlayerManager_VideoPlayerHelperRuntimeInfo : public ::System::Object
	{
	public:
		::DGDNKBFMHME* videoPlayerHelper; // 0x10
		::MoleMole::MultipleVideoPlayerManager_PlayParam playParam; // 0x18
		::System::Int32 index; // 0x30

		::System::Void _ctor(::DGDNKBFMHME* videoPlayerHelper, ::MoleMole::MultipleVideoPlayerManager_PlayParam playParam, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*, ::MoleMole::MultipleVideoPlayerManager_PlayParam, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO__CTOR_OFFSET))(this, videoPlayerHelper, playParam, index);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_PLAY_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_STOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIPLEVIDEOPLAYERMANAGER_VIDEOPLAYERHELPERRUNTIMEINFO_ONFINISH_OFFSET))(this);
		}
	};
}
