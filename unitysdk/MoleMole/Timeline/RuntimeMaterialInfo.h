#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderMaterialType.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ADGCHMFHFFG_OFFSET UNITYSDK_OFFSET(0x1A0A7440)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_AJECDBNHAIM_OFFSET UNITYSDK_OFFSET(0x1A0AB3E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ALJMLAKDLCD_OFFSET UNITYSDK_OFFSET(0x1A0AE720)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_AOBJMAJPKJN_OFFSET UNITYSDK_OFFSET(0x1A0A8BE0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_BCFNKHOECDO_OFFSET UNITYSDK_OFFSET(0x1A0ACE40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_BODAMFAGOJA_OFFSET UNITYSDK_OFFSET(0x1A0AF350)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1A0A8C50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_DFAKFLPANNG_OFFSET UNITYSDK_OFFSET(0x1A0AE970)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EGBGCEPCION_OFFSET UNITYSDK_OFFSET(0x1A0A6D80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EGNIBAIOBME_OFFSET UNITYSDK_OFFSET(0x1A0A9460)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EMHLBOHEBCI_OFFSET UNITYSDK_OFFSET(0x1A0AE670)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_1_OFFSET UNITYSDK_OFFSET(0x1A0AA850)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_2_OFFSET UNITYSDK_OFFSET(0x1A0AAF90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_3_OFFSET UNITYSDK_OFFSET(0x1A0ADD50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_OFFSET UNITYSDK_OFFSET(0x1A0A99B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EOKIDCIGNHA_OFFSET UNITYSDK_OFFSET(0x1A0A6F00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FDPAHMPBHED_OFFSET UNITYSDK_OFFSET(0x1A0A3110)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FMDMLLDFEON_OFFSET UNITYSDK_OFFSET(0x1A0A9630)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FPFBKLHBILA_OFFSET UNITYSDK_OFFSET(0x1A0A8E90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1A0A2BA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1A0A2BB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_1_OFFSET UNITYSDK_OFFSET(0x1A0A9300)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_2_OFFSET UNITYSDK_OFFSET(0x1A0A9830)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_3_OFFSET UNITYSDK_OFFSET(0x1A0AB280)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_OFFSET UNITYSDK_OFFSET(0x1A0A72C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HNOADFNJGGF_OFFSET UNITYSDK_OFFSET(0x1A0A5280)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_IBNDKOLDFAC_OFFSET UNITYSDK_OFFSET(0x1A0AD720)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_IIMGJHCLFNK_OFFSET UNITYSDK_OFFSET(0x1A0AF730)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KBJNGEIGEHI_OFFSET UNITYSDK_OFFSET(0x1A0A8780)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KLAACKOFKFH_OFFSET UNITYSDK_OFFSET(0x1A0ACE80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LDGMOFMIHLF_OFFSET UNITYSDK_OFFSET(0x1A0AA160)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LGCAHBKLLFA_1_OFFSET UNITYSDK_OFFSET(0x1A0AE200)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LGCAHBKLLFA_OFFSET UNITYSDK_OFFSET(0x1A0A30B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_MIOHGOPKBPG_OFFSET UNITYSDK_OFFSET(0x1A0B0EC0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_MLFMEGILIMA_OFFSET UNITYSDK_OFFSET(0x1A0A92B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_NGPBDFKGNIC_OFFSET UNITYSDK_OFFSET(0x1A0A57E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_NOCIPJECLOI_OFFSET UNITYSDK_OFFSET(0x1A0AD050)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OFIINBLGPDO_1_OFFSET UNITYSDK_OFFSET(0x1A0AE260)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OFIINBLGPDO_OFFSET UNITYSDK_OFFSET(0x1A0AD220)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OKLNLKMNPBH_OFFSET UNITYSDK_OFFSET(0x1A0A70E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A0A56A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_PONIAMJHFMI_OFFSET UNITYSDK_OFFSET(0x1A0A3910)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0A4D60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0A4940)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0A2C50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_TypeDefinitionIndex = 65821;

	class RuntimeMaterialInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_skipPropertyKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C1F0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SpShaderPassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C1F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_shader_pass()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C200);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_PreZKeyWordList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C208);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AoParamPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C210);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_keywords_enable()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C218);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_colorSubKey()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C220);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_properties()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C228);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addInstanceMaterialPathMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C230);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipFloatKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x4C238);
		}
		// static const ::System::Int32 RenderType_Hair = 0x2; // 0x0
		// static const ::System::Int32 RenderType_EyeBrows = 0x1; // 0x0
		// static const ::System::String* MaterialPropertyHeaderStr; // 0x0
		// static const ::System::String* TextureInfoSuffix; // 0x0
		::System::Boolean showDetail; // 0x10
		::System::Boolean newMaterialInfo; // 0x11
		::System::Byte _padding0[0x6];
		::UnityEngine::Material* sourceMaterial; // 0x18
		::UnityEngine::Material* instanceMaterial; // 0x20
		::MoleMole::Timeline::RecorderMaterialType MaterialType; // 0x28
		::System::Int32 index; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* textureConfigs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* textureInfoConfigs; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* floatValConfigs; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* ColorValConfigs; // 0x48
		::System::Int32 RendererQueue; // 0x50
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::String*>* recorderKeyList; // 0x58
		::UnityEngine::Renderer* meshRenderer; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* init_textureConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* init_textureInfoConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* init_floatValConfigs; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* init_ColorValConfigs; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _runtimeKeywordFloatCache; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* textKeyList; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* floatKeyList; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* colorKeyList; // 0xA0

		::System::Void _ctor(::UnityEngine::Renderer* JAHOHGDIMFF, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET))(this, JAHOHGDIMFF, ABHBKFJKINO);
		}

		::System::Void _ctor_1(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET))(this, AEIHFBNNLBP);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET))();
		}

		::UnityEngine::Renderer* get_MeshRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get__materialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* HNOADFNJGGF()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HNOADFNJGGF_OFFSET))(this);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_PHOADBJGFBE_OFFSET))(this);
		}

		::System::Void LGCAHBKLLFA(::UnityEngine::Renderer* JAHOHGDIMFF, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LGCAHBKLLFA_OFFSET))(this, JAHOHGDIMFF, ABHBKFJKINO);
		}

		::System::Void EGBGCEPCION(::System::Int32 DBEBCNBCDKE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EGBGCEPCION_OFFSET))(this, DBEBCNBCDKE);
		}

		static ::System::Int32 OKLNLKMNPBH(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OKLNLKMNPBH_OFFSET))(AEIHFBNNLBP);
		}

		::System::Boolean HMDDPHKHLCB(::System::String* KDPCIAPDOLK, ::UnityEngine::Color EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN);
		}

		::System::Void ADGCHMFHFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ADGCHMFHFFG_OFFSET))(this);
		}

		::System::Void KBJNGEIGEHI(::System::String* DGDGBJAHDJP, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KBJNGEIGEHI_OFFSET))(this, DGDGBJAHDJP, GLPLOOEONEA);
		}

		::System::Void AOBJMAJPKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_AOBJMAJPKJN_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* MLFMEGILIMA()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_MLFMEGILIMA_OFFSET))(this);
		}

		::System::Boolean HMDDPHKHLCB_1(::System::String* KDPCIAPDOLK, ::UnityEngine::Texture* EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_1_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN);
		}

		::System::Void CNHBDOMKKDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_CNHBDOMKKDE_OFFSET))(this);
		}

		::System::Void FPFBKLHBILA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FPFBKLHBILA_OFFSET))(this);
		}

		::UnityEngine::Material* EOKIDCIGNHA()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EOKIDCIGNHA_OFFSET))(this);
		}

		static ::System::String* EGNIBAIOBME(::System::String* KEKLFCCONCL, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EGNIBAIOBME_OFFSET))(KEKLFCCONCL, GLPLOOEONEA);
		}

		::System::Void FMDMLLDFEON(::System::Boolean MLLBKHOAAGG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FMDMLLDFEON_OFFSET))(this, MLLBKHOAAGG);
		}

		::System::Boolean HMDDPHKHLCB_2(::System::String* KDPCIAPDOLK, ::UnityEngine::Vector4 EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_2_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN);
		}

		::System::Void ENKOLMMCHBH(::System::String* KDPCIAPDOLK, ::UnityEngine::Color EGEGIMGMJHN, ::UnityEngine::Color HFHBDJFPKLL, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KODJOCBAIGP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* KOJMJJBFOOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN, HFHBDJFPKLL, KODJOCBAIGP, KOJMJJBFOOC);
		}

		::System::Void LDGMOFMIHLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LDGMOFMIHLF_OFFSET))(this);
		}

		::System::Void ENKOLMMCHBH_1(::System::String* KDPCIAPDOLK, ::UnityEngine::Vector4 EGEGIMGMJHN, ::UnityEngine::Vector4 BAJNJINCDCF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KODJOCBAIGP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* KOJMJJBFOOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_1_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN, BAJNJINCDCF, KODJOCBAIGP, KOJMJJBFOOC);
		}

		::System::Void ENKOLMMCHBH_2(::System::String* KDPCIAPDOLK, ::System::Single EGEGIMGMJHN, ::System::Single BAJNJINCDCF, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KODJOCBAIGP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* KOJMJJBFOOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_2_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN, BAJNJINCDCF, KODJOCBAIGP, KOJMJJBFOOC);
		}

		::System::Boolean AJECDBNHAIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_AJECDBNHAIM_OFFSET))(this);
		}

		::System::Void BCFNKHOECDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_BCFNKHOECDO_OFFSET))(this);
		}

		::System::Boolean HMDDPHKHLCB_3(::System::String* KDPCIAPDOLK, ::System::Single EGEGIMGMJHN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_HMDDPHKHLCB_3_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN);
		}

		::System::Void OFIINBLGPDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OFIINBLGPDO_OFFSET))(this);
		}

		::MoleMole::Timeline::ColorRecorderUnit* KLAACKOFKFH(::System::String* GLHKENJEMBN)
		{
			return ((::MoleMole::Timeline::ColorRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KLAACKOFKFH_OFFSET))(this, GLHKENJEMBN);
		}

		::System::Void ENKOLMMCHBH_3(::System::String* KDPCIAPDOLK, ::UnityEngine::Texture* EGEGIMGMJHN, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* KODJOCBAIGP)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ENKOLMMCHBH_3_OFFSET))(this, KDPCIAPDOLK, EGEGIMGMJHN, KODJOCBAIGP);
		}

		::System::Void NGPBDFKGNIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_NGPBDFKGNIC_OFFSET))(this);
		}

		::UnityEngine::Material* FDPAHMPBHED()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_FDPAHMPBHED_OFFSET))(this);
		}

		::System::Void IBNDKOLDFAC(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* CECPLEGCHDC, ::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_IBNDKOLDFAC_OFFSET))(this, CECPLEGCHDC, AEIHFBNNLBP);
		}

		::MoleMole::Timeline::FloatRecorderUnit* NOCIPJECLOI(::System::String* GLHKENJEMBN)
		{
			return ((::MoleMole::Timeline::FloatRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_NOCIPJECLOI_OFFSET))(this, GLHKENJEMBN);
		}

		::System::Void PONIAMJHFMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_PONIAMJHFMI_OFFSET))(this);
		}

		::System::Void LGCAHBKLLFA_1(::UnityEngine::Renderer* JAHOHGDIMFF)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_LGCAHBKLLFA_1_OFFSET))(this, JAHOHGDIMFF);
		}

		::System::Void OFIINBLGPDO_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* FPBMFGBKHNA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_OFIINBLGPDO_1_OFFSET))(this, FPBMFGBKHNA);
		}

		::System::Void EMHLBOHEBCI(::UnityEngine::Material* AEIHFBNNLBP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_EMHLBOHEBCI_OFFSET))(this, AEIHFBNNLBP);
		}

		::System::Void ALJMLAKDLCD(::System::Collections::Generic::List_1<::System::String*>* JAKMJADBNBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_ALJMLAKDLCD_OFFSET))(this, JAKMJADBNBC);
		}

		::System::Boolean DFAKFLPANNG(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* ELKAIOOCMAE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_DFAKFLPANNG_OFFSET))(this, ELKAIOOCMAE);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* IIMGJHCLFNK(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* KOJMJJBFOOC, ::UnityEngine::Material* BKJFBCILLEG)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_IIMGJHCLFNK_OFFSET))(this, KOJMJJBFOOC, BKJFBCILLEG);
		}

		::MoleMole::Timeline::RecorderUnitType BODAMFAGOJA(::System::String* MCOHLHMKLIP)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_BODAMFAGOJA_OFFSET))(this, MCOHLHMKLIP);
		}

		static ::System::String* MIOHGOPKBPG(::System::String* KEKLFCCONCL, ::UnityEngine::Timeline::KFrameFieldType GLPLOOEONEA)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_MIOHGOPKBPG_OFFSET))(KEKLFCCONCL, GLPLOOEONEA);
		}
	};
}
