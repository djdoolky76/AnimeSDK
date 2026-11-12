#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class VideoTextureBehavior; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_VIDEOTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0xEF09F80)
#define RPG_CLIENT_VIDEOTEXTURE_CTOR_OFFSET UNITYSDK_OFFSET(0xEF0AFB0)
#define RPG_CLIENT_VIDEOTEXTURE_GET_PREVIEWINEDITOR_OFFSET UNITYSDK_OFFSET(0xEF09F20)
#define RPG_CLIENT_VIDEOTEXTURE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xEF0A8A0)
#define RPG_CLIENT_VIDEOTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEF0A620)
#define RPG_CLIENT_VIDEOTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEF0A400)
#define RPG_CLIENT_VIDEOTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xEF0A210)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xEF0A560)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xEF0A5D0)
#define RPG_CLIENT_VIDEOTEXTURE_PLAY_OFFSET UNITYSDK_OFFSET(0xEF0AAC0)
#define RPG_CLIENT_VIDEOTEXTURE_SETRENDERERENABLE_OFFSET UNITYSDK_OFFSET(0xEF0AEB0)
#define RPG_CLIENT_VIDEOTEXTURE_SETVIDEOINFO_OFFSET UNITYSDK_OFFSET(0xEF0A960)
#define RPG_CLIENT_VIDEOTEXTURE_SET_PREVIEWINEDITOR_OFFSET UNITYSDK_OFFSET(0xEF09F30)
#define RPG_CLIENT_VIDEOTEXTURE_STOP_OFFSET UNITYSDK_OFFSET(0xEF0ACA0)
#define RPG_CLIENT_VIDEOTEXTURE_UPDATE_OFFSET UNITYSDK_OFFSET(0xEF0A7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTexture_TypeDefinitionIndex = 75336;

	class VideoTexture : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* KeyPerProp; // 0x18
		::System::String* VideoPath; // 0x20
		::System::String* SoundEvent; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Boolean PlayOnEnable; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single MaterialForwardOffsetFactor; // 0x34
		::System::Single MaterialForwardOffsetUnit; // 0x38
		::System::Boolean BBBJHIEDGJB; // 0x3C
		::System::Byte _padding1[0x3];
		::RPG::Client::VideoTextureBehavior* KADDKEGNCHE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_PreviewInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_GET_PREVIEWINEDITOR_OFFSET))(this);
		}

		::System::Void set_PreviewInEditor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_SET_PREVIEWINEDITOR_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetVideoInfo(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_SETVIDEOINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_PLAY_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_STOP_OFFSET))(this);
		}

		::System::Void SetRendererEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_SETRENDERERENABLE_OFFSET))(this, a1);
		}

	};
}
