#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTXRenderer_RTXCommonShaderIDs.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF78D70)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF78D20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex = 5800;

	class RTXPathTracer_RTXShaderIDs : public ::UnityEngine::NAPRenderPipeline0::RTXRenderer_RTXCommonShaderIDs
	{
	public:
		static ::System::Int32* StaticGet__Result()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C10);
		}
		static ::System::Int32* StaticGet__RWIrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C14);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C18);
		}
		static ::System::Int32* StaticGet__BlendRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C1C);
		}
		static ::System::Int32* StaticGet__IrradianceVolume()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C20);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeWriteColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C24);
		}
		static ::System::Int32* StaticGet__FrameIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C28);
		}
		static ::System::Int32* StaticGet__IrradianceVolumeWriteIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTXPathTracer_RTXShaderIDs_TypeDefinitionIndex)->GetStaticField(0x2C2C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXPATHTRACER_RTXSHADERIDS__CCTOR_OFFSET))();
		}
	};
}
