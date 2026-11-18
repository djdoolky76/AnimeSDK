#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_BATCHMESHID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x44D8D0)
#define UNITYENGINE_RENDERING_BATCHMESHID_EQUALS_OFFSET UNITYSDK_OFFSET(0x93F850)
#define UNITYENGINE_RENDERING_BATCHMESHID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNITYENGINE_RENDERING_BATCHMESHID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF7BB90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchMeshID_TypeDefinitionIndex = 6226;

	struct alignas(4) BatchMeshID
	{
		static ::UnityEngine::Rendering::BatchMeshID* StaticGet_Null()
		{
			return (::UnityEngine::Rendering::BatchMeshID*)Il2CppClass::FromTypeDefinitionIndex(BatchMeshID_TypeDefinitionIndex)->GetStaticField(0x2C40);
		}
		::System::UInt32 value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMESHID__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMESHID_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMESHID_EQUALS_OFFSET))(this, obj);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::Rendering::BatchMeshID other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchMeshID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHMESHID_EQUALS_1_OFFSET))(this, other);
		}
		*/
	};
}
