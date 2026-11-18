#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATECENTERUV_OFFSET UNITYSDK_OFFSET(0x1C685D70)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATEMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1C685270)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C685FF0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GET_RECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C684CB0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1C6861C0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1C684DB0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1C685B30)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C685C50)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C685610)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C685A60)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C685570)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6854D0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C685820)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C685940)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1C685450)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C686200)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C684D10)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASGROUPCHANGED_OFFSET UNITYSDK_OFFSET(0x1C686260)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6862F0)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C686380)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1C686410)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C686420)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C686430)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1C686440)
#define UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C6864D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICircleTransition_TypeDefinitionIndex = 89703;

	class UICircleTransition : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Int32* StaticGet_CircleTransitionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xC1F0);
		}
		static ::System::Int32* StaticGet_CircleSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xC1F4);
		}
		static ::System::Int32* StaticGet_Invert()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UICircleTransition_TypeDefinitionIndex)->GetStaticField(0xC1F8);
		}
		// static const ::System::String* UICircleTransitionPath; // 0x0
		::UnityEngine::RectTransform* centerTransform; // 0x20
		::System::Single circleSize; // 0x28
		::System::Boolean invert; // 0x2C
		::System::Byte _padding0[0x3];
		::UnityEngine::Material* _modifiedMaterial; // 0x30
		::Foundation::AssetRequestHandle _uiCircleTransitionHandle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION__CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* get_rectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GET_RECTTRANSFORM_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFYMESH_OFFSET))(this, vh);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_SETDIRTY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 CalculateCenterUV(::UnityEngine::RectTransform* sourceTransform, ::UnityEngine::RectTransform* targetTransform, ::System::Single aspect)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATECENTERUV_OFFSET))(sourceTransform, targetTransform, aspect);
		}

		::System::Void CalculateMaterialParams(::UnityEngine::Vector2& centerUV, ::System::Single& centerToFarDistance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_CALCULATEMATERIALPARAMS_OFFSET))(this, centerUV, centerToFarDistance);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void __base_OnCanvasGroupChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASGROUPCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICIRCLETRANSITION___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}
	};
}
