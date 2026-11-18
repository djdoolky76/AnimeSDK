#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define SPINE_UNITY_RUNTIMESETTINGS_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F80B740)
#define SPINE_UNITY_RUNTIMESETTINGS_GET_USETHREADEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1F80B990)
#define SPINE_UNITY_RUNTIMESETTINGS_GET_USETHREADEDMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F80B720)
#define SPINE_UNITY_RUNTIMESETTINGS_SET_USETHREADEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1F80B9B0)
#define SPINE_UNITY_RUNTIMESETTINGS_SET_USETHREADEDMESHGENERATION_OFFSET UNITYSDK_OFFSET(0x1F80B970)
#define SPINE_UNITY_RUNTIMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80B9D0)

namespace Spine::Unity
{
	inline static constexpr unsigned int RuntimeSettings_TypeDefinitionIndex = 38219;

	class RuntimeSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::Spine::Unity::RuntimeSettings** StaticGet_singletonInstance()
		{
			return (::Spine::Unity::RuntimeSettings**)Il2CppClass::FromTypeDefinitionIndex(RuntimeSettings_TypeDefinitionIndex)->GetStaticField(0x2DD90);
		}
		// static const ::System::String* ResourcePath; // 0x0
		::System::Boolean useThreadedMeshGeneration; // 0x18
		::System::Boolean useThreadedAnimation; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_UseThreadedMeshGeneration()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS_GET_USETHREADEDMESHGENERATION_OFFSET))();
		}

		static ::System::Void set_UseThreadedMeshGeneration(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS_SET_USETHREADEDMESHGENERATION_OFFSET))(value);
		}

		static ::System::Boolean get_UseThreadedAnimation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS_GET_USETHREADEDANIMATION_OFFSET))();
		}

		static ::System::Void set_UseThreadedAnimation(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS_SET_USETHREADEDANIMATION_OFFSET))(value);
		}

		static ::Spine::Unity::RuntimeSettings* get_Instance()
		{
			return ((::Spine::Unity::RuntimeSettings*(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_RUNTIMESETTINGS_GET_INSTANCE_OFFSET))();
		}
	};
}
