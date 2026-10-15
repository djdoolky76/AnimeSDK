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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CHLIAIJFBJF_AGNIGCGAFJP_OFFSET UNITYSDK_OFFSET(0xCF572F0)
#define CHLIAIJFBJF_APIGKLFOKNL_OFFSET UNITYSDK_OFFSET(0xCF52C30)
#define CHLIAIJFBJF_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0xCF54B40)
#define CHLIAIJFBJF_BIDHKJBFNOG_OFFSET UNITYSDK_OFFSET(0xCF521D0)
#define CHLIAIJFBJF_CBAIDGMCODG_OFFSET UNITYSDK_OFFSET(0xCF53770)
#define CHLIAIJFBJF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF57E70)
#define CHLIAIJFBJF_CDBJMLJIGOK_OFFSET UNITYSDK_OFFSET(0xCF57190)
#define CHLIAIJFBJF_CLEAR_OFFSET UNITYSDK_OFFSET(0xCF52860)
#define CHLIAIJFBJF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF4C8C0)
#define CHLIAIJFBJF_DCOAPDMIOFC_OFFSET UNITYSDK_OFFSET(0xCF52230)
#define CHLIAIJFBJF_DJBNHIOOFNI_OFFSET UNITYSDK_OFFSET(0xCF53020)
#define CHLIAIJFBJF_EGBENCIJDML_OFFSET UNITYSDK_OFFSET(0xCF526F0)
#define CHLIAIJFBJF_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0xCF4C450)
#define CHLIAIJFBJF_ENNAMLJFOLO_OFFSET UNITYSDK_OFFSET(0xCF546E0)
#define CHLIAIJFBJF_EONAEDHKMLM_OFFSET UNITYSDK_OFFSET(0xCF541A0)
#define CHLIAIJFBJF_EPHKMPOGBBL_OFFSET UNITYSDK_OFFSET(0xCF52E30)
#define CHLIAIJFBJF_FECMMIPBPGA_OFFSET UNITYSDK_OFFSET(0xCF52F90)
#define CHLIAIJFBJF_FMPHNNADJPE_1_OFFSET UNITYSDK_OFFSET(0xCF53CD0)
#define CHLIAIJFBJF_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0xCF55490)
#define CHLIAIJFBJF_GCNNCLLEDOC_OFFSET UNITYSDK_OFFSET(0xCF57E10)
#define CHLIAIJFBJF_GFNMMBLENNI_OFFSET UNITYSDK_OFFSET(0xCF571A0)
#define CHLIAIJFBJF_GGDLCACLCJD_OFFSET UNITYSDK_OFFSET(0xCF57280)
#define CHLIAIJFBJF_GGNLLOPJOCM_OFFSET UNITYSDK_OFFSET(0xCF523F0)
#define CHLIAIJFBJF_GHHJKCDMOCP_OFFSET UNITYSDK_OFFSET(0xCF536F0)
#define CHLIAIJFBJF_GJPEKAOFMLH_OFFSET UNITYSDK_OFFSET(0xCF53B40)
#define CHLIAIJFBJF_GKANAHGGEOK_OFFSET UNITYSDK_OFFSET(0xCF54E10)
#define CHLIAIJFBJF_GPGPINDBCJL_OFFSET UNITYSDK_OFFSET(0xCF579E0)
#define CHLIAIJFBJF_HDCCADJMKGL_OFFSET UNITYSDK_OFFSET(0xCF52110)
#define CHLIAIJFBJF_HJHGLIMIOOD_OFFSET UNITYSDK_OFFSET(0xCF54920)
#define CHLIAIJFBJF_HLBBOJPHIJE_OFFSET UNITYSDK_OFFSET(0xCF52620)
#define CHLIAIJFBJF_HOJKDDMIMOK_OFFSET UNITYSDK_OFFSET(0xCF55270)
#define CHLIAIJFBJF_IGDIEBODAAH_OFFSET UNITYSDK_OFFSET(0xCF4C190)
#define CHLIAIJFBJF_IGOIDILDIIH_OFFSET UNITYSDK_OFFSET(0xCF55CD0)
#define CHLIAIJFBJF_IHCHIAGGCAN_OFFSET UNITYSDK_OFFSET(0xCF56090)
#define CHLIAIJFBJF_IMAKKNEIANF_OFFSET UNITYSDK_OFFSET(0xCF525B0)
#define CHLIAIJFBJF_JBIAAIPOMHC_OFFSET UNITYSDK_OFFSET(0xCF52EF0)
#define CHLIAIJFBJF_JBJJNKOCGBE_OFFSET UNITYSDK_OFFSET(0xCF553A0)
#define CHLIAIJFBJF_JODKOPDMGHJ_OFFSET UNITYSDK_OFFSET(0xCF534B0)
#define CHLIAIJFBJF_KFDIEGJFIPN_OFFSET UNITYSDK_OFFSET(0xCF54020)
#define CHLIAIJFBJF_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xCF53A90)
#define CHLIAIJFBJF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCF529A0)
#define CHLIAIJFBJF_KJHFLHNBBBC_OFFSET UNITYSDK_OFFSET(0xCF57610)
#define CHLIAIJFBJF_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xCF542D0)
#define CHLIAIJFBJF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF52A60)
#define CHLIAIJFBJF_LKHIGNIKGCL_OFFSET UNITYSDK_OFFSET(0xCF55210)
#define CHLIAIJFBJF_LNLHHJDJKBL_OFFSET UNITYSDK_OFFSET(0xCF4C0C0)
#define CHLIAIJFBJF_MDFJIBPKEPB_OFFSET UNITYSDK_OFFSET(0xCF54AD0)
#define CHLIAIJFBJF_MLCKJFCLKMH_OFFSET UNITYSDK_OFFSET(0xCF55440)
#define CHLIAIJFBJF_MMJBLIAHKGG_OFFSET UNITYSDK_OFFSET(0xCF52080)
#define CHLIAIJFBJF_NDPGCFAAEML_OFFSET UNITYSDK_OFFSET(0xCF54EA0)
#define CHLIAIJFBJF_NEPBDELGKOD_OFFSET UNITYSDK_OFFSET(0xCF57A30)
#define CHLIAIJFBJF_NFPAFPDGMPJ_OFFSET UNITYSDK_OFFSET(0xCF553F0)
#define CHLIAIJFBJF_NIGEPFLCGNA_OFFSET UNITYSDK_OFFSET(0xCF52150)
#define CHLIAIJFBJF_NOAOHILGEIB_OFFSET UNITYSDK_OFFSET(0xCF4BF80)
#define CHLIAIJFBJF_NPLKHELPEFL_OFFSET UNITYSDK_OFFSET(0xCF54280)
#define CHLIAIJFBJF_OGDLIONGCMP_OFFSET UNITYSDK_OFFSET(0xCF52DE0)
#define CHLIAIJFBJF_OMAKDDBKLOA_OFFSET UNITYSDK_OFFSET(0xCF56E20)
#define CHLIAIJFBJF_OMBGFCBLEKC_OFFSET UNITYSDK_OFFSET(0xCF533E0)
#define CHLIAIJFBJF_PDOMEDCCOGH_OFFSET UNITYSDK_OFFSET(0xCF543A0)
#define CHLIAIJFBJF_PEBBCJGNLHE_OFFSET UNITYSDK_OFFSET(0xCF54980)
#define CHLIAIJFBJF_PIIEADOJJBO_OFFSET UNITYSDK_OFFSET(0xCF554E0)
#define CHLIAIJFBJF_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xCF54E60)

