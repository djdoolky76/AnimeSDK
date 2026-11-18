#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNBEEFGDHEN.h"
#include "unitysdk/FOGCLAEFGPA.h"
#include "unitysdk/MoleMole/IVideoPlayer.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"

class IKBMMHDLNOB;
namespace MoleMole { class VideoPlayerMono; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Video { class VideoClip; }

#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x1811A220)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x1811A000)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1811B170)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x18119FE0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1811AD40)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1811ADC0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x1811ACC0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1811AF30)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISCANRENDER_OFFSET UNITYSDK_OFFSET(0x1811B210)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1811A9E0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1811A980)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1811A950)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x1811A9B0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1811ABC0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1811AE40)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1811A920)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1811AA80)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1811B240)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_SIMULATEVIDEOPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1811A260)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1811B0D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1811AF90)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1811B030)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x1811AF60)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1811AC40)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_URL_OFFSET UNITYSDK_OFFSET(0x1811A940)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_USESIMULATE_OFFSET UNITYSDK_OFFSET(0x1811A240)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1811AB20)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1811AF00)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1811C9C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1811A180)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOGUPDATE_OFFSET UNITYSDK_OFFSET(0x1811A0E0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_LOG_OFFSET UNITYSDK_OFFSET(0x1811A130)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPLAYSTART_OFFSET UNITYSDK_OFFSET(0x1811CC10)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1811CBA0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1811CA50)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATELOOPPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1811A340)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATEONPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1811A2D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATESEEKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1811A280)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PAUSE_OFFSET UNITYSDK_OFFSET(0x1811B420)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PLAY_OFFSET UNITYSDK_OFFSET(0x1811B3C0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PREPARE_OFFSET UNITYSDK_OFFSET(0x1811B340)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_PRINTONSCREEN_OFFSET UNITYSDK_OFFSET(0x1811A1D0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKFRAME_OFFSET UNITYSDK_OFFSET(0x1811C7A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKTIME_OFFSET UNITYSDK_OFFSET(0x1811C830)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETAUDIOMODENONE_OFFSET UNITYSDK_OFFSET(0x1811B2E0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETURL_OFFSET UNITYSDK_OFFSET(0x1811B520)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SETVIDEOCLIP_OFFSET UNITYSDK_OFFSET(0x1811C8F0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_CLIPDATA_OFFSET UNITYSDK_OFFSET(0x1811A230)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1811B1A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET UNITYSDK_OFFSET(0x18119FF0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x1811A9F0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1811AE70)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYER_OFFSET UNITYSDK_OFFSET(0x1811A930)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1811AAB0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1811B270)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_SIMULATEVIDEOPLAYBACK_OFFSET UNITYSDK_OFFSET(0x1811A270)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x1811B100)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x1811AFC0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1811B060)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_USESIMULATE_OFFSET UNITYSDK_OFFSET(0x1811A250)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET UNITYSDK_OFFSET(0x1811AB50)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_STEPFORWARD_OFFSET UNITYSDK_OFFSET(0x1811C960)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_STOP_OFFSET UNITYSDK_OFFSET(0x1811B4A0)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHPLAYER_OFFSET UNITYSDK_OFFSET(0x1811C030)
#define MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHSIMULATE_OFFSET UNITYSDK_OFFSET(0x1811B730)
#define MOLEMOLE_SIMULATEVIDEOPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1811A390)
#define MOLEMOLE_SIMULATEVIDEOPLAYER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1811CC80)

namespace MoleMole
{
	inline static constexpr unsigned int SimulateVideoPlayer_TypeDefinitionIndex = 59743;

	class SimulateVideoPlayer : public ::MoleMole::IVideoPlayer
	{
	public:
		::MoleMole::IVideoPlayer* _Player_k__BackingField; // 0x48
		::System::String* _url; // 0x50
		::DNBEEFGDHEN videoFileUrl; // 0x58
		::IKBMMHDLNOB* _SimulateVideoPlayback_k__BackingField; // 0x78
		::FOGCLAEFGPA _ClipData_k__BackingField; // 0x80
		::System::Boolean _UseSimulate_k__BackingField; // 0x90
		::System::Boolean _Looping; // 0x91

