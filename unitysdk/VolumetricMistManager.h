#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define VOLUMETRICMISTMANAGER_BLITVOLUMETRICMIST_OFFSET UNITYSDK_OFFSET(0x1D701CD0)
#define VOLUMETRICMISTMANAGER_DRAWVOLUMETRICMIST_OFFSET UNITYSDK_OFFSET(0x1D7247D0)
#define VOLUMETRICMISTMANAGER_HASVOLUMETRICMISTRENDER_OFFSET UNITYSDK_OFFSET(0x1D701C30)
#define VOLUMETRICMISTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D725010)

inline static constexpr unsigned int VolumetricMistManager_TypeDefinitionIndex = 26507;

class VolumetricMistManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_VolumetricMistRenderInfos()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x22F60);
	}
	static ::System::Int32* StaticGet__VolumetricMistScreenSize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x5310);
	}
	static ::System::Int32* StaticGet__Cull()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x5314);
	}
	static ::System::Int32* StaticGet__VolumetricMistTex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x5318);
	}
	static ::System::Boolean* StaticGet_s_MistBlitAfterParticleDecal()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x531C);
	}
	static ::System::Int32* StaticGet__UseNearQuadDepth()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMistManager_TypeDefinitionIndex)->GetStaticField(0x5320);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICMISTMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Boolean HasVolumetricMistRender()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + VOLUMETRICMISTMANAGER_HASVOLUMETRICMISTRENDER_OFFSET))();
	}

	static ::System::Void DrawVolumetricMist(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICMISTMANAGER_DRAWVOLUMETRICMIST_OFFSET))(context, cmd, renderingData);
	}

	static ::System::Void BlitVolumetricMist(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICMISTMANAGER_BLITVOLUMETRICMIST_OFFSET))(context, cmd, renderingData);
	}
};
