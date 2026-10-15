#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolInUseState.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AIBOPLOBAFN;
class BLOKEHHEMEJ;
class CCAFCCGAFDG;
class DHGOECAECHA;
class EJFKDHCJNBD;
class FNAIBJPONCC;
class LEKNHIPIKCF;
class LFPJGOEOLNH;
class NNDAJDLAHNC;
namespace RPG { template <typename T> class RingBuffer_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define AIBOPLOBAFN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xEB96480)
#define AIBOPLOBAFN_ADJFIEOHHJB_OFFSET UNITYSDK_OFFSET(0xEB9E110)
#define AIBOPLOBAFN_AGFNLOFEOLH_OFFSET UNITYSDK_OFFSET(0xEB9DB00)
#define AIBOPLOBAFN_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0xEB96770)
#define AIBOPLOBAFN_APNCIAELBMM_OFFSET UNITYSDK_OFFSET(0xEB9E4D0)
#define AIBOPLOBAFN_BHBJOMHPOGA_OFFSET UNITYSDK_OFFSET(0xEB9E750)
#define AIBOPLOBAFN_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xEB96730)
#define AIBOPLOBAFN_BNCDOBFLNNE_OFFSET UNITYSDK_OFFSET(0xEB990B0)
#define AIBOPLOBAFN_CAPPAHPLNMH_OFFSET UNITYSDK_OFFSET(0xEB975F0)
#define AIBOPLOBAFN_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB9E8A0)
#define AIBOPLOBAFN_CHCJJNGFPFK_OFFSET UNITYSDK_OFFSET(0xEB9CC60)
#define AIBOPLOBAFN_CLMPAJFNDGJ_OFFSET UNITYSDK_OFFSET(0xEB9C960)
#define AIBOPLOBAFN_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xEB962A0)
#define AIBOPLOBAFN_CPAHHCKGKDC_OFFSET UNITYSDK_OFFSET(0xEB9E730)
#define AIBOPLOBAFN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB96150)
#define AIBOPLOBAFN_DDIIFEHGNNG_OFFSET UNITYSDK_OFFSET(0xEB9D180)
#define AIBOPLOBAFN_DEBLNBBOAMG_OFFSET UNITYSDK_OFFSET(0xEB9E6A0)
#define AIBOPLOBAFN_DENGPLOEJDA_OFFSET UNITYSDK_OFFSET(0xEB96FD0)
#define AIBOPLOBAFN_DHFNJIHGIDJ_OFFSET UNITYSDK_OFFSET(0xEB9D2A0)
#define AIBOPLOBAFN_DIMEGMFFPOB_OFFSET UNITYSDK_OFFSET(0xEB9A900)
#define AIBOPLOBAFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB964E0)
#define AIBOPLOBAFN_DKNKIICLNPO_OFFSET UNITYSDK_OFFSET(0xEB9C870)
#define AIBOPLOBAFN_DOCGBKOBADI_OFFSET UNITYSDK_OFFSET(0xEB9E760)
#define AIBOPLOBAFN_DOEBDMHLPMN_OFFSET UNITYSDK_OFFSET(0xEB974F0)
#define AIBOPLOBAFN_EBPGCDGKDGI_OFFSET UNITYSDK_OFFSET(0xEB9D950)
#define AIBOPLOBAFN_EDJGMILLLMH_OFFSET UNITYSDK_OFFSET(0xEB9E550)
#define AIBOPLOBAFN_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0xEB967C0)
#define AIBOPLOBAFN_FEODGEHFNGP_OFFSET UNITYSDK_OFFSET(0xEB9E5E0)
#define AIBOPLOBAFN_FFJBKGMEJKB_OFFSET UNITYSDK_OFFSET(0xEB9BC20)
#define AIBOPLOBAFN_FHJFELDPHAJ_OFFSET UNITYSDK_OFFSET(0xEB9E200)
#define AIBOPLOBAFN_FMOPFGKPAFB_1_OFFSET UNITYSDK_OFFSET(0xEB9A9F0)
#define AIBOPLOBAFN_FMOPFGKPAFB_OFFSET UNITYSDK_OFFSET(0xEB99D50)
#define AIBOPLOBAFN_FOOHMBKENCH_OFFSET UNITYSDK_OFFSET(0xEB9E390)
#define AIBOPLOBAFN_FPHKAGEJFGE_OFFSET UNITYSDK_OFFSET(0xEB9DAC0)
#define AIBOPLOBAFN_GBDGCPBIBBG_OFFSET UNITYSDK_OFFSET(0xEB97030)
#define AIBOPLOBAFN_GET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xEB9E6B0)
#define AIBOPLOBAFN_GFGACMDHLJF_OFFSET UNITYSDK_OFFSET(0xEB9E5D0)
#define AIBOPLOBAFN_GGKILJPEJFJ_OFFSET UNITYSDK_OFFSET(0xEB97CF0)
#define AIBOPLOBAFN_GJGJJHIMJEH_OFFSET UNITYSDK_OFFSET(0xEB99310)
#define AIBOPLOBAFN_GKJBHMGNAKE_OFFSET UNITYSDK_OFFSET(0xEB975A0)
#define AIBOPLOBAFN_GPGEGILOHLC_OFFSET UNITYSDK_OFFSET(0xEB96810)
#define AIBOPLOBAFN_HBBMILGKDMK_OFFSET UNITYSDK_OFFSET(0xEB97170)
#define AIBOPLOBAFN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xEB970F0)
#define AIBOPLOBAFN_HLMODIIEGCE_OFFSET UNITYSDK_OFFSET(0xEB99600)
#define AIBOPLOBAFN_IAKFNFNHBMC_OFFSET UNITYSDK_OFFSET(0xEB9E430)
#define AIBOPLOBAFN_IBDKFBJMGCL_OFFSET UNITYSDK_OFFSET(0xEB997E0)
#define AIBOPLOBAFN_ICCFGLIOMNK_OFFSET UNITYSDK_OFFSET(0xEB9E740)
#define AIBOPLOBAFN_IFLHPAFDBOD_OFFSET UNITYSDK_OFFSET(0xEB99CF0)
#define AIBOPLOBAFN_IHPDHGJDNNL_OFFSET UNITYSDK_OFFSET(0xEB990A0)
#define AIBOPLOBAFN_IKCLHKANEID_OFFSET UNITYSDK_OFFSET(0xEB98C90)
#define AIBOPLOBAFN_ILINNFMGMDN_OFFSET UNITYSDK_OFFSET(0xEB9E260)
#define AIBOPLOBAFN_IMCNJGFIOPC_OFFSET UNITYSDK_OFFSET(0xEB9BD60)
#define AIBOPLOBAFN_IMJGAEHILOC_OFFSET UNITYSDK_OFFSET(0xEB98A00)
#define AIBOPLOBAFN_INIIODBAHCI_OFFSET UNITYSDK_OFFSET(0xEB96900)
#define AIBOPLOBAFN_INIJCJJLPKM_1_OFFSET UNITYSDK_OFFSET(0xEB999D0)
#define AIBOPLOBAFN_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xEB99940)
#define AIBOPLOBAFN_IOKLLBPGFJM_OFFSET UNITYSDK_OFFSET(0xEB9E5C0)
#define AIBOPLOBAFN_JCJGMDAOIPN_1_OFFSET UNITYSDK_OFFSET(0xEB9B2A0)
#define AIBOPLOBAFN_JCJGMDAOIPN_OFFSET UNITYSDK_OFFSET(0xEB9A730)
#define AIBOPLOBAFN_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xEB9E180)
#define AIBOPLOBAFN_JMDAONOGNFM_OFFSET UNITYSDK_OFFSET(0xEB9E770)
#define AIBOPLOBAFN_KCDJGMKJOLI_OFFSET UNITYSDK_OFFSET(0xEB9BCF0)
#define AIBOPLOBAFN_KDGKKJLBOMP_OFFSET UNITYSDK_OFFSET(0xEB99670)
#define AIBOPLOBAFN_KEACEPDABHJ_OFFSET UNITYSDK_OFFSET(0xEB9E780)
#define AIBOPLOBAFN_KEPFHEHNMBO_OFFSET UNITYSDK_OFFSET(0xEB9E6F0)
#define AIBOPLOBAFN_KMEBPGNFOAH_OFFSET UNITYSDK_OFFSET(0xEB980B0)
#define AIBOPLOBAFN_LLEAAGIAGOK_OFFSET UNITYSDK_OFFSET(0xEB9DC80)
#define AIBOPLOBAFN_LLONFLOAKFM_OFFSET UNITYSDK_OFFSET(0xEB9E7F0)
#define AIBOPLOBAFN_MBKHJKEAMNG_OFFSET UNITYSDK_OFFSET(0xEB9E3E0)
#define AIBOPLOBAFN_MFNCEODPBND_OFFSET UNITYSDK_OFFSET(0xEB97090)
#define AIBOPLOBAFN_MIFAOKMDILB_OFFSET UNITYSDK_OFFSET(0xEB9E380)
#define AIBOPLOBAFN_MNNBNBLNJMP_OFFSET UNITYSDK_OFFSET(0xEB9E710)
#define AIBOPLOBAFN_MPFFCJCJFCE_OFFSET UNITYSDK_OFFSET(0xEB9D300)
#define AIBOPLOBAFN_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xEB9BDB0)
#define AIBOPLOBAFN_MPFPEEANHFB_OFFSET UNITYSDK_OFFSET(0xEB9E160)
#define AIBOPLOBAFN_MPMFFJJPKEB_OFFSET UNITYSDK_OFFSET(0xEB9E600)
#define AIBOPLOBAFN_NGLLBIJBEAJ_OFFSET UNITYSDK_OFFSET(0xEB9E6E0)
#define AIBOPLOBAFN_NNJNDKBKGKG_OFFSET UNITYSDK_OFFSET(0xEB9E6D0)
#define AIBOPLOBAFN_OAPAALELLDB_OFFSET UNITYSDK_OFFSET(0xEB9B4E0)
#define AIBOPLOBAFN_OBDINOLNELE_OFFSET UNITYSDK_OFFSET(0xEB991E0)
#define AIBOPLOBAFN_OCGDJAMBLFE_OFFSET UNITYSDK_OFFSET(0xEB9D0A0)
#define AIBOPLOBAFN_OCIOEEBKLLL_OFFSET UNITYSDK_OFFSET(0xEB9E190)
#define AIBOPLOBAFN_OMDFNIOCNCN_OFFSET UNITYSDK_OFFSET(0xEB984F0)
#define AIBOPLOBAFN_PALKLBFDFHC_OFFSET UNITYSDK_OFFSET(0xEB96DC0)
#define AIBOPLOBAFN_PIHENOALKNI_OFFSET UNITYSDK_OFFSET(0xEB9E170)
#define AIBOPLOBAFN_PJJNHPDBEFH_OFFSET UNITYSDK_OFFSET(0xEB9DA80)
#define AIBOPLOBAFN_PPJFOGPPGPH_OFFSET UNITYSDK_OFFSET(0xEB9CAE0)
#define AIBOPLOBAFN_SET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xEB9E6C0)

