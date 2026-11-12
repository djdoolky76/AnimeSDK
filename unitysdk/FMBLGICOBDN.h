#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBLGICOBDN_InfoType.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FMBLGICOBDN_MOJNGIAFKMC.h"
#include "unitysdk/RPG/CustomRP/AABB.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DCJLBKKOHHC;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FMBLGICOBDN_AJEDNGJIACG_OFFSET UNITYSDK_OFFSET(0x167B93E0)
#define FMBLGICOBDN_AJGHCCJDPNH_OFFSET UNITYSDK_OFFSET(0x167BB760)
#define FMBLGICOBDN_AMNINCJNLBD_OFFSET UNITYSDK_OFFSET(0x167B9620)
#define FMBLGICOBDN_BALJMBNBONC_OFFSET UNITYSDK_OFFSET(0x167B8580)
#define FMBLGICOBDN_BFHCJPDCFFI_OFFSET UNITYSDK_OFFSET(0x167BB610)
#define FMBLGICOBDN_BFHECCMDFMM_OFFSET UNITYSDK_OFFSET(0x167BB0E0)
#define FMBLGICOBDN_BJCKKOPMMEN_OFFSET UNITYSDK_OFFSET(0x167BB5A0)
#define FMBLGICOBDN_CAFHBPAIPDK_OFFSET UNITYSDK_OFFSET(0x167B8E80)
#define FMBLGICOBDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x167BB7A0)
#define FMBLGICOBDN_CFFCEPKIOLG_OFFSET UNITYSDK_OFFSET(0x167B9CC0)
#define FMBLGICOBDN_CKDPECEDIJN_OFFSET UNITYSDK_OFFSET(0x167BB3E0)
#define FMBLGICOBDN_DCBLCAMFDIP_OFFSET UNITYSDK_OFFSET(0x167B88B0)
#define FMBLGICOBDN_EDGPOIBGEEJ_OFFSET UNITYSDK_OFFSET(0x167BA720)
#define FMBLGICOBDN_EDOKCIKMPAI_OFFSET UNITYSDK_OFFSET(0x167B9D70)
#define FMBLGICOBDN_EKDKAEKLFBF_OFFSET UNITYSDK_OFFSET(0x167BB210)
#define FMBLGICOBDN_FKCCBALCMJB_OFFSET UNITYSDK_OFFSET(0x167BB530)
#define FMBLGICOBDN_GBLCFHCEAIP_OFFSET UNITYSDK_OFFSET(0x167BB070)
#define FMBLGICOBDN_HACCMNDPFLD_OFFSET UNITYSDK_OFFSET(0x167BA430)
#define FMBLGICOBDN_HAILFPFJALH_OFFSET UNITYSDK_OFFSET(0x167B8EF0)
#define FMBLGICOBDN_HKBMIMCEPLM_OFFSET UNITYSDK_OFFSET(0x167B9A10)
#define FMBLGICOBDN_HKPCPMPAOEH_OFFSET UNITYSDK_OFFSET(0x167B9C10)
#define FMBLGICOBDN_HNNDEHODNJK_OFFSET UNITYSDK_OFFSET(0x167BAE40)
#define FMBLGICOBDN_HPLJLHIJCBA_OFFSET UNITYSDK_OFFSET(0x167BAE80)
#define FMBLGICOBDN_IDIKOFOELPA_OFFSET UNITYSDK_OFFSET(0x167B8D10)
#define FMBLGICOBDN_IPNLMLIOJIA_OFFSET UNITYSDK_OFFSET(0x167B90A0)
#define FMBLGICOBDN_JPHMKAMBLOO_OFFSET UNITYSDK_OFFSET(0x167B8E20)
#define FMBLGICOBDN_KEJINNFBMJF_OFFSET UNITYSDK_OFFSET(0x167B8700)
#define FMBLGICOBDN_KMBIFMFMFDA_OFFSET UNITYSDK_OFFSET(0x167BB2F0)
#define FMBLGICOBDN_KMJHDKDKACO_OFFSET UNITYSDK_OFFSET(0x167BAA00)
#define FMBLGICOBDN_LHFPAHDCMMM_OFFSET UNITYSDK_OFFSET(0x167BB140)
#define FMBLGICOBDN_LHLDJMGAMOG_OFFSET UNITYSDK_OFFSET(0x167BB370)
#define FMBLGICOBDN_LJCIFNGGGOC_OFFSET UNITYSDK_OFFSET(0x167BB680)
#define FMBLGICOBDN_LKAEKLENPOH_OFFSET UNITYSDK_OFFSET(0x167BB4C0)
#define FMBLGICOBDN_LKLJDIMMGCD_OFFSET UNITYSDK_OFFSET(0x167BB1B0)
#define FMBLGICOBDN_LPGJLLJAGDN_OFFSET UNITYSDK_OFFSET(0x167B9130)
#define FMBLGICOBDN_MFMDFKPLPAK_OFFSET UNITYSDK_OFFSET(0x167BA2C0)
#define FMBLGICOBDN_MKHIGCBOKEB_OFFSET UNITYSDK_OFFSET(0x167BB6F0)
#define FMBLGICOBDN_MMJDFBPMMOB_OFFSET UNITYSDK_OFFSET(0x167B9E40)
#define FMBLGICOBDN_MOINEANNMKE_OFFSET UNITYSDK_OFFSET(0x167BB280)
#define FMBLGICOBDN_NIIKIPNCJBI_OFFSET UNITYSDK_OFFSET(0x167B8090)
#define FMBLGICOBDN_NKCPOBMLMFG_OFFSET UNITYSDK_OFFSET(0x167B8410)
#define FMBLGICOBDN_NKINLJBILOC_OFFSET UNITYSDK_OFFSET(0x167B84F0)
#define FMBLGICOBDN_OIHHAOJDDBF_OFFSET UNITYSDK_OFFSET(0x167B9B80)
#define FMBLGICOBDN_PFDPGBCAKFH_OFFSET UNITYSDK_OFFSET(0x167BA770)

