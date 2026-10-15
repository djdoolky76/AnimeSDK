#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/HPKACEPPPCA.h"
#include "unitysdk/GEEOPFIMJEM.h"
class BGNDPIPJFCI;
class BPBFCHPINDD;
class CHLIAIJFBJF;
class GDKHHPPIFBC;
class KLEFGGIHGMI;
class RenderItemPolymerConfig;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class IRIRuntimeState; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CHLIAIJFBJF_AGNIGCGAFJP_OFFSET UNITYSDK_OFFSET(0xCF5E900)
#define CHLIAIJFBJF_APIGKLFOKNL_OFFSET UNITYSDK_OFFSET(0xCF5A240)
#define CHLIAIJFBJF_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0xCF5C150)
#define CHLIAIJFBJF_BIDHKJBFNOG_OFFSET UNITYSDK_OFFSET(0xCF597E0)
#define CHLIAIJFBJF_CBAIDGMCODG_OFFSET UNITYSDK_OFFSET(0xCF5AD80)
#define CHLIAIJFBJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF5F490)
#define CHLIAIJFBJF_CDBJMLJIGOK_OFFSET UNITYSDK_OFFSET(0xCF5E7A0)
#define CHLIAIJFBJF_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF59E70)
#define CHLIAIJFBJF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF53F10)
#define CHLIAIJFBJF_DCOAPDMIOFC_OFFSET UNITYSDK_OFFSET(0xCF59840)
#define CHLIAIJFBJF_DJBNHIOOFNI_OFFSET UNITYSDK_OFFSET(0xCF5A630)
#define CHLIAIJFBJF_EGBENCIJDML_OFFSET UNITYSDK_OFFSET(0xCF59D00)
#define CHLIAIJFBJF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xCF53A70)
#define CHLIAIJFBJF_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0xCF5BCF0)
#define CHLIAIJFBJF_EONAEDHKMLM_OFFSET UNITYSDK_OFFSET(0xCF5B7B0)
#define CHLIAIJFBJF_EPHKMPOGBBL_OFFSET UNITYSDK_OFFSET(0xCF5A440)
#define CHLIAIJFBJF_FECMMIPBPGA_OFFSET UNITYSDK_OFFSET(0xCF5A5A0)
#define CHLIAIJFBJF_FMPHNNADJPE_1_OFFSET UNITYSDK_OFFSET(0xCF5B2E0)
#define CHLIAIJFBJF_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0xCF5CAA0)
#define CHLIAIJFBJF_GCNNCLLEDOC_OFFSET UNITYSDK_OFFSET(0xCF5F430)
#define CHLIAIJFBJF_GFNMMBLENNI_OFFSET UNITYSDK_OFFSET(0xCF5E7B0)
#define CHLIAIJFBJF_GGDLCACLCJD_OFFSET UNITYSDK_OFFSET(0xCF5E890)
#define CHLIAIJFBJF_GGNLLOPJOCM_OFFSET UNITYSDK_OFFSET(0xCF59A00)
#define CHLIAIJFBJF_GHHJKCDMOCP_OFFSET UNITYSDK_OFFSET(0xCF5AD00)
#define CHLIAIJFBJF_GJPEKAOFMLH_OFFSET UNITYSDK_OFFSET(0xCF5B150)
#define CHLIAIJFBJF_GKANAHGGEOK_OFFSET UNITYSDK_OFFSET(0xCF5C420)
#define CHLIAIJFBJF_GPGPINDBCJL_OFFSET UNITYSDK_OFFSET(0xCF5F000)
#define CHLIAIJFBJF_HDCCADJMKGL_OFFSET UNITYSDK_OFFSET(0xCF59720)
#define CHLIAIJFBJF_HJHGLIMIOOD_OFFSET UNITYSDK_OFFSET(0xCF5BF30)
#define CHLIAIJFBJF_HLBBOJPHIJE_OFFSET UNITYSDK_OFFSET(0xCF59C30)
#define CHLIAIJFBJF_HOJKDDMIMOK_OFFSET UNITYSDK_OFFSET(0xCF5C880)
#define CHLIAIJFBJF_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0xCF537B0)
#define CHLIAIJFBJF_IGOIDILDIIH_OFFSET UNITYSDK_OFFSET(0xCF5D2E0)
#define CHLIAIJFBJF_IHCHIAGGCAN_OFFSET UNITYSDK_OFFSET(0xCF5D6A0)
#define CHLIAIJFBJF_IMAKKNEIANF_OFFSET UNITYSDK_OFFSET(0xCF59BC0)
#define CHLIAIJFBJF_JBIAAIPOMHC_OFFSET UNITYSDK_OFFSET(0xCF5A500)
#define CHLIAIJFBJF_JBJJNKOCGBE_OFFSET UNITYSDK_OFFSET(0xCF5C9B0)
#define CHLIAIJFBJF_JODKOPDMGHJ_OFFSET UNITYSDK_OFFSET(0xCF5AAC0)
#define CHLIAIJFBJF_KFDIEGJFIPN_OFFSET UNITYSDK_OFFSET(0xCF5B630)
#define CHLIAIJFBJF_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xCF5B0A0)
#define CHLIAIJFBJF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCF59FB0)
#define CHLIAIJFBJF_KJHFLHNBBBC_OFFSET UNITYSDK_OFFSET(0xCF5EC20)
#define CHLIAIJFBJF_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xCF5B8E0)
#define CHLIAIJFBJF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF5A070)
#define CHLIAIJFBJF_LKHIGNIKGCL_OFFSET UNITYSDK_OFFSET(0xCF5C820)
#define CHLIAIJFBJF_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0xCF536E0)
#define CHLIAIJFBJF_MDFJIBPKEPB_OFFSET UNITYSDK_OFFSET(0xCF5C0E0)
#define CHLIAIJFBJF_MLCKJFCLKMH_OFFSET UNITYSDK_OFFSET(0xCF5CA50)
#define CHLIAIJFBJF_MMJBLIAHKGG_OFFSET UNITYSDK_OFFSET(0xCF59690)
#define CHLIAIJFBJF_NDPGCFAAEML_OFFSET UNITYSDK_OFFSET(0xCF5C4B0)
#define CHLIAIJFBJF_NEPBDELGKOD_OFFSET UNITYSDK_OFFSET(0xCF5F050)
#define CHLIAIJFBJF_NFPAFPDGMPJ_OFFSET UNITYSDK_OFFSET(0xCF5CA00)
#define CHLIAIJFBJF_NIGEPFLCGNA_OFFSET UNITYSDK_OFFSET(0xCF59760)
#define CHLIAIJFBJF_NOAOHILGEIB_OFFSET UNITYSDK_OFFSET(0xCF535A0)
#define CHLIAIJFBJF_NPLKHELPEFL_OFFSET UNITYSDK_OFFSET(0xCF5B890)
#define CHLIAIJFBJF_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0xCF5A3F0)
#define CHLIAIJFBJF_OMAKDDBKLOA_OFFSET UNITYSDK_OFFSET(0xCF5E430)
#define CHLIAIJFBJF_OMBGFCBLEKC_OFFSET UNITYSDK_OFFSET(0xCF5A9F0)
#define CHLIAIJFBJF_PDOMEDCCOGH_OFFSET UNITYSDK_OFFSET(0xCF5B9B0)
#define CHLIAIJFBJF_PEBBCJGNLHE_OFFSET UNITYSDK_OFFSET(0xCF5BF90)
#define CHLIAIJFBJF_PIIEADOJJBO_OFFSET UNITYSDK_OFFSET(0xCF5CAF0)
#define CHLIAIJFBJF_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCF5C470)

