#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RENDERING_SHADERTAGID_CTOR_OFFSET UNITYSDK_OFFSET(0x3F59830)
#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EE9440)
#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F59860)
#define UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3F598C0)
#define UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define UNITYENGINE_RENDERING_SHADERTAGID_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3F59850)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F52A980)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F52A990)
#define UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET UNITYSDK_OFFSET(0xADCE20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderTagId_TypeDefinitionIndex = 4773;

	struct alignas(4) ShaderTagId
	{
		::System::Int32 m_Id; // 0x10
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_none()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)UnitySDK::FromName("UnityEngine.Rendering", "ShaderTagId")->GetStaticField(0x13BB0);
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::Rendering::ShaderTagId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::Rendering::ShaderTagId a1, ::UnityEngine::Rendering::ShaderTagId a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::ShaderTagId a1, ::UnityEngine::Rendering::ShaderTagId a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

	};
}