inline static constexpr unsigned int FMBLGICOBDN_TypeDefinitionIndex = 50215;

	class FMBLGICOBDN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_IJGALHLICJH()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x684D0);
		}

		static ::System::String** StaticGet_NMNBFKCCHMN()
		{
			return (::System::String**)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x684D8);
		}

		static ::System::Int32* StaticGet_BCGMECNNGDG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F60);
		}

		static ::System::Int32* StaticGet_PCOMOGBGHEK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F64);
		}

		static ::System::UInt32* StaticGet_MBAOKMFKKEA()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F68);
		}

		static ::System::UInt32* StaticGet_FGKFKIFLDGG()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F6C);
		}

		static ::System::Int32* StaticGet_KNIFBMGGLEP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F70);
		}

		static ::System::Int32* StaticGet_BCHOIJJPLPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F74);
		}

		static ::System::Int32* StaticGet_JCBCHMBKNGC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F78);
		}

		static ::System::Int32* StaticGet_LFGGCEDOJFB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F7C);
		}

		static ::System::UInt32* StaticGet_HJOGHBCEGDG()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F80);
		}

		static ::System::UInt32* StaticGet_KELODJPGNNE()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F84);
		}

		static ::System::UInt32* StaticGet_HLFKPOMOENB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F88);
		}

		static ::System::UInt32* StaticGet_PLAMAHOCIIP()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "FMBLGICOBDN")->GetStaticField(0x14F8C);
		}

		// static const ::System::Object MPKICONJOFO; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMBLGICOBDN_CCTOR_OFFSET))();
		}

		static ::UnityEngine::Mesh* NIIKIPNCJBI(::UnityEngine::Mesh* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_NIIKIPNCJBI_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion NKCPOBMLMFG(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FMBLGICOBDN_NKCPOBMLMFG_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 NKINLJBILOC(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FMBLGICOBDN_NKINLJBILOC_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 BALJMBNBONC(::UnityEngine::Matrix4x4 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FMBLGICOBDN_BALJMBNBONC_OFFSET))(a1);
		}

		static ::UnityEngine::Matrix4x4 KEJINNFBMJF(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_KEJINNFBMJF_OFFSET))(a1);
		}

		static ::System::Void DCBLCAMFDIP(::UnityEngine::Transform* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FMBLGICOBDN_DCBLCAMFDIP_OFFSET))(a1, a2);
		}

		static ::System::UInt32 IDIKOFOELPA(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_IDIKOFOELPA_OFFSET))(a1);
		}

		static ::System::UInt32 JPHMKAMBLOO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_JPHMKAMBLOO_OFFSET))(a1, a2);
		}

		static ::System::Single CAFHBPAIPDK(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_CAFHBPAIPDK_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 HAILFPFJALH(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HAILFPFJALH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 IPNLMLIOJIA(::UnityEngine::Vector3 a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FMBLGICOBDN_IPNLMLIOJIA_OFFSET))(a1);
		}

		static ::System::UInt32 LPGJLLJAGDN(::RPG::CustomRP::AABB a1)
		{
			return ((::System::UInt32(*)(::RPG::CustomRP::AABB))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LPGJLLJAGDN_OFFSET))(a1);
		}

		static ::RPG::CustomRP::AABB AJEDNGJIACG(::UnityEngine::Mesh* a1)
		{
			return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_AJEDNGJIACG_OFFSET))(a1);
		}

		static ::RPG::CustomRP::AABB AMNINCJNLBD(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::RPG::CustomRP::AABB(*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FMBLGICOBDN_AMNINCJNLBD_OFFSET))(a1, a2);
		}

		static ::System::Void HKBMIMCEPLM(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HKBMIMCEPLM_OFFSET))(a1);
		}

		static ::System::Void OIHHAOJDDBF(::FMBLGICOBDN_InfoType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FMBLGICOBDN_InfoType, ::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_OIHHAOJDDBF_OFFSET))(a1, a2);
		}

		static ::System::Void HKPCPMPAOEH(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HKPCPMPAOEH_OFFSET))(a1);
		}

		static ::System::Void CFFCEPKIOLG(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_CFFCEPKIOLG_OFFSET))(a1);
		}

		static ::System::Void EDOKCIKMPAI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_EDOKCIKMPAI_OFFSET))(a1);
		}

		static ::RPG::CustomRP::CustomLightQualityFilter MMJDFBPMMOB()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)())((::PBYTE)hIl2Cpp + FMBLGICOBDN_MMJDFBPMMOB_OFFSET))();
		}

		static ::System::Void MFMDFKPLPAK(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + FMBLGICOBDN_MFMDFKPLPAK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HACCMNDPFLD(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HACCMNDPFLD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::String* EDGPOIBGEEJ(::UnityEngine::Object* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_EDGPOIBGEEJ_OFFSET))(a1);
		}

		static ::System::Type* PFDPGBCAKFH(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Type*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_PFDPGBCAKFH_OFFSET))(a1, a2);
		}

		static ::DCJLBKKOHHC* KMJHDKDKACO(::UnityEngine::Component* a1)
		{
			return ((::DCJLBKKOHHC*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FMBLGICOBDN_KMJHDKDKACO_OFFSET))(a1);
		}

		static ::System::Boolean HNNDEHODNJK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HNNDEHODNJK_OFFSET))(a1);
		}

		static ::FMBLGICOBDN_MOJNGIAFKMC HPLJLHIJCBA(::System::Int32 a1)
		{
			return ((::FMBLGICOBDN_MOJNGIAFKMC(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_HPLJLHIJCBA_OFFSET))(a1);
		}

		static ::System::Int32 GBLCFHCEAIP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_GBLCFHCEAIP_OFFSET))(a1);
		}

		static ::System::Int32 BFHECCMDFMM(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_BFHECCMDFMM_OFFSET))(a1);
		}

		static ::System::Int32 LHFPAHDCMMM(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LHFPAHDCMMM_OFFSET))(a1);
		}

		static ::System::Int32 LKLJDIMMGCD(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LKLJDIMMGCD_OFFSET))(a1);
		}

		static ::System::Int32 EKDKAEKLFBF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_EKDKAEKLFBF_OFFSET))(a1);
		}

		static ::System::Int32 MOINEANNMKE(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_MOINEANNMKE_OFFSET))(a1);
		}

		static ::System::Int32 KMBIFMFMFDA(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + FMBLGICOBDN_KMBIFMFMFDA_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LHLDJMGAMOG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LHLDJMGAMOG_OFFSET))(a1, a2);
		}

		static ::System::Int32 CKDPECEDIJN(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::ScenenLightManager::LightTypeID a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID))((::PBYTE)hIl2Cpp + FMBLGICOBDN_CKDPECEDIJN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 LKAEKLENPOH(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LKAEKLENPOH_OFFSET))(a1, a2);
		}

		static ::System::Int32 FKCCBALCMJB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_FKCCBALCMJB_OFFSET))(a1, a2);
		}

		static ::System::Int32 BJCKKOPMMEN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_BJCKKOPMMEN_OFFSET))(a1, a2);
		}

		static ::System::Int32 BFHCJPDCFFI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_BFHCJPDCFFI_OFFSET))(a1, a2);
		}

		static ::System::Int32 LJCIFNGGGOC(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_LJCIFNGGGOC_OFFSET))(a1, a2);
		}

		static ::System::Int32 MKHIGCBOKEB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FMBLGICOBDN_MKHIGCBOKEB_OFFSET))(a1, a2);
		}

		static ::System::Int32 AJGHCCJDPNH()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + FMBLGICOBDN_AJGHCCJDPNH_OFFSET))();
		}

	};
