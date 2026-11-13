#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HDG_SETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1CF0)
#define HDG_SETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A1CE0)

namespace Hdg
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 47974;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A10);
		}

		static ::System::Single* StaticGet_COMPONENT_UPDATE_TIME()
		{
			return (::System::Single*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A14);
		}

		static ::System::Int32* StaticGet_SERVER_PORT_MASK()
		{
			return (::System::Int32*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A18);
		}

		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A1C);
		}

		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A20);
		}

		static ::System::Single* StaticGet_GAMEOBJECT_UPDATE_TIME()
		{
			return (::System::Single*)UnitySDK::FromName("Hdg", "Settings")->GetStaticField(0x4A24);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_SETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDG_SETTINGS_CCTOR_OFFSET))();
		}

	};
}