inline static constexpr unsigned int AIBOPLOBAFN_TypeDefinitionIndex = 59384;

	class AIBOPLOBAFN : public ::System::Object
	{
	public:
		::System::String* PKECILLNKPG; // 0x10
		::RPG::Client::IAssetOperation* KEJGDDPIEMJ; // 0x18
		::CCAFCCGAFDG* MHAEBFAEFCG; // 0x20
		::AIBOPLOBAFN* ELIDNMJPMMN; // 0x28
		::RPG::Client::IAssetOperation* JNKMGGMDODJ; // 0x30
		::RPG::RingBuffer_1<::EJFKDHCJNBD*>* HBLMLDHMNGB; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::EJFKDHCJNBD*>* BAPLIPBBGEN; // 0x40
		::BLOKEHHEMEJ* PGDBJPJAJDL; // 0x48
		::BLOKEHHEMEJ* DBOLIENEJBL; // 0x50
		::DHGOECAECHA* DJGECIMJPPP; // 0x58
		::UnityEngine::Object* GJIOBOCEBCM; // 0x60
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x68
		::AIBOPLOBAFN* EAIDJPLPNLM; // 0x70
		::LFPJGOEOLNH* IEGBIPMGBPA; // 0x78
		::System::String* LBMJJOOCCBD; // 0x80
		::FNAIBJPONCC* ANBHFFAKGKG; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* HDBNBHDDABA; // 0x90
		::System::Int32 IBBGCPOCEAL; // 0x98
		::System::Boolean MNGMEKMGJBL; // 0x9C
		::System::Boolean OHDFODHBEBB; // 0x9D
		::System::Boolean EOPGKBNCGBH; // 0x9E
		::System::Boolean NIIOMMAEHAN; // 0x9F
		::System::Boolean MPMMGOKKNGH; // 0xA0
		::System::Boolean ACMNODJCIIC; // 0xA1
		::System::Boolean FCBFHIIDCAL; // 0xA2
		::RPG::Client::GameObjectPoolInUseState EAKFHGMGPAD; // 0xA3
		::System::Single ELEGFCENBGP; // 0xA4
		::UnityEngine::Vector3 MLKDGPOFIML; // 0xA8
		::System::Int32 ECLCLPCPDJI; // 0xB4
		::System::Int32 FCFBGEAMLGN; // 0xB8
		::UnityEngine::Quaternion DOFHBCBIIAN; // 0xBC
		::RPG::Client::PoolGameObjectInstantiateStrategy JJOFIKOODCJ; // 0xCC
		::System::UInt32 OJHDELHCCPE; // 0xD0
		::System::Boolean NGEAMIJPNHG; // 0xD4
		::System::Boolean _AutoSetRootActive_k__BackingField; // 0xD5
		::System::Boolean FIIHCGCCLNL; // 0xD6
		::System::Boolean IDEGDLDCMBE; // 0xD7
		::System::Boolean HEPHMMCDDFM; // 0xD8
		::System::Boolean CMGBCHMFAFF; // 0xD9
		::System::Byte _padding0[0x2];
		::System::Int32 KHNNFPPOMCL; // 0xDC
		::UnityEngine::Vector3 OCHONDFPDNM; // 0xE0
		static ::RPG::Client::RPGProfilerMarker** StaticGet_DKDPOHBNDMF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CB0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NGOKFEAEPJF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CB8);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_EHGBEBKOJAG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CC0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMAGCCMGGC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CC8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FKMFOODCDEO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CD0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_HELJLEMBCMH()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x57CD8);
		}

		// static const ::System::Object JCKGLILCIIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CCTOR_OFFSET))();
		}

		static ::AIBOPLOBAFN* COKMDIMBLHN(::LFPJGOEOLNH* a1, ::CCAFCCGAFDG* a2, ::System::String* a3)
		{
			return ((::AIBOPLOBAFN*(*)(::LFPJGOEOLNH*, ::CCAFCCGAFDG*, ::System::String*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_COKMDIMBLHN_OFFSET))(a1, a2, a3);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void AIEHMLPBHCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_AIEHMLPBHCG_OFFSET))(this);
		}

		::System::Void FEADNMNABOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FEADNMNABOL_OFFSET))(this);
		}

		::System::Void GPGEGILOHLC(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GPGEGILOHLC_OFFSET))(this, a1, a2);
		}

		::System::Void DENGPLOEJDA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DENGPLOEJDA_OFFSET))(this, a1);
		}

		::System::Void GBDGCPBIBBG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GBDGCPBIBBG_OFFSET))(this, a1);
		}

		::System::Void MFNCEODPBND(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MFNCEODPBND_OFFSET))(this, a1);
		}

		::System::Void HKEPJLDBGIG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void DOEBDMHLPMN(::System::Int32 a1, ::DHGOECAECHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::DHGOECAECHA*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DOEBDMHLPMN_OFFSET))(this, a1, a2);
		}

		::System::Void GKJBHMGNAKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GKJBHMGNAKE_OFFSET))(this);
		}

		::System::Boolean CAPPAHPLNMH(::BLOKEHHEMEJ* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLOKEHHEMEJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CAPPAHPLNMH_OFFSET))(this, a1, a2);
		}

		::System::Boolean HBBMILGKDMK(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_HBBMILGKDMK_OFFSET))(this, a1);
		}

		::System::Boolean OBDINOLNELE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_OBDINOLNELE_OFFSET))(this);
		}

		::System::Void GJGJJHIMJEH(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GJGJJHIMJEH_OFFSET))(this, a1);
		}

		::System::Void INIIODBAHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_INIIODBAHCI_OFFSET))(this);
		}

		::System::Void GGKILJPEJFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GGKILJPEJFJ_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* HLMODIIEGCE()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_HLMODIIEGCE_OFFSET))(this);
		}

		static ::System::Boolean KDGKKJLBOMP(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_KDGKKJLBOMP_OFFSET))(a1);
		}

		::System::Boolean IBDKFBJMGCL(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IBDKFBJMGCL_OFFSET))(this, a1);
		}

		::System::Void BNCDOBFLNNE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_BNCDOBFLNNE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* INIJCJJLPKM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_INIJCJJLPKM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* INIJCJJLPKM_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_INIJCJJLPKM_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 IFLHPAFDBOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IFLHPAFDBOD_OFFSET))(this);
		}

		::System::Void FMOPFGKPAFB(::LEKNHIPIKCF* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::LEKNHIPIKCF*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FMOPFGKPAFB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JCJGMDAOIPN(::LEKNHIPIKCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEKNHIPIKCF*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_JCJGMDAOIPN_OFFSET))(this, a1);
		}

		::System::Void FMOPFGKPAFB_1(::System::Action* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FMOPFGKPAFB_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JCJGMDAOIPN_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_JCJGMDAOIPN_1_OFFSET))(this, a1);
		}

		::System::Boolean OAPAALELLDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_OAPAALELLDB_OFFSET))(this);
		}

		::System::Void FFJBKGMEJKB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FFJBKGMEJKB_OFFSET))(this, a1);
		}

		::System::Void KCDJGMKJOLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_KCDJGMKJOLI_OFFSET))(this);
		}

		::System::Void IMCNJGFIOPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IMCNJGFIOPC_OFFSET))(this);
		}

		::System::Boolean MPFKCHHCIMO(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MPFKCHHCIMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DKNKIICLNPO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DKNKIICLNPO_OFFSET))(this, a1);
		}

		::System::Void CLMPAJFNDGJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CLMPAJFNDGJ_OFFSET))(this, a1);
		}

		::System::Boolean PPJFOGPPGPH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_PPJFOGPPGPH_OFFSET))(this, a1);
		}

		::System::Void CHCJJNGFPFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CHCJJNGFPFK_OFFSET))(this);
		}

		::System::Int32 OCGDJAMBLFE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_OCGDJAMBLFE_OFFSET))(this);
		}

		::System::Int32 DDIIFEHGNNG(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DDIIFEHGNNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PALKLBFDFHC(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_PALKLBFDFHC_OFFSET))(this, a1, a2);
		}

		::System::Void DHFNJIHGIDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DHFNJIHGIDJ_OFFSET))(this);
		}

		::System::Void DIMEGMFFPOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DIMEGMFFPOB_OFFSET))(this);
		}

		::System::Void MPFFCJCJFCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MPFFCJCJFCE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::EJFKDHCJNBD*>* PJJNHPDBEFH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::EJFKDHCJNBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_PJJNHPDBEFH_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::EJFKDHCJNBD*>* FPHKAGEJFGE()
		{
			return ((::System::Collections::Generic::IList_1<::EJFKDHCJNBD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FPHKAGEJFGE_OFFSET))(this);
		}

		::EJFKDHCJNBD* AGFNLOFEOLH(::UnityEngine::GameObject* a1)
		{
			return ((::EJFKDHCJNBD*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_AGFNLOFEOLH_OFFSET))(this, a1);
		}

		::EJFKDHCJNBD* OMDFNIOCNCN(::UnityEngine::Transform* a1)
		{
			return ((::EJFKDHCJNBD*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_OMDFNIOCNCN_OFFSET))(this, a1);
		}

		::System::Boolean KMEBPGNFOAH(::UnityEngine::Transform* a1, ::EJFKDHCJNBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::EJFKDHCJNBD*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_KMEBPGNFOAH_OFFSET))(this, a1, a2);
		}

		::System::Void IKCLHKANEID(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3, ::EJFKDHCJNBD* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::EJFKDHCJNBD*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IKCLHKANEID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IMJGAEHILOC(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IMJGAEHILOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBPGCDGKDGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_EBPGCDGKDGI_OFFSET))(this);
		}

		::System::Boolean LLEAAGIAGOK(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_LLEAAGIAGOK_OFFSET))(this, a1);
		}

		::RPG::Client::GameObjectPoolUsage ADJFIEOHHJB()
		{
			return ((::RPG::Client::GameObjectPoolUsage(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_ADJFIEOHHJB_OFFSET))(this);
		}

		::LFPJGOEOLNH* MPFPEEANHFB()
		{
			return ((::LFPJGOEOLNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MPFPEEANHFB_OFFSET))(this);
		}

		::CCAFCCGAFDG* PIHENOALKNI()
		{
			return ((::CCAFCCGAFDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_PIHENOALKNI_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_JDKCDJNJAOL_OFFSET))(this);
		}

		::System::Boolean OCIOEEBKLLL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_OCIOEEBKLLL_OFFSET))(this);
		}

		::System::Boolean FHJFELDPHAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FHJFELDPHAJ_OFFSET))(this);
		}

		::System::Boolean ILINNFMGMDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_ILINNFMGMDN_OFFSET))(this);
		}

		::System::Boolean IHPDHGJDNNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IHPDHGJDNNL_OFFSET))(this);
		}

		::System::Int32 MIFAOKMDILB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MIFAOKMDILB_OFFSET))(this);
		}

		::System::Int32 FOOHMBKENCH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FOOHMBKENCH_OFFSET))(this);
		}

		::System::Int32 MBKHJKEAMNG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MBKHJKEAMNG_OFFSET))(this);
		}

		::System::Single IAKFNFNHBMC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IAKFNFNHBMC_OFFSET))(this);
		}

		::System::Single APNCIAELBMM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_APNCIAELBMM_OFFSET))(this);
		}

		::System::Int32 EDJGMILLLMH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_EDJGMILLLMH_OFFSET))(this);
		}

		::System::String* IOKLLBPGFJM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_IOKLLBPGFJM_OFFSET))(this);
		}

		::System::String* GFGACMDHLJF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GFGACMDHLJF_OFFSET))(this);
		}

		::UnityEngine::GameObject* FEODGEHFNGP()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FEODGEHFNGP_OFFSET))(this);
		}

		::System::Boolean MPMFFJJPKEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MPMFFJJPKEB_OFFSET))(this);
		}

		::System::Void DEBLNBBOAMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DEBLNBBOAMG_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoSetRootActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_GET_AUTOSETROOTACTIVE_OFFSET))(this);
		}

		::System::Void set_AutoSetRootActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_SET_AUTOSETROOTACTIVE_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* NNJNDKBKGKG()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_NNJNDKBKGKG_OFFSET))(this);
		}

		::System::Boolean NGLLBIJBEAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_NGLLBIJBEAJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 KEPFHEHNMBO()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_KEPFHEHNMBO_OFFSET))(this);
		}

		::UnityEngine::Vector3 MNNBNBLNJMP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_MNNBNBLNJMP_OFFSET))(this);
		}

		::UnityEngine::Quaternion CPAHHCKGKDC()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_CPAHHCKGKDC_OFFSET))(this);
		}

		::RPG::Client::PoolGameObjectInstantiateStrategy ICCFGLIOMNK()
		{
			return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_ICCFGLIOMNK_OFFSET))(this);
		}

		::RPG::Client::GameObjectPoolInUseState BHBJOMHPOGA()
		{
			return ((::RPG::Client::GameObjectPoolInUseState(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_BHBJOMHPOGA_OFFSET))(this);
		}

		::AIBOPLOBAFN* DOCGBKOBADI()
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_DOCGBKOBADI_OFFSET))(this);
		}

		::AIBOPLOBAFN* JMDAONOGNFM()
		{
			return ((::AIBOPLOBAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_JMDAONOGNFM_OFFSET))(this);
		}

		::System::Void KEACEPDABHJ(::AIBOPLOBAFN* a1, ::AIBOPLOBAFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_KEACEPDABHJ_OFFSET))(this, a1, a2);
		}

		::System::Void LLONFLOAKFM(::AIBOPLOBAFN* a1, ::AIBOPLOBAFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIBOPLOBAFN*, ::AIBOPLOBAFN*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_LLONFLOAKFM_OFFSET))(this, a1, a2);
		}

	};
