#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections { class IEnumerable; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1C2E6380)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C2E5E00)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GET_GRAPHIC_OFFSET UNITYSDK_OFFSET(0x1C2E56A0)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1C2E6840)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C2E5A40)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C2E5D40)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2E5990)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2E58E0)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1C2E5870)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2E6930)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E6880)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C2E6D40)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C2E6DD0)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C2E6E60)
#define UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C2E6EF0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIPhaseShift_TypeDefinitionIndex = 55696;

	class UIPhaseShift : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_MaskChannels()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x4FE90);
		}
		static ::System::Collections::IEnumerable** StaticGet_SeparationModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x4FE98);
		}
		static ::System::Collections::IEnumerable** StaticGet_ColorModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x4FEA0);
		}
		static ::System::Collections::IEnumerable** StaticGet_BlendModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x4FEA8);
		}
		static ::System::Int32* StaticGet_MapWhiteTo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13000);
		}
		static ::System::Int32* StaticGet_MapBlackTo()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13004);
		}
		static ::System::Int32* StaticGet_ChromaticMaskChannel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13008);
		}
		static ::System::Int32* StaticGet_ChromaticSeparationMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x1300C);
		}
		static ::System::Int32* StaticGet_SeparationDirR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13010);
		}
		static ::System::Int32* StaticGet_ChromaticShiftB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13014);
		}
		static ::System::Int32* StaticGet_Tint()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13018);
		}
		static ::System::Int32* StaticGet_ChromaticCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x1301C);
		}
		static ::System::Int32* StaticGet_ChromaticShiftR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13020);
		}
		static ::System::Int32* StaticGet_ChromaticDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13024);
		}
		static ::System::Int32* StaticGet_DstFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13028);
		}
		static ::System::Int32* StaticGet_CmySplit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x1302C);
		}
		static ::System::Int32* StaticGet_ChromaticPower()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13030);
		}
		static ::System::Int32* StaticGet_ChromaticMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13034);
		}
		static ::System::Int32* StaticGet_SeparationDirG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13038);
		}
		static ::System::Int32* StaticGet_SeparationDirB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x1303C);
		}
		static ::System::Int32* StaticGet_ChromaticShiftG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIPhaseShift_TypeDefinitionIndex)->GetStaticField(0x13040);
		}
		// static const ::System::String* UIPhaseShiftMatPath; // 0x0
		::UnityEngine::Color mapBlackTo; // 0x18
		::UnityEngine::Color mapWhiteTo; // 0x28
		::System::Single tint; // 0x38
		::System::Int32 separationMode; // 0x3C
		::System::Int32 colorMode; // 0x40
		::System::Single separationDistance; // 0x44
		::UnityEngine::Vector2 separationDirR; // 0x48
		::UnityEngine::Vector2 separationDirG; // 0x50
		::UnityEngine::Vector2 separationDirB; // 0x58
		::UnityEngine::Vector2 chromaticCenter; // 0x60
		::System::Single chromaticPower; // 0x68
		::System::Single chromaticShiftR; // 0x6C
		::System::Single chromaticShiftG; // 0x70
		::System::Single chromaticShiftB; // 0x74
		::UnityEngine::Texture2D* maskTex; // 0x78
		::System::Int32 maskChannel; // 0x80
		::System::Int32 blendMode; // 0x84
		::UnityEngine::UI::Graphic* _graphic; // 0x88
		::UnityEngine::Material* _modifiedMaterial; // 0x90
		::System::Boolean _isLoadedMaterial; // 0x98
		::System::Boolean _loadFailed; // 0x99
		::System::Byte _padding0[0x6];
		::Foundation::AssetRequestHandle _uiPhaseShiftMatHandle; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT__CCTOR_OFFSET))();
		}

		::UnityEngine::UI::Graphic* get_graphic()
		{
			return ((::UnityEngine::UI::Graphic*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GET_GRAPHIC_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_SETDIRTY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIPHASESHIFT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
