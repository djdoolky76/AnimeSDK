#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/UI/SharedUnityObjectResource_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C1FC580)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ENABLEADDITIONALCHANNELS_OFFSET UNITYSDK_OFFSET(0x1C1FC6C0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1C1FE240)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C1FDF10)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C1FC3D0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1C1FE200)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1C1FD060)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C1FCE30)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1FC960)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C1FCDE0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C1FBFE0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C1FBCB0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1C1FC310)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1C1FC370)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1C1FC0A0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1C1FBD70)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C1FCD70)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1C1FCEB0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_REFRESHOUTLINEPOSARRAY_OFFSET UNITYSDK_OFFSET(0x1C1FCF20)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C1FCBC0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_SETMATERIALPROPSUNMASK_OFFSET UNITYSDK_OFFSET(0x1C1FDE00)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_SETMATERIALPROPS_OFFSET UNITYSDK_OFFSET(0x1C1FDC90)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_START_OFFSET UNITYSDK_OFFSET(0x1C1FC650)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1FE650)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1FE570)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C1FE780)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C1FE810)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C1FE8A0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1FE930)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C1FE9C0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C1FE9D0)
#define UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_START_OFFSET UNITYSDK_OFFSET(0x1C1FEA60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int OutlineExForUrbanMapHUD_TypeDefinitionIndex = 52272;

	class OutlineExForUrbanMapHUD : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>* StaticGet__sharedUnityObjectResource()
		{
			return (::UnityEngine::UI::SharedUnityObjectResource_1<::UnityEngine::Material*>*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x494C0);
		}
		static ::System::Int32* StaticGet_OutlineWidth1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11180);
		}
		static ::System::Int32* StaticGet_OutlineColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11184);
		}
		static ::System::Int32* StaticGet_OutlineWidth2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11188);
		}
		static ::System::Int32* StaticGet_SampleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x1118C);
		}
		static ::System::Int32* StaticGet_OutlineColor2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11190);
		}
		static ::System::Int32* StaticGet_OutlineAlpha1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11194);
		}
		static ::System::Int32* StaticGet_OutlinePosArray()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x11198);
		}
		static ::System::Int32* StaticGet_OutlineAlpha2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlineExForUrbanMapHUD_TypeDefinitionIndex)->GetStaticField(0x1119C);
		}
		::UnityEngine::Color effectColor1; // 0x20
		::UnityEngine::Color effectColor2; // 0x30
		::System::Single effectAlpha1; // 0x40
		::System::Single effectAlpha2; // 0x44
		::System::Single effectDistance1; // 0x48
		::System::Single effectDistance2; // 0x4C
		::System::Int32 iterations; // 0x50
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector4>* _outlinePosArray; // 0x58
		::System::Int32 _lastIterations; // 0x60
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* _thisClonedMaterial; // 0x68
		::System::Boolean _pendingSetMaterialDirty; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ISACTIVE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_START_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ONUPDATE_OFFSET))(this);
		}

		::System::Void EnableAdditionalChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_ENABLEADDITIONALCHANNELS_OFFSET))(this);
		}

		::System::Void RefreshOutlinePosArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_REFRESHOUTLINEPOSARRAY_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_REFRESH_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void SetMaterialProps(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_SETMATERIALPROPS_OFFSET))(this, material);
		}

		::System::Void SetMaterialPropsUnmask(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_SETMATERIALPROPSUNMASK_OFFSET))(this, material);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_AWAKE_OFFSET))(this);
		}

		::System::Boolean __base_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ISACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_OUTLINEEXFORURBANMAPHUD___BASE_START_OFFSET))(this);
		}
	};
}
