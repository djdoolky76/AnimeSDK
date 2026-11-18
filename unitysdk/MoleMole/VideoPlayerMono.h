#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Video/VideoRenderMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_VIDEOPLAYERMONO_AKAPPOBEHCG_OFFSET UNITYSDK_OFFSET(0x12C1D920)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOPING_OFFSET UNITYSDK_OFFSET(0x12C1D3C0)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOP_OFFSET UNITYSDK_OFFSET(0x12C1D660)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPAUSED_OFFSET UNITYSDK_OFFSET(0x12C1D4E0)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPLAYING_OFFSET UNITYSDK_OFFSET(0x12C1D420)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPREPARED_OFFSET UNITYSDK_OFFSET(0x12C1D480)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERPLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x12C1D780)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERRENDERMODE_OFFSET UNITYSDK_OFFSET(0x12C1D6C0)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALPROPERTY_OFFSET UNITYSDK_OFFSET(0x12C1D600)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALRENDERER_OFFSET UNITYSDK_OFFSET(0x12C1D720)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETTEXTURE_OFFSET UNITYSDK_OFFSET(0x12C1D540)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTEXTURE_OFFSET UNITYSDK_OFFSET(0x12C1D5A0)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERURL_OFFSET UNITYSDK_OFFSET(0x12C1D360)
#define MOLEMOLE_VIDEOPLAYERMONO_GET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x12C1D7E0)
#define MOLEMOLE_VIDEOPLAYERMONO_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x12C1D800)
#define MOLEMOLE_VIDEOPLAYERMONO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12C1DB50)
#define MOLEMOLE_VIDEOPLAYERMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C1DBB0)
#define MOLEMOLE_VIDEOPLAYERMONO_PREPARE_OFFSET UNITYSDK_OFFSET(0x12C1DC10)
#define MOLEMOLE_VIDEOPLAYERMONO_SET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x12C1D7F0)
#define MOLEMOLE_VIDEOPLAYERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1DD60)

namespace MoleMole
{
	inline static constexpr unsigned int VideoPlayerMono_TypeDefinitionIndex = 86372;

	class VideoPlayerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean playOnAwake; // 0x18
		::System::Boolean isLoop; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::RenderTexture* targetTexture; // 0x20
		::UnityEngine::Renderer* targetMaterialRenderer; // 0x28
		::System::String* targetMaterialProperty; // 0x30
		::UnityEngine::Video::VideoRenderMode renderMode; // 0x38
		::System::Byte _padding1[0x4];
		::MoleMole::IVideoPlayer* _HJEIHBNIFJI_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO__CTOR_OFFSET))(this);
		}

		::System::String* get_PlayerUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERURL_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOPING_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPREPARED_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISPAUSED_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* get_PlayerTargetTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* get_PlayerTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTEXTURE_OFFSET))(this);
		}

		::System::String* get_PlayerTargetMaterialProperty()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALPROPERTY_OFFSET))(this);
		}

		::System::Boolean get_PlayerIsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERISLOOP_OFFSET))(this);
		}

		::UnityEngine::Video::VideoRenderMode get_PlayerRenderMode()
		{
			return ((::UnityEngine::Video::VideoRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERRENDERMODE_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_PlayerTargetMaterialRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERTARGETMATERIALRENDERER_OFFSET))(this);
		}

		::System::Boolean get_PlayerPlayOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_PLAYERPLAYONAWAKE_OFFSET))(this);
		}

		::MoleMole::IVideoPlayer* get_VideoPlayer()
		{
			return ((::MoleMole::IVideoPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_GET_VIDEOPLAYER_OFFSET))(this);
		}

		::System::Void set_VideoPlayer(::MoleMole::IVideoPlayer* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_SET_VIDEOPLAYER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void InitComponent(::MoleMole::IVideoPlayer* CCDMEKCLPPJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_INITCOMPONENT_OFFSET))(this, CCDMEKCLPPJ);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_ONDESTROY_OFFSET))(this);
		}

		::System::Void Prepare()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_PREPARE_OFFSET))(this);
		}

		::System::Void AKAPPOBEHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VIDEOPLAYERMONO_AKAPPOBEHCG_OFFSET))(this);
		}
	};
}
