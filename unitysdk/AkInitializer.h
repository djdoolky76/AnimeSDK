#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class AkInitializer;
class AkWwiseInitializationSettings;

#define AKINITIALIZER_AWAKE_OFFSET UNITYSDK_OFFSET(0x2084B340)
#define AKINITIALIZER_CTOR_OFFSET UNITYSDK_OFFSET(0x2084BA20)
#define AKINITIALIZER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x2084B330)
#define AKINITIALIZER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x2084B930)
#define AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x2084B7F0)
#define AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x2084B6D0)
#define AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x2084B840)
#define AKINITIALIZER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2084B640)
#define AKINITIALIZER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2084B540)
#define AKINITIALIZER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2084B440)

inline static constexpr unsigned int AkInitializer_TypeDefinitionIndex = 46010;

	class AkInitializer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AkWwiseInitializationSettings* InitializationSettings; // 0x18
		static ::AkInitializer** StaticGet_ms_Instance()
		{
			return (::AkInitializer**)UnitySDK::FromName("", "AkInitializer")->GetStaticField(0x54110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_CTOR_OFFSET))(this);
		}

		static ::AkInitializer* get_Instance()
		{
			return ((::AkInitializer*(*)())((::PBYTE)hIl2Cpp + AKINITIALIZER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKINITIALIZER_LATEUPDATE_OFFSET))(this);
		}

	};
