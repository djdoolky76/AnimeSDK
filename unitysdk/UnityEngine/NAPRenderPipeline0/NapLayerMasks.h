#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NAPLAYERMASKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E648560)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapLayerMasks_TypeDefinitionIndex = 5856;

	class NapLayerMasks : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_LayerUI3DModel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2790);
		}
		static ::System::Int32* StaticGet_uiBlurLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2794);
		}
		static ::System::Int32* StaticGet_s_MaskDefault()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x2798);
		}
		static ::System::Int32* StaticGet_uiAndBlurLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x279C);
		}
		static ::System::Int32* StaticGet_s_TransparentFX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27A0);
		}
		static ::System::Int32* StaticGet_s_MaskUI3DModel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27A4);
		}
		static ::System::Int32* StaticGet_s_LayerCharacter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27A8);
		}
		static ::System::Int32* StaticGet_s_LayerDefault()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27AC);
		}
		static ::System::Int32* StaticGet_uiBlurLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27B0);
		}
		static ::System::Int32* StaticGet_uiLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27B4);
		}
		static ::System::Int32* StaticGet_s_MaskWorldUI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27B8);
		}
		static ::System::Int32* StaticGet_transparentFxLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27BC);
		}
		static ::System::Int32* StaticGet_uiLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapLayerMasks_TypeDefinitionIndex)->GetStaticField(0x27C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NAPLAYERMASKS__CCTOR_OFFSET))();
		}
	};
}
