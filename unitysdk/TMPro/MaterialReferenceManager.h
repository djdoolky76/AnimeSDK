#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class MaterialReferenceManager; }
namespace TMPro { class TMP_ColorGradient; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x20598870)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0x20598740)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20598150)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET UNITYSDK_OFFSET(0x205980C0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0x205986D0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x205985F0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_1_OFFSET UNITYSDK_OFFSET(0x205984C0)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20598300)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_1_OFFSET UNITYSDK_OFFSET(0x20598420)
#define TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x20598270)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x20598970)
#define TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x20598910)
#define TMPRO_MATERIALREFERENCEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x20597ED0)
#define TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x20597E50)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20598EA0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET UNITYSDK_OFFSET(0x20598D70)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20598B00)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET UNITYSDK_OFFSET(0x205989D0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET UNITYSDK_OFFSET(0x20599030)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET UNITYSDK_OFFSET(0x20598F40)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET UNITYSDK_OFFSET(0x20598CD0)
#define TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET UNITYSDK_OFFSET(0x20598BA0)

namespace TMPro
{
	inline static constexpr unsigned int MaterialReferenceManager_TypeDefinitionIndex = 45612;

	class MaterialReferenceManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_ColorGradient*>* m_ColorGradientReferenceLookup; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_SpriteAsset*>* m_SpriteAssetReferenceLookup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* m_FontMaterialReferenceLookup; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::TMPro::TMP_FontAsset*>* m_FontAssetReferenceLookup; // 0x28
		static ::TMPro::MaterialReferenceManager** StaticGet_s_Instance()
		{
			return (::TMPro::MaterialReferenceManager**)UnitySDK::FromName("TMPro", "MaterialReferenceManager")->GetStaticField(0x6A270);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CTOR_OFFSET))(this);
		}

		static ::TMPro::MaterialReferenceManager* get_instance()
		{
			return ((::TMPro::MaterialReferenceManager*(*)())((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void AddFontAsset(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSET_OFFSET))(a1);
		}

		::System::Void AddFontAssetInternal(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTASSETINTERNAL_OFFSET))(this, a1);
		}

		static ::System::Void AddSpriteAsset(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_OFFSET))(a1);
		}

		::System::Void AddSpriteAssetInternal(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_OFFSET))(this, a1);
		}

		static ::System::Void AddSpriteAsset_1(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSET_1_OFFSET))(a1, a2);
		}

		::System::Void AddSpriteAssetInternal_1(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDSPRITEASSETINTERNAL_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void AddFontMaterial(::System::Int32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIAL_OFFSET))(a1, a2);
		}

		::System::Void AddFontMaterialInternal(::System::Int32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDFONTMATERIALINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Void AddColorGradientPreset(::System::Int32 a1, ::TMPro::TMP_ColorGradient* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_OFFSET))(a1, a2);
		}

		::System::Void AddColorGradientPreset_Internal(::System::Int32 a1, ::TMPro::TMP_ColorGradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_ADDCOLORGRADIENTPRESET_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean Contains(::TMPro::TMP_FontAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean Contains_1(::TMPro::TMP_SpriteAsset* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_CONTAINS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean TryGetFontAsset(::System::Int32 a1, ::TMPro::TMP_FontAsset* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSET_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetFontAssetInternal(::System::Int32 a1, ::TMPro::TMP_FontAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETFONTASSETINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryGetSpriteAsset(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSET_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetSpriteAssetInternal(::System::Int32 a1, ::TMPro::TMP_SpriteAsset* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_SpriteAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETSPRITEASSETINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryGetColorGradientPreset(::System::Int32 a1, ::TMPro::TMP_ColorGradient* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESET_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetColorGradientPresetInternal(::System::Int32 a1, ::TMPro::TMP_ColorGradient* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::TMPro::TMP_ColorGradient*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETCOLORGRADIENTPRESETINTERNAL_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryGetMaterial(::System::Int32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIAL_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetMaterialInternal(::System::Int32 a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCEMANAGER_TRYGETMATERIALINTERNAL_OFFSET))(this, a1, a2);
		}

	};
}
