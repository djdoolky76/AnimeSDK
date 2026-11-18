#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_CACHESPLITPARAMS_OFFSET UNITYSDK_OFFSET(0x1BA12BC0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_COMPUTEUVTOSCREENTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1BA12070)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ENSURECANVASCHANNELS_OFFSET UNITYSDK_OFFSET(0x1BA11DB0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x1BA12780)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BA122A0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x1BA12740)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1BA10FA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BA12DE0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BA13070)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BA12C40)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA129D0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_SNAPTOAXIS_OFFSET UNITYSDK_OFFSET(0x1BA12200)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA13480)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA133C0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BA13610)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BA136A0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BA136B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA136C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextColorSplit_TypeDefinitionIndex = 39734;

	class UITextColorSplit : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		static ::System::Collections::IEnumerable** StaticGet_BlendModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UITextColorSplit_TypeDefinitionIndex)->GetStaticField(0x4F140);
		}
		static ::System::Collections::IEnumerable** StaticGet_ColorModes()
		{
			return (::System::Collections::IEnumerable**)Il2CppClass::FromTypeDefinitionIndex(UITextColorSplit_TypeDefinitionIndex)->GetStaticField(0x4F148);
		}
		static ::System::Int32* StaticGet_RgbSplitRGProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextColorSplit_TypeDefinitionIndex)->GetStaticField(0x12BB0);
		}
		static ::System::Int32* StaticGet_DstFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextColorSplit_TypeDefinitionIndex)->GetStaticField(0x12BB4);
		}
		static ::System::Int32* StaticGet_RgbSplitBScaleBrightnessProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UITextColorSplit_TypeDefinitionIndex)->GetStaticField(0x12BB8);
		}
		// static const ::System::String* CmySplitKeyword; // 0x0
		// static const ::System::String* TextRgbSplitMatPath; // 0x0
		::System::Int32 m_ColorMode; // 0x20
		::System::Single m_SplitScale; // 0x24
		::UnityEngine::Vector2 m_SplitROrC; // 0x28
		::UnityEngine::Vector2 m_SplitGOrM; // 0x30
		::UnityEngine::Vector2 m_SplitBOrY; // 0x38
		::System::Single m_Brightness; // 0x40
		::System::Int32 m_BlendMode; // 0x44
		::UnityEngine::Material* m_ModifiedMaterial; // 0x48
		::System::Boolean _isLoadedMaterial; // 0x50
		::System::Boolean _loadFailed; // 0x51
		::System::Byte _padding0[0x6];
		::Foundation::AssetRequestHandle _matHandle; // 0x58
		::System::Single _lastSplitScale; // 0x78
		::UnityEngine::Vector2 _lastSplitROrC; // 0x7C
		::UnityEngine::Vector2 _lastSplitGOrM; // 0x84
		::UnityEngine::Vector2 _lastSplitBOrY; // 0x8C
		::System::Single _lastBrightness; // 0x94
		::System::Int32 _lastBlendMode; // 0x98
		::System::Int32 _lastColorMode; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT__CCTOR_OFFSET))();
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* vh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_MODIFYMESH_OFFSET))(this, vh);
		}

		static ::System::Boolean ComputeUvToScreenTransform(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts, ::System::Int32 glyphStart, ::UnityEngine::Vector2& dirU, ::UnityEngine::Vector2& dirV)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_COMPUTEUVTOSCREENTRANSFORM_OFFSET))(verts, glyphStart, dirU, dirV);
		}

		static ::UnityEngine::Vector2 SnapToAxis(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_SNAPTOAXIS_OFFSET))(v);
		}

		::System::Void EnsureCanvasChannels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ENSURECANVASCHANNELS_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_GETMODIFIEDMATERIALPOST_OFFSET))(this, baseMaterial);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void CacheSplitParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT_CACHESPLITPARAMS_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTCOLORSPLIT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