inline static constexpr unsigned int CHLIAIJFBJF_TypeDefinitionIndex = 73892;

	class CHLIAIJFBJF : public ::HPKACEPPPCA
	{
	public:
		::UnityEngine::GameObject* LNIAKMFJMHN; // 0x80
		::UnityEngine::GameObject* JKDOEOJNCIJ; // 0x88
		::UnityEngine::Transform* GLFPOCCLGGL; // 0x90
		::UnityEngine::GameObject* FLAFAPICBKN; // 0x98
		::BPBFCHPINDD* LIPCDIMCNAI; // 0xA0
		::RPG::Client::IRIRuntimeState* FHBIGNJBHCF; // 0xA8
		::System::String* HKAMCINFLIN; // 0xB0
		::RPG::Client::IAssetOperation* LKDEPLMOAFI; // 0xB8
		::System::Action_1<::System::Boolean>* JBFCACALCJB; // 0xC0
		::UnityEngine::GameObject* AGPIINGCCOC; // 0xC8
		::RenderItemPolymerConfig* MGDLHGGLMPN; // 0xD0
		::RPG::Client::IRIRuntimeState* POBCKEEAAJJ; // 0xD8
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* HDFBGJFGEPI; // 0xE0
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* LOBPPEGABCI; // 0xE8
		::UnityEngine::GameObject* NLKHAFLHGFD; // 0xF0
		::System::Boolean DBMOCNEAFJE; // 0xF8
		::System::Boolean JFEKGPNLFKD; // 0xF9
		::System::Boolean CDBCMNPLAHB; // 0xFA
		::System::Byte _padding0[0x1];
		::System::Int32 FCDKNHOMBAM; // 0xFC
		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMKHFGKHPA()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CA80);
		}

		static ::System::String** StaticGet_IMOLNJEBKBG()
		{
			return (::System::String**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CA88);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FFPGDEJCHFM()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CA90);
		}

		static ::System::String** StaticGet_JKIJBDELNMG()
		{
			return (::System::String**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CA98);
		}

		static ::UnityEngine::MaterialPropertyBlock** StaticGet_LBLCDNIMGMO()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CAA0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NENDPGEDNAL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x2CAA8);
		}

		static ::System::Int32* StaticGet_AANJNJBLFFH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x95D0);
		}

		static ::System::Int32* StaticGet_JKJONNMOIKE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x95D4);
		}

		static ::System::Int32* StaticGet_DAJGPDAMOGB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CHLIAIJFBJF")->GetStaticField(0x95D8);
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
