#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_REMOTECONFIGSETTINGS_DESTROY_OFFSET UNITYSDK_OFFSET(0x20048440)
#define UNITYENGINE_REMOTECONFIGSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20048480)
#define UNITYENGINE_REMOTECONFIGSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x200483C0)
#define UNITYENGINE_REMOTECONFIGSETTINGS_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x20048470)
#define UNITYENGINE_REMOTECONFIGSETTINGS_REMOTECONFIGSETTINGSUPDATED_OFFSET UNITYSDK_OFFSET(0x20048530)
#define UNITYENGINE_REMOTECONFIGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x200483B0)

namespace UnityEngine
{
	inline static constexpr unsigned int RemoteConfigSettings_TypeDefinitionIndex = 95420;

	class RemoteConfigSettings : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Action_1<::System::Boolean>* Updated; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_FINALIZE_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_INTERNAL_DESTROY_OFFSET))(ptr);
		}

		static ::System::Void RemoteConfigSettingsUpdated(::UnityEngine::RemoteConfigSettings* rcs, ::System::Boolean wasLastUpdatedFromServer)
		{
			return ((::System::Void(*)(::UnityEngine::RemoteConfigSettings*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_REMOTECONFIGSETTINGS_REMOTECONFIGSETTINGSUPDATED_OFFSET))(rcs, wasLastUpdatedFromServer);
		}
	};
}
