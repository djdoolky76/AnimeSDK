#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_SETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1CF90)
#define RPG_CUSTOMRP_SETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1CF80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int Settings_TypeDefinitionIndex = 38852;

	class Settings : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DEFAULT_SERVER_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x87E0);
		}

		static ::System::Int32* StaticGet_DEFAULT_BROADCAST_PORT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x87E4);
		}

		static ::System::Int32* StaticGet_BROADCAST_TIME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "Settings")->GetStaticField(0x87E8);
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
