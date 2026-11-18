#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALDEBUGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFC050)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SRPGlobalDebugInfo_TypeDefinitionIndex = 6045;

	class SRPGlobalDebugInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_visiableReflectionProbeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29D0);
		}
		static ::System::Int32* StaticGet_visiablePointLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29D4);
		}
		static ::System::Int32* StaticGet_visiableNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29D8);
		}
		static ::System::Int32* StaticGet_visiableCharacterNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29DC);
		}
		static ::System::Int32* StaticGet_visiableDiffuseOnlySceneLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29E0);
		}
		static ::System::Int32* StaticGet_visiableSpotLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29E4);
		}
		static ::System::Int32* StaticGet_visiableSpotShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29E8);
		}
		static ::System::Int32* StaticGet_visiableLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29EC);
		}
		static ::System::Int32* StaticGet_visiableSceneNapLightDataCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29F0);
		}
		static ::System::Int32* StaticGet_visiableSpecularSceneLightCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29F4);
		}
		static ::System::Int32* StaticGet_visiableFakePointLightFogCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29F8);
		}
		static ::System::Int32* StaticGet_visiablePointShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x29FC);
		}
		static ::System::Int32* StaticGet_visaibleFakeSpotLightFogCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SRPGlobalDebugInfo_TypeDefinitionIndex)->GetStaticField(0x2A00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SRPGLOBALDEBUGINFO__CTOR_OFFSET))(this);
		}
	};
}
