#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x98AA80)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x98AB20)
#define DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair_TypeDefinitionIndex = 96203;

	struct alignas(8) TextureBlenderMaterialPropertyCacheHelper_MaterialPropertyPair
	{
		::UnityEngine::Material* material; // 0x10
		::System::String* property; // 0x18

		::System::Void _ctor(::UnityEngine::Material* m, ::System::String* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR__CTOR_OFFSET))(this, m, prop);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_TEXTUREBLENDERMATERIALPROPERTYCACHEHELPER_MATERIALPROPERTYPAIR_GETHASHCODE_OFFSET))(this);
		}
	};
}
