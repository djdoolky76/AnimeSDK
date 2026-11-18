#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJHJMDBICA.h"
#include "unitysdk/DAJLOCEMJNK.h"
#include "unitysdk/HMOFNJMNKIF.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFogParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameLutParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialPreset; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameTextureBlendParams; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_CIPELDAHELB_OFFSET UNITYSDK_OFFSET(0x13281460)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET UNITYSDK_OFFSET(0x13280EC0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x13280A00)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13281A80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x132819F0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_LENDJCOHLDP_OFFSET UNITYSDK_OFFSET(0x13280790)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_LOBDIFCBEIB_OFFSET UNITYSDK_OFFSET(0x13281650)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET UNITYSDK_OFFSET(0x13280E80)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ODJLEDMKMBM_OFFSET UNITYSDK_OFFSET(0x13281190)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13280700)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x132805D0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x13280550)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_DEPTHTEXTURE_OFFSET UNITYSDK_OFFSET(0x13280470)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_FILTERTYPE_OFFSET UNITYSDK_OFFSET(0x13280400)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_IGNOREPRESETMATERIAL_OFFSET UNITYSDK_OFFSET(0x132804E0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_PRESET_OFFSET UNITYSDK_OFFSET(0x132802B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x13280390)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_WEATHER_OFFSET UNITYSDK_OFFSET(0x13280320)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13281900)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x132818B0)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialModifier_TypeDefinitionIndex = 53077;

	class GalGameMaterialModifier : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Int32* StaticGet_OCNADGJMNBJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11280);
		}
		static ::System::Int32* StaticGet_NOPBLLJPIEG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11284);
		}
		static ::System::Int32* StaticGet_HBABGDENKKB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11288);
		}
		static ::System::Int32* StaticGet_HMHADNFJBEH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x1128C);
		}
		static ::System::Int32* StaticGet_CNFAOHIPNDA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11290);
		}
		static ::System::Int32* StaticGet_LONDDNBKDBP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11294);
		}
		static ::System::Int32* StaticGet_DDLFMLDCEGC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x11298);
		}
		static ::System::Int32* StaticGet_CGEDDDCEDAB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x1129C);
		}
		static ::System::Int32* StaticGet_IDHDHMPKEBA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x112A0);
		}
		static ::System::Int32* StaticGet_JPJOLPAPKFF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GalGameMaterialModifier_TypeDefinitionIndex)->GetStaticField(0x112A4);
		}
		// static const ::System::String* GELJMFLCJEF; // 0x0
		// static const ::System::String* MCFKPDEOKPP; // 0x0
		// static const ::System::String* MKLKMBDBCIC; // 0x0
		// static const ::System::String* OJKDFAEGDDO; // 0x0
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset* preset; // 0x18
		::HMOFNJMNKIF weather; // 0x20
		::DAJLOCEMJNK time; // 0x24
		::CLJHJMDBICA filterType; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* depthTexture; // 0x30
		::System::Boolean ignorePresetMaterial; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::UI::Graphic* EIBJIKPLDAB; // 0x40
		::UnityEngine::Material* IDBDGJDONAD; // 0x48
		::CLJHJMDBICA OMBNLNFBONC; // 0x50
		::System::Boolean HNNDAMOHMHG; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER__CCTOR_OFFSET))();
		}

		::System::Void set_Preset(::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialPreset*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_PRESET_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_Weather(::HMOFNJMNKIF EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::HMOFNJMNKIF))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_WEATHER_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_Time(::DAJLOCEMJNK EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::DAJLOCEMJNK))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_TIME_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_FilterType(::CLJHJMDBICA EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::CLJHJMDBICA))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_FILTERTYPE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_DepthTexture(::UnityEngine::Texture2D* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_DEPTHTEXTURE_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void set_IgnorePresetMaterial(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_SET_IGNOREPRESETMATERIAL_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIAL_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Int32 ModifierSortOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_MODIFIERSORTORDER_OFFSET))(this);
		}

		::System::Void GetModifiedMaterialPost(::UnityEngine::Material* GPFKPAIDODB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_GETMODIFIEDMATERIALPOST_OFFSET))(this, GPFKPAIDODB);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_KDOIBCBFBAG_OFFSET))(this);
		}

		static ::System::Void ODJLEDMKMBM(::UnityEngine::Material* KNNDDLMOKCG, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams* EDMNLNKOACH, ::UnityEngine::Texture2D* GMEBGIGNLBL)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_ODJLEDMKMBM_OFFSET))(KNNDDLMOKCG, EDMNLNKOACH, GMEBGIGNLBL);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_IFHNMAGGFAE_OFFSET))(this);
		}

		static ::System::Void LOBDIFCBEIB(::UnityEngine::Material* KNNDDLMOKCG, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams* HDBGDJMAAHD)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_LOBDIFCBEIB_OFFSET))(KNNDDLMOKCG, HDBGDJMAAHD);
		}

		::System::Void LENDJCOHLDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_LENDJCOHLDP_OFFSET))(this);
		}

		static ::System::Void CIPELDAHELB(::UnityEngine::Material* KNNDDLMOKCG, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams* EMEMNODGFNO)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams*))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALMODIFIER_CIPELDAHELB_OFFSET))(KNNDDLMOKCG, EMEMNODGFNO);
		}
	};
}
