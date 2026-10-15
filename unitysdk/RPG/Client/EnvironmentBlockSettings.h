#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnvironmentProbeSettings.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_AMCMAGPGPPA_OFFSET UNITYSDK_OFFSET(0xCDF1E80)
#define RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0xCDF1EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnvironmentBlockSettings_TypeDefinitionIndex = 69776;

	class EnvironmentBlockSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EnvironmentProbeSettings>* ProbeSettingsList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::String* AMCMAGPGPPA(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENVIRONMENTBLOCKSETTINGS_AMCMAGPGPPA_OFFSET))(a1);
		}

	};
}
