#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class HNOMJDLHAOD;
class MLJGMELKNCC_ONKAPFOMFDK;
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GETNEXTSHOW_OFFSET UNITYSDK_OFFSET(0x162C9C10)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_ANIMATIONID_OFFSET UNITYSDK_OFFSET(0x162CA2F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERA1POS_OFFSET UNITYSDK_OFFSET(0x162CA4A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERA2POS_OFFSET UNITYSDK_OFFSET(0x162CA520)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERARELAAVATAR_OFFSET UNITYSDK_OFFSET(0x162CA740)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERARELANPCID_OFFSET UNITYSDK_OFFSET(0x162CA730)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_FOVANDBLEND_OFFSET UNITYSDK_OFFSET(0x162CA560)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_FOV_OFFSET UNITYSDK_OFFSET(0x162CA5E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_NOISEDURATION_OFFSET UNITYSDK_OFFSET(0x162CA690)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_NOISE_OFFSET UNITYSDK_OFFSET(0x162CA5F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_OVERRIDECAMERANEARCLIP_OFFSET UNITYSDK_OFFSET(0x162CA6E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x162C9C00)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x162C9DC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x162CA750)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowMessageConfig_TypeDefinitionIndex = 77503;

	class MainCityChatShowMessageConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 MessageGroupId; // 0x10
		::System::Boolean DisableCameraAndAnimation; // 0x14
		::System::Byte _padding0[0x3];
		::System::String* Camera2; // 0x18
		::System::Boolean RelLocalAvatar; // 0x20
		::System::Byte _padding1[0x7];
		::System::String* CameraStoryKey; // 0x28
		::System::Int32 PlayAnimationId; // 0x30
		::System::Int32 PlayAnimationId_F; // 0x34
		::System::Single FadeOutTime; // 0x38
		::System::Single overrideCameraNearClip; // 0x3C
		::System::Boolean OpenNoise; // 0x40
		::System::Byte _padding2[0x7];
		::System::String* NoisePath; // 0x48
		::System::Single noiseAmplitudeGain; // 0x50
		::System::Single noiseFrequencyGain; // 0x54
		::System::Single noiseDuration; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_UICtrl()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_UICTRL_OFFSET))(this);
		}

		::MLJGMELKNCC_ONKAPFOMFDK* GetNextShow()
		{
			return ((::MLJGMELKNCC_ONKAPFOMFDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GETNEXTSHOW_OFFSET))(this);
		}

		::System::Void OnOpen(::HNOMJDLHAOD* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_AnimationId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_ANIMATIONID_OFFSET))(this);
		}

		::System::String* get_Camera1Pos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERA1POS_OFFSET))(this);
		}

		::System::String* get_Camera2Pos()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERA2POS_OFFSET))(this);
		}

		::System::String* get_FovAndBlend()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_FOVANDBLEND_OFFSET))(this);
		}

		::System::Single get_Fov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_FOV_OFFSET))(this);
		}

		::MoleMole::Config::ConfigCameraNoise* get_Noise()
		{
			return ((::MoleMole::Config::ConfigCameraNoise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_NOISE_OFFSET))(this);
		}

		::System::Single get_NoiseDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_NOISEDURATION_OFFSET))(this);
		}

		::System::Single get_OverrideCameraNearClip()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_OVERRIDECAMERANEARCLIP_OFFSET))(this);
		}

		::System::Int32 get_CameraRelaNpcId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERARELANPCID_OFFSET))(this);
		}

		::System::Boolean get_CameraRelaAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWMESSAGECONFIG_GET_CAMERARELAAVATAR_OFFSET))(this);
		}
	};
}
