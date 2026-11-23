#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5AA718DA662D833.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::CustomRenderPipeline { class Texture2DDecal; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A172BCE7FE1C58A4_OFFSET UNITYSDK_OFFSET(0x276DD90)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x276DDB0)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A7263404BF059074_OFFSET UNITYSDK_OFFSET(0x1BC3260)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_ABB288F753AA4E83_OFFSET UNITYSDK_OFFSET(0x1891280)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_B3EA1915A48CC799_OFFSET UNITYSDK_OFFSET(0x1891740)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_B45E8C9182823EB0_OFFSET UNITYSDK_OFFSET(0x276E250)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x276DE30)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_F7716170A1534FDF_OFFSET UNITYSDK_OFFSET(0x180ED20)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_F9B945D88A0093C3_OFFSET UNITYSDK_OFFSET(0x19392E0)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_FA724F4C3BC5ECB4_OFFSET UNITYSDK_OFFSET(0x276DB30)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x276E260)
#define ABC_CUSTOMRENDERPIPELINE_DECALVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x276E330)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int DecalVolume_TypeDefinitionIndex = 16490;

	class DecalVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_A119005BE831B6B9()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DecalVolume_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ABC::CustomRenderPipeline::Texture2DDecal* AlbedoTex; // 0x20
		::ABC::CustomRenderPipeline::Texture2DDecal* NormalTex; // 0x28
		::ABC::CustomRenderPipeline::Texture2DDecal* EmissionTex; // 0x30
		::UnityEngine::B3A7F113FE1DE383 B34F1F4F3657848C; // 0x38
		::UnityEngine::B3A7F113FE1DE383 A99F0D02A780D911; // 0x50
		::UnityEngine::E46B881AA2636190 TintColor; // 0x68
		::System::Single AlbedoScale; // 0x78
		::System::Single NormalScale; // 0x7C
		::System::Single RoughnessScale; // 0x80
		::System::Single MetallicScale; // 0x84
		::System::Single EmissionScale; // 0x88
		::System::Single AlphaScale; // 0x8C
		::System::Single NormalAlphaScale; // 0x90
		::System::Single MetallicRoughnessAlphaScale; // 0x94
		::System::Single AlphaTestThreshold; // 0x98
		::System::Single SurfaceNormalClipBias; // 0x9C
		::System::Boolean UseEmission; // 0xA0
		::System::Byte _padding0[0x3];
		::UnityEngine::E8984F4E44AE20E5 UVOffsetScale; // 0xA4
		::System::Int32 RenderSort; // 0xB4
		::System::Boolean MobilePreview; // 0xB8
		::System::Boolean MobileVisible; // 0xB9
		::System::Boolean A86CA40648F09323; // 0xBA
		::System::Byte _padding1[0x1];
		::System::Int32 F883DF5679E58AAA; // 0xBC
		::System::String* m_albedoPath; // 0xC0
		::System::String* m_normalPath; // 0xC8
		::System::String* m_emissionPath; // 0xD0
		::F5AA718DA662D833 AlbedoAK; // 0xD8
		::System::Boolean NeedAlbedo; // 0xE4
		::System::Byte _padding2[0x3];
		::F5AA718DA662D833 NormalAK; // 0xE8
		::System::Boolean NeedNormal; // 0xF4
		::System::Byte _padding3[0x3];
		::F5AA718DA662D833 EmissionAK; // 0xF8
		::System::Boolean NeedEmission; // 0x104
		::System::Boolean IsVisible; // 0x105
		::System::Boolean isEditorOnlyDecal; // 0x106

		::System::Boolean ABB288F753AA4E83()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_ABB288F753AA4E83_OFFSET))(this);
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_BF13C91AD80643D2_OFFSET))(this);
		}

		::System::String* F7716170A1534FDF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_F7716170A1534FDF_OFFSET))(this);
		}

		::System::Void B45E8C9182823EB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_B45E8C9182823EB0_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME__CCTOR_OFFSET))();
		}

		::System::Void B3EA1915A48CC799(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_B3EA1915A48CC799_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* A7263404BF059074()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A7263404BF059074_OFFSET))(this);
		}

		::System::String* F9B945D88A0093C3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_F9B945D88A0093C3_OFFSET))(this);
		}

		::System::Boolean FA724F4C3BC5ECB4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_FA724F4C3BC5ECB4_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME__CTOR_OFFSET))(this);
		}

		::UnityEngine::B3A7F113FE1DE383 A172BCE7FE1C58A4()
		{
			return ((::UnityEngine::B3A7F113FE1DE383(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A172BCE7FE1C58A4_OFFSET))(this);
		}

		::System::Void A28D6A0C3E793E7D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_DECALVOLUME_A28D6A0C3E793E7D_OFFSET))(this);
		}
	};
}
