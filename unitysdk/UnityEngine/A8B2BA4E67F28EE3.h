#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B6123FC9D609C086.h"

namespace System { class String; }
namespace UnityEngine { class B6829B6AB01D1C49; }

#define UNITYENGINE_A8B2BA4E67F28EE3_F82E437E0D4415EF_OFFSET UNITYSDK_OFFSET(0x40F4E90)
#define UNITYENGINE_A8B2BA4E67F28EE3_INVOKE_OFFSET UNITYSDK_OFFSET(0x40F4CF0)
#define UNITYENGINE_A8B2BA4E67F28EE3__CTOR_OFFSET UNITYSDK_OFFSET(0x40F4DB0)

namespace UnityEngine
{
	inline static constexpr unsigned int A8B2BA4E67F28EE3_TypeDefinitionIndex = 20609;

	class A8B2BA4E67F28EE3 : public ::UnityEngine::B6123FC9D609C086
	{
	public:
		::UnityEngine::B6829B6AB01D1C49* A8CB568C495BDFDD; // 0x20

		::System::IntPtr Invoke(::System::String* FC1D29B360A1527E, ::System::IntPtr E185C7C2C4CDE915)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_A8B2BA4E67F28EE3_INVOKE_OFFSET))(this, FC1D29B360A1527E, E185C7C2C4CDE915);
		}

		::System::Void F82E437E0D4415EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A8B2BA4E67F28EE3_F82E437E0D4415EF_OFFSET))(this);
		}

		::System::Void _ctor(::UnityEngine::B6829B6AB01D1C49* ABF8AA284EAFEF10)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::B6829B6AB01D1C49*))((::PBYTE)hIl2Cpp + UNITYENGINE_A8B2BA4E67F28EE3__CTOR_OFFSET))(this, ABF8AA284EAFEF10);
		}
	};
}
