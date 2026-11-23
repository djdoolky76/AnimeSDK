#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/VFX/VisualEffectObject.h"

#define UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x43E5110)
#define UNITYENGINE_VFX_VISUALEFFECTASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x43E5190)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VisualEffectAsset_TypeDefinitionIndex = 21399;

	class VisualEffectAsset : public ::UnityEngine::VFX::VisualEffectObject
	{
	public:
		static ::System::Int32* StaticGet_EDEBA5A4C602EFB4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_E5C1F7FA00A3CBCD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisualEffectAsset_TypeDefinitionIndex)->GetStaticField(0x4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VISUALEFFECTASSET__CCTOR_OFFSET))();
		}
	};
}
