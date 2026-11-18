#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8B95F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B9590)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B9600)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B9650)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B9660)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B96C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B9720)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapNREHarness_PosKey_TypeDefinitionIndex = 26859;

	struct alignas(4) NapNREHarness_PosKey
	{
		::System::Int32 type; // 0x10
		::System::Int32 id; // 0x14

		::System::Void _ctor(::System::Int32 type, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY__CTOR_OFFSET))(this, type, id);
		}

		/*
		::System::Boolean Equals(::UnityEngine::Rendering::Universal::NapNREHarness_PosKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::Universal::NapNREHarness_PosKey))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPNREHARNESS_POSKEY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
