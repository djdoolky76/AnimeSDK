#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL_GETMATERIALDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1CF7E880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL_GETMATERIALDBUFFERDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1CF7E8C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF7E960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7E950)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int Decal_TypeDefinitionIndex = 26417;

	class Decal : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>** StaticGet_m_RTFormat()
		{
			return (::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>**)Il2CppClass::FromTypeDefinitionIndex(Decal_TypeDefinitionIndex)->GetStaticField(0x241B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetMaterialDBufferCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL_GETMATERIALDBUFFERCOUNT_OFFSET))();
		}

		static ::System::Void GetMaterialDBufferDescription(::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>*& RTFormat)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Experimental::Rendering::GraphicsFormat>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DECAL_GETMATERIALDBUFFERDESCRIPTION_OFFSET))(RTFormat);
		}
	};
}
