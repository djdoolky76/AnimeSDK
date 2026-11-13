#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCALLBACKMANAGER_INITIALIZATIONSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF02820)
#define AKCALLBACKMANAGER_INITIALIZATIONSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFE0A0)

inline static constexpr unsigned int AkCallbackManager_InitializationSettings_TypeDefinitionIndex = 45905;

	class AkCallbackManager_InitializationSettings : public ::System::Object
	{
	public:
		::System::Int32 BufferSize; // 0x10
		::System::Boolean IsLoggingEnabled; // 0x14
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)UnitySDK::FromName("", "InitializationSettings")->GetStaticField(0x5F10);
		}

		static ::System::Boolean* StaticGet_DefaultIsLoggingEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "InitializationSettings")->GetStaticField(0x5F14);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INITIALIZATIONSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCALLBACKMANAGER_INITIALIZATIONSETTINGS_CCTOR_OFFSET))();
		}

	};