		::System::Void _ctor(::MoleMole::VideoPlayerMono* mono, ::MoleMole::IVideoPlayer* player)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::VideoPlayerMono*, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER__CTOR_OFFSET))(this, mono, player);
		}

		static ::System::Boolean get_EnableUpdateLog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLEUPDATELOG_OFFSET))();
		}

		static ::System::Void set_EnableUpdateLog(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLEUPDATELOG_OFFSET))(value);
		}

		::System::String* get_DebugName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_DEBUGNAME_OFFSET))(this);
		}

		::System::Void LogUpdate(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOGUPDATE_OFFSET))(this, msg);
		}

		::System::Void Log(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOG_OFFSET))(this, msg);
		}

		::System::Void LogError(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LOGERROR_OFFSET))(this, msg);
		}

		::System::Void PrintOnScreen(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PRINTONSCREEN_OFFSET))(this, msg);
		}

		::FOGCLAEFGPA get_ClipData()
		{
			return ((::FOGCLAEFGPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_CLIPDATA_OFFSET))(this);
		}

		::System::Void set_ClipData(::FOGCLAEFGPA value)
		{
			return ((::System::Void(*)(::PVOID, ::FOGCLAEFGPA))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_CLIPDATA_OFFSET))(this, value);
		}

		::System::Boolean get_UseSimulate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_USESIMULATE_OFFSET))(this);
		}

		::System::Void set_UseSimulate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_USESIMULATE_OFFSET))(this, value);
		}

		::IKBMMHDLNOB* get_SimulateVideoPlayback()
		{
			return ((::IKBMMHDLNOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_SIMULATEVIDEOPLAYBACK_OFFSET))(this);
		}

		::System::Void set_SimulateVideoPlayback(::IKBMMHDLNOB* value)
		{
			return ((::System::Void(*)(::PVOID, ::IKBMMHDLNOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_SIMULATEVIDEOPLAYBACK_OFFSET))(this, value);
		}

		::System::Void OnSimulateSeekCompleted(::IKBMMHDLNOB* obj)
		{
			return ((::System::Void(*)(::PVOID, ::IKBMMHDLNOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATESEEKCOMPLETED_OFFSET))(this, obj);
		}

		::System::Void OnSimulateOnPlayFinish(::IKBMMHDLNOB* obj)
		{
			return ((::System::Void(*)(::PVOID, ::IKBMMHDLNOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATEONPLAYFINISH_OFFSET))(this, obj);
		}

		::System::Void OnSimulateLoopPointReached(::IKBMMHDLNOB* obj)
		{
			return ((::System::Void(*)(::PVOID, ::IKBMMHDLNOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONSIMULATELOOPPOINTREACHED_OFFSET))(this, obj);
		}

		::MoleMole::IVideoPlayer* get_Player()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYER_OFFSET))(this);
		}

		::System::Void set_Player(::MoleMole::IVideoPlayer* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYER_OFFSET))(this, value);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_URL_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_isPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_isLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Void set_isLooping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ISLOOPING_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Boolean get_waitForFirstFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WAITFORFIRSTFRAME_OFFSET))(this);
		}

		::System::Void set_waitForFirstFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_WAITFORFIRSTFRAME_OFFSET))(this, value);
		}

		::System::Double get_length()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_LENGTH_OFFSET))(this);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TIME_OFFSET))(this);
		}

		::System::Int64 get_frame()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAME_OFFSET))(this);
		}

		::System::UInt64 get_frameCount()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_frameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::UInt32 get_width()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_WIDTH_OFFSET))(this);
		}

		::System::UInt32 get_height()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Texture* get_texture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_targetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Void set_targetMaterialRenderer(::UnityEngine::Renderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALRENDERER_OFFSET))(this, value);
		}

		::UnityEngine::RenderTexture* get_targetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETTEXTURE_OFFSET))(this);
		}

		::System::Void set_targetTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETTEXTURE_OFFSET))(this, value);
		}

		::System::String* get_targetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_TARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Void set_targetMaterialProperty(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_TARGETMATERIALPROPERTY_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_ISCANRENDER_OFFSET))(this);
		}

		::UnityEngine::Video::VideoRenderMode get_renderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::Video::VideoRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoRenderMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::System::Void SetAudioModeNone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETAUDIOMODENONE_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PREPARE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_PAUSE_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_STOP_OFFSET))(this);
		}

		::System::Void SetURL(::System::String* newUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETURL_OFFSET))(this, newUrl);
		}

		::System::Void SeekFrame(::System::Int32 seekFrameNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKFRAME_OFFSET))(this, seekFrameNo);
		}

		::System::Void SeekTime(::System::Double seekTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SEEKTIME_OFFSET))(this, seekTime);
		}

		::System::Void SetVideoClip(::UnityEngine::Video::VideoClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SETVIDEOCLIP_OFFSET))(this, clip);
		}

		::System::Void StepForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_STEPFORWARD_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void SwitchSimulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHSIMULATE_OFFSET))(this);
		}

		::System::Void SwitchPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_SWITCHPLAYER_OFFSET))(this);
		}

		::System::Void NativePlayerOnPrepareCompleted(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPREPARECOMPLETED_OFFSET))(this, obj);
		}

		::System::Void NativePlayerOnPlayStart(::MoleMole::IVideoPlayer* obj)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER_NATIVEPLAYERONPLAYSTART_OFFSET))(this, obj);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMULATEVIDEOPLAYER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
