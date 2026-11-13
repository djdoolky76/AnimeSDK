#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2074B9D0)
#define RPG_CUSTOMRP_SETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x2074B9C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 38852;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x8330);
		}

		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x8334);
		}

		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x8338);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SETTINGS_CCTOR_OFFSET))();
		}

	};
}
