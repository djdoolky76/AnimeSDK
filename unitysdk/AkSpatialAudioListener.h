#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AkAudioListener;
class AkSpatialAudioListener;
class AkSpatialAudioListener_SpatialAudioListenerList;

#define AKSPATIALAUDIOLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EBB35D0)
#define AKSPATIALAUDIOLISTENER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3950)
#define AKSPATIALAUDIOLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3940)
#define AKSPATIALAUDIOLISTENER_GET_SPATIALAUDIOLISTENERS_OFFSET UNITYSDK_OFFSET(0x1EBB35A0)
#define AKSPATIALAUDIOLISTENER_GET_THESPATIALAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x1EBB3330)
#define AKSPATIALAUDIOLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EBB3800)
#define AKSPATIALAUDIOLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EBB3670)

inline static constexpr unsigned int AkSpatialAudioListener_TypeDefinitionIndex = 46028;

	class AkSpatialAudioListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AkAudioListener* AkAudioListener; // 0x18
		static ::AkSpatialAudioListener_SpatialAudioListenerList** StaticGet_spatialAudioListeners()
		{
			return (::AkSpatialAudioListener_SpatialAudioListenerList**)UnitySDK::FromName("", "AkSpatialAudioListener")->GetStaticField(0x9100);
		}

		static ::AkSpatialAudioListener** StaticGet_s_SpatialAudioListener()
		{
			return (::AkSpatialAudioListener**)UnitySDK::FromName("", "AkSpatialAudioListener")->GetStaticField(0x9108);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_CCTOR_OFFSET))();
		}

		static ::AkAudioListener* get_TheSpatialAudioListener()
		{
			return ((::AkAudioListener*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_GET_THESPATIALAUDIOLISTENER_OFFSET))();
		}

		static ::AkSpatialAudioListener_SpatialAudioListenerList* get_SpatialAudioListeners()
		{
			return ((::AkSpatialAudioListener_SpatialAudioListenerList*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_GET_SPATIALAUDIOLISTENERS_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_ONDISABLE_OFFSET))(this);
		}

	};
