#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D5CB000)
#define UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D5CB0E0)
#define UNITYENGINE_YOGA_YOGACONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5CB0F0)
#define UNITYENGINE_YOGA_YOGACONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D5CAF80)
#define UNITYENGINE_YOGA_YOGACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CAF10)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaConfig_TypeDefinitionIndex = 27452;

	class YogaConfig : public ::System::Object
	{
	public:
		static ::UnityEngine::Yoga::YogaConfig** StaticGet_Default()
		{
			return (::UnityEngine::Yoga::YogaConfig**)Il2CppClass::FromTypeDefinitionIndex(YogaConfig_TypeDefinitionIndex)->GetStaticField(0x24E30);
		}
		::System::IntPtr _ygConfig; // 0x10

		::System::Void _ctor(::System::IntPtr ygConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CTOR_OFFSET))(this, ygConfig);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET))(this);
		}
	};
}