inline static constexpr unsigned int CHLIAIJFBJF_TypeDefinitionIndex = 73893;

	class CHLIAIJFBJF : public ::HPKACEPPPCA
	{
	public:
		::System::Action* JBFCACALCJB; // 0x80
		::BPBFCHPINDD* LIPCDIMCNAI; // 0x88
		::RPG::Client::IRIRuntimeState* FHBIGNJBHCF; // 0x90
		::UnityEngine::Transform* GLFPOCCLGGL; // 0x98
		::RPG::Client::IAssetOperation* LKDEPLMOAFI; // 0xA0
		::RenderItemPolymerConfig* MGDLHGGLMPN; // 0xA8
		::UnityEngine::GameObject* JKDOEOJNCIJ; // 0xB0
		::UnityEngine::GameObject* LNIAKMFJMHN; // 0xB8
		::System::String* HKAMCINFLIN; // 0xC0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* HDFBGJFGEPI; // 0xC8
		::UnityEngine::GameObject* AGPIINGCCOC; // 0xD0
		::UnityEngine::GameObject* NLKHAFLHGFD; // 0xD8
		::RPG::Client::IRIRuntimeState* POBCKEEAAJJ; // 0xE0
		::UnityEngine::GameObject* FLAFAPICBKN; // 0xE8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* LOBPPEGABCI; // 0xF0
		::System::Boolean CDBCMNPLAHB; // 0xF8
		::System::Boolean DBMOCNEAFJE; // 0xF9
		::System::Boolean JFEKGPNLFKD; // 0xFA
		::System::Byte _padding0[0x1];
		::System::Int32 FCDKNHOMBAM; // 0xFC
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_LBLCDNIMGMO()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E380);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E388);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NENDPGEDNAL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E390);
		}

		static ::System::String** StaticGet_JKIJBDELNMG()
		{
			return (::System::String**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E398);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FFPGDEJCHFM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E3A0);
		}

		static ::System::String** StaticGet_IMOLNJEBKBG()
		{
			return (::System::String**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2E3A8);
		}

		static ::System::Int32* StaticGet_AANJNJBLFFH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x9800);
		}

		static ::System::Int32* StaticGet_JKJONNMOIKE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x9804);
		}

		static ::System::Int32* StaticGet_DAJGPDAMOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x9808);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHLIAIJFBJF_CCTOR_OFFSET))();
		}

		::System::Void MMJBLIAHKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_MMJBLIAHKGG_OFFSET))(this);
		}

		::System::Void HDCCADJMKGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_HDCCADJMKGL_OFFSET))(this);
		}

		::System::Void NIGEPFLCGNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NIGEPFLCGNA_OFFSET))(this);
		}

		::System::Void BIDHKJBFNOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_BIDHKJBFNOG_OFFSET))(this);
		}

		::System::Void DCOAPDMIOFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_DCOAPDMIOFC_OFFSET))(this);
		}

		::System::Void GGNLLOPJOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GGNLLOPJOCM_OFFSET))(this);
		}

		::System::Void IMAKKNEIANF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_IMAKKNEIANF_OFFSET))(this);
		}

		::System::Void HLBBOJPHIJE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_HLBBOJPHIJE_OFFSET))(this, a1);
		}

		::System::Void EGBENCIJDML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_EGBENCIJDML_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_CLEAR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::KLEFGGIHGMI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void APIGKLFOKNL(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_APIGKLFOKNL_OFFSET))(this, a1, a2);
		}

		::System::Void OGDLIONGCMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_OGDLIONGCMP_OFFSET))(this);
		}

		::System::Void JBIAAIPOMHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_JBIAAIPOMHC_OFFSET))(this);
		}

		::System::Void OMBGFCBLEKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_OMBGFCBLEKC_OFFSET))(this);
		}

		::System::Void JODKOPDMGHJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_JODKOPDMGHJ_OFFSET))(this, a1);
		}

		::System::Void CBAIDGMCODG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_CBAIDGMCODG_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KGJAMKFPOAB_OFFSET))(this, a1);
		}

		::System::Void GJPEKAOFMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GJPEKAOFMLH_OFFSET))(this);
		}

		::System::Void KFDIEGJFIPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KFDIEGJFIPN_OFFSET))(this);
		}

		::System::Void EONAEDHKMLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_EONAEDHKMLM_OFFSET))(this);
		}

		::System::String* LNLHHJDJKBL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_LNLHHJDJKBL_OFFSET))(this);
		}

		::System::Void IGDIEBODAAH(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_IGDIEBODAAH_OFFSET))(this, a1);
		}

		::System::Void EGKNKHEANAN(::BGNDPIPJFCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGNDPIPJFCI*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_EGKNKHEANAN_OFFSET))(this, a1);
		}

		::System::Void NPLKHELPEFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NPLKHELPEFL_OFFSET))(this);
		}

		::System::Void HJHGLIMIOOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_HJHGLIMIOOD_OFFSET))(this);
		}

		::System::Void PEBBCJGNLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_PEBBCJGNLHE_OFFSET))(this);
		}

		::System::Void MDFJIBPKEPB(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_MDFJIBPKEPB_OFFSET))(this, a1);
		}

		::System::Void GKANAHGGEOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GKANAHGGEOK_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Boolean BFJJOJKKLGG(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_BFJJOJKKLGG_OFFSET))(this, a1);
		}

		::System::Void PDOMEDCCOGH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_PDOMEDCCOGH_OFFSET))(this, a1);
		}

		::System::Void LKHIGNIKGCL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_LKHIGNIKGCL_OFFSET))(this, a1);
		}

		::System::Void NDPGCFAAEML(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NDPGCFAAEML_OFFSET))(this, a1);
		}

		::System::Void ENNAMLJFOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_ENNAMLJFOLO_OFFSET))(this);
		}

		::System::Void HOJKDDMIMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_HOJKDDMIMOK_OFFSET))(this);
		}

		::UnityEngine::GameObject* JBJJNKOCGBE()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_JBJJNKOCGBE_OFFSET))(this);
		}

		::UnityEngine::Transform* NFPAFPDGMPJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NFPAFPDGMPJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* MLCKJFCLKMH()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_MLCKJFCLKMH_OFFSET))(this);
		}

		::System::Void FMPHNNADJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_FMPHNNADJPE_OFFSET))(this);
		}

		::System::Void PIIEADOJJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_PIIEADOJJBO_OFFSET))(this);
		}

		static ::System::Void IGOIDILDIIH(::CHLIAIJFBJF* a1, ::GEEOPFIMJEM a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::CHLIAIJFBJF*, ::GEEOPFIMJEM, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_IGOIDILDIIH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IHCHIAGGCAN(::CHLIAIJFBJF* a1, ::GEEOPFIMJEM a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::CHLIAIJFBJF*, ::GEEOPFIMJEM, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_IHCHIAGGCAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FMPHNNADJPE_1(::GDKHHPPIFBC* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::GDKHHPPIFBC*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_FMPHNNADJPE_1_OFFSET))(a1, a2);
		}

		::System::Void DJBNHIOOFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_DJBNHIOOFNI_OFFSET))(this);
		}

		::System::Boolean NOAOHILGEIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NOAOHILGEIB_OFFSET))(this);
		}

		::System::Void FECMMIPBPGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_FECMMIPBPGA_OFFSET))(this);
		}

		::System::Void OMAKDDBKLOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_OMAKDDBKLOA_OFFSET))(this);
		}

		::System::Void EPHKMPOGBBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_EPHKMPOGBBL_OFFSET))(this);
		}

		::BPBFCHPINDD* CDBJMLJIGOK()
		{
			return ((::BPBFCHPINDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_CDBJMLJIGOK_OFFSET))(this);
		}

		::System::Boolean GFNMMBLENNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GFNMMBLENNI_OFFSET))(this);
		}

		::System::Boolean GHHJKCDMOCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GHHJKCDMOCP_OFFSET))(this);
		}

		::System::Boolean GGDLCACLCJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GGDLCACLCJD_OFFSET))(this);
		}

		::System::Void AGNIGCGAFJP(::BPBFCHPINDD_FadingDoneActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BPBFCHPINDD_FadingDoneActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_AGNIGCGAFJP_OFFSET))(this, a1, a2);
		}

		::System::Void KJHFLHNBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_KJHFLHNBBBC_OFFSET))(this);
		}

		::System::Void GPGPINDBCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GPGPINDBCJL_OFFSET))(this);
		}

		::System::Boolean NEPBDELGKOD(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_NEPBDELGKOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GCNNCLLEDOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLIAIJFBJF_GCNNCLLEDOC_OFFSET))(this);
		}

	};
