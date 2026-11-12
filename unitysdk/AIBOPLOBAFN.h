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
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define AIBOPLOBAFN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xF1560E0)
#define AIBOPLOBAFN_ADJFIEOHHJB_OFFSET UNITYSDK_OFFSET(0xF15D760)
#define AIBOPLOBAFN_AGFNLOFEOLH_OFFSET UNITYSDK_OFFSET(0xF15D150)
#define AIBOPLOBAFN_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0xF1562A0)
#define AIBOPLOBAFN_APNCIAELBMM_OFFSET UNITYSDK_OFFSET(0xF15DB30)
#define AIBOPLOBAFN_BHBJOMHPOGA_OFFSET UNITYSDK_OFFSET(0xF15DD80)
#define AIBOPLOBAFN_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0xF156260)
#define AIBOPLOBAFN_BNCDOBFLNNE_OFFSET UNITYSDK_OFFSET(0xF158AD0)
#define AIBOPLOBAFN_CAPPAHPLNMH_OFFSET UNITYSDK_OFFSET(0xF157070)
#define AIBOPLOBAFN_CCTOR_OFFSET UNITYSDK_OFFSET(0xF15DED0)
#define AIBOPLOBAFN_CHCJJNGFPFK_OFFSET UNITYSDK_OFFSET(0xF15C280)
#define AIBOPLOBAFN_CLMPAJFNDGJ_OFFSET UNITYSDK_OFFSET(0xF15BF80)
#define AIBOPLOBAFN_COKMDIMBLHN_OFFSET UNITYSDK_OFFSET(0xF155EE0)
#define AIBOPLOBAFN_CPAHHCKGKDC_OFFSET UNITYSDK_OFFSET(0xF15DD60)
#define AIBOPLOBAFN_CTOR_OFFSET UNITYSDK_OFFSET(0xF155D80)
#define AIBOPLOBAFN_DDIIFEHGNNG_OFFSET UNITYSDK_OFFSET(0xF15C7B0)
#define AIBOPLOBAFN_DEBLNBBOAMG_OFFSET UNITYSDK_OFFSET(0xF15DCD0)
#define AIBOPLOBAFN_DENGPLOEJDA_OFFSET UNITYSDK_OFFSET(0xF156AB0)
#define AIBOPLOBAFN_DHFNJIHGIDJ_OFFSET UNITYSDK_OFFSET(0xF15C8D0)
#define AIBOPLOBAFN_DIMEGMFFPOB_OFFSET UNITYSDK_OFFSET(0xF15A1E0)
#define AIBOPLOBAFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF156140)
#define AIBOPLOBAFN_DKNKIICLNPO_OFFSET UNITYSDK_OFFSET(0xF15BE90)
#define AIBOPLOBAFN_DOCGBKOBADI_OFFSET UNITYSDK_OFFSET(0xF15DD90)
#define AIBOPLOBAFN_DOEBDMHLPMN_OFFSET UNITYSDK_OFFSET(0xF156F70)
#define AIBOPLOBAFN_EBPGCDGKDGI_OFFSET UNITYSDK_OFFSET(0xF15CF90)
#define AIBOPLOBAFN_EDJGMILLLMH_OFFSET UNITYSDK_OFFSET(0xF15DBB0)
#define AIBOPLOBAFN_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0xF1562F0)
#define AIBOPLOBAFN_FEODGEHFNGP_OFFSET UNITYSDK_OFFSET(0xF15DC40)
#define AIBOPLOBAFN_FFJBKGMEJKB_OFFSET UNITYSDK_OFFSET(0xF15B320)
#define AIBOPLOBAFN_FHJFELDPHAJ_OFFSET UNITYSDK_OFFSET(0xF15D850)
#define AIBOPLOBAFN_FMOPFGKPAFB_1_OFFSET UNITYSDK_OFFSET(0xF15A2D0)
#define AIBOPLOBAFN_FMOPFGKPAFB_OFFSET UNITYSDK_OFFSET(0xF159740)
#define AIBOPLOBAFN_FOOHMBKENCH_OFFSET UNITYSDK_OFFSET(0xF15D9E0)
#define AIBOPLOBAFN_FPHKAGEJFGE_OFFSET UNITYSDK_OFFSET(0xF15D110)
#define AIBOPLOBAFN_GBDGCPBIBBG_OFFSET UNITYSDK_OFFSET(0xF156B10)
#define AIBOPLOBAFN_GET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xF15DCE0)
#define AIBOPLOBAFN_GFGACMDHLJF_OFFSET UNITYSDK_OFFSET(0xF15DC30)
#define AIBOPLOBAFN_GGKILJPEJFJ_OFFSET UNITYSDK_OFFSET(0xF157720)
#define AIBOPLOBAFN_GJGJJHIMJEH_OFFSET UNITYSDK_OFFSET(0xF158D30)
#define AIBOPLOBAFN_GKJBHMGNAKE_OFFSET UNITYSDK_OFFSET(0xF157020)
#define AIBOPLOBAFN_GPGEGILOHLC_OFFSET UNITYSDK_OFFSET(0xF156340)
#define AIBOPLOBAFN_HBBMILGKDMK_OFFSET UNITYSDK_OFFSET(0xF156C50)
#define AIBOPLOBAFN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xF156BD0)
#define AIBOPLOBAFN_HLMODIIEGCE_OFFSET UNITYSDK_OFFSET(0xF159020)
#define AIBOPLOBAFN_IAKFNFNHBMC_OFFSET UNITYSDK_OFFSET(0xF15DA90)
#define AIBOPLOBAFN_IBDKFBJMGCL_OFFSET UNITYSDK_OFFSET(0xF159200)
#define AIBOPLOBAFN_ICCFGLIOMNK_OFFSET UNITYSDK_OFFSET(0xF15DD70)
#define AIBOPLOBAFN_IFLHPAFDBOD_OFFSET UNITYSDK_OFFSET(0xF1596E0)
#define AIBOPLOBAFN_IHPDHGJDNNL_OFFSET UNITYSDK_OFFSET(0xF158AC0)
#define AIBOPLOBAFN_IKCLHKANEID_OFFSET UNITYSDK_OFFSET(0xF1586B0)
#define AIBOPLOBAFN_ILINNFMGMDN_OFFSET UNITYSDK_OFFSET(0xF15D8B0)
#define AIBOPLOBAFN_IMCNJGFIOPC_OFFSET UNITYSDK_OFFSET(0xF15B3E0)
#define AIBOPLOBAFN_IMJGAEHILOC_OFFSET UNITYSDK_OFFSET(0xF158420)
#define AIBOPLOBAFN_INIIODBAHCI_OFFSET UNITYSDK_OFFSET(0xF156430)
#define AIBOPLOBAFN_INIJCJJLPKM_1_OFFSET UNITYSDK_OFFSET(0xF1593F0)
#define AIBOPLOBAFN_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xF159360)
#define AIBOPLOBAFN_IOKLLBPGFJM_OFFSET UNITYSDK_OFFSET(0xF15DC20)
#define AIBOPLOBAFN_JCJGMDAOIPN_1_OFFSET UNITYSDK_OFFSET(0xF15AA70)
#define AIBOPLOBAFN_JCJGMDAOIPN_OFFSET UNITYSDK_OFFSET(0xF15A010)
#define AIBOPLOBAFN_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xF15D7D0)
#define AIBOPLOBAFN_JMDAONOGNFM_OFFSET UNITYSDK_OFFSET(0xF15DDA0)
#define AIBOPLOBAFN_KCDJGMKJOLI_OFFSET UNITYSDK_OFFSET(0xF15B3A0)
#define AIBOPLOBAFN_KDGKKJLBOMP_OFFSET UNITYSDK_OFFSET(0xF159090)
#define AIBOPLOBAFN_KEACEPDABHJ_OFFSET UNITYSDK_OFFSET(0xF15DDB0)
#define AIBOPLOBAFN_KEPFHEHNMBO_OFFSET UNITYSDK_OFFSET(0xF15DD20)
#define AIBOPLOBAFN_KMEBPGNFOAH_OFFSET UNITYSDK_OFFSET(0xF157AD0)
#define AIBOPLOBAFN_LLEAAGIAGOK_OFFSET UNITYSDK_OFFSET(0xF15D2D0)
#define AIBOPLOBAFN_LLONFLOAKFM_OFFSET UNITYSDK_OFFSET(0xF15DE20)
#define AIBOPLOBAFN_MBKHJKEAMNG_OFFSET UNITYSDK_OFFSET(0xF15DA40)
#define AIBOPLOBAFN_MFNCEODPBND_OFFSET UNITYSDK_OFFSET(0xF156B70)
#define AIBOPLOBAFN_MIFAOKMDILB_OFFSET UNITYSDK_OFFSET(0xF15D9D0)
#define AIBOPLOBAFN_MNNBNBLNJMP_OFFSET UNITYSDK_OFFSET(0xF15DD40)
#define AIBOPLOBAFN_MPFFCJCJFCE_OFFSET UNITYSDK_OFFSET(0xF15C930)
#define AIBOPLOBAFN_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0xF15B430)
#define AIBOPLOBAFN_MPFPEEANHFB_OFFSET UNITYSDK_OFFSET(0xF15D7B0)
#define AIBOPLOBAFN_MPMFFJJPKEB_OFFSET UNITYSDK_OFFSET(0xF15DC60)
#define AIBOPLOBAFN_NGLLBIJBEAJ_OFFSET UNITYSDK_OFFSET(0xF15DD10)
#define AIBOPLOBAFN_NNJNDKBKGKG_OFFSET UNITYSDK_OFFSET(0xF15DD00)
#define AIBOPLOBAFN_OAPAALELLDB_OFFSET UNITYSDK_OFFSET(0xF15ACB0)
#define AIBOPLOBAFN_OBDINOLNELE_OFFSET UNITYSDK_OFFSET(0xF158C00)
#define AIBOPLOBAFN_OCGDJAMBLFE_OFFSET UNITYSDK_OFFSET(0xF15C6D0)
#define AIBOPLOBAFN_OCIOEEBKLLL_OFFSET UNITYSDK_OFFSET(0xF15D7E0)
#define AIBOPLOBAFN_OMDFNIOCNCN_OFFSET UNITYSDK_OFFSET(0xF157F10)
#define AIBOPLOBAFN_PALKLBFDFHC_OFFSET UNITYSDK_OFFSET(0xF1568A0)
#define AIBOPLOBAFN_PIHENOALKNI_OFFSET UNITYSDK_OFFSET(0xF15D7C0)
#define AIBOPLOBAFN_PJJNHPDBEFH_OFFSET UNITYSDK_OFFSET(0xF15D0C0)
#define AIBOPLOBAFN_PPJFOGPPGPH_OFFSET UNITYSDK_OFFSET(0xF15C100)
#define AIBOPLOBAFN_SET_AUTOSETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0xF15DCF0)

inline static constexpr unsigned int AIBOPLOBAFN_TypeDefinitionIndex = 60661;

	class AIBOPLOBAFN : public ::System::Object
	{
	public:
		::UnityEngine::Object* GJIOBOCEBCM; // 0x10
		::System::String* LBMJJOOCCBD; // 0x18
		::RPG::RingBuffer_1<::EJFKDHCJNBD*>* HBLMLDHMNGB; // 0x20
		::AIBOPLOBAFN* ELIDNMJPMMN; // 0x28
		::LFPJGOEOLNH* IEGBIPMGBPA; // 0x30
		::System::String* PKECILLNKPG; // 0x38
		::RPG::Client::IAssetOperation* JNKMGGMDODJ; // 0x40
		::AIBOPLOBAFN* EAIDJPLPNLM; // 0x48
		::DHGOECAECHA* DJGECIMJPPP; // 0x50
		::RPG::Client::IAssetOperation* KEJGDDPIEMJ; // 0x58
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x60
		::BLOKEHHEMEJ* DBOLIENEJBL; // 0x68
		::BLOKEHHEMEJ* PGDBJPJAJDL; // 0x70
		::CCAFCCGAFDG* MHAEBFAEFCG; // 0x78
		::FNAIBJPONCC* ANBHFFAKGKG; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* HDBNBHDDABA; // 0x88
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::EJFKDHCJNBD*>* BAPLIPBBGEN; // 0x90
		::UnityEngine::Vector3 OCHONDFPDNM; // 0x98
		::System::Boolean MPMMGOKKNGH; // 0xA4
		::System::Boolean FCBFHIIDCAL; // 0xA5
		::System::Byte _padding0[0x2];
		::System::Single ELEGFCENBGP; // 0xA8
		::RPG::Client::PoolGameObjectInstantiateStrategy JJOFIKOODCJ; // 0xAC
		::System::Boolean OHDFODHBEBB; // 0xB0
		::System::Boolean ACMNODJCIIC; // 0xB1
		::System::Boolean MNGMEKMGJBL; // 0xB2
		::System::Boolean _AutoSetRootActive_k__BackingField; // 0xB3
		::System::Int32 IBBGCPOCEAL; // 0xB4
		::System::Int32 FCFBGEAMLGN; // 0xB8
		::System::Int32 ECLCLPCPDJI; // 0xBC
		::UnityEngine::Quaternion DOFHBCBIIAN; // 0xC0
		::UnityEngine::Vector3 MLKDGPOFIML; // 0xD0
		::System::Int32 KHNNFPPOMCL; // 0xDC
		::System::UInt32 OJHDELHCCPE; // 0xE0
		::System::Boolean IDEGDLDCMBE; // 0xE4
		::System::Boolean CMGBCHMFAFF; // 0xE5
		::System::Boolean HEPHMMCDDFM; // 0xE6
		::System::Boolean FIIHCGCCLNL; // 0xE7
		::System::Boolean NGEAMIJPNHG; // 0xE8
		::System::Boolean NIIOMMAEHAN; // 0xE9
		::RPG::Client::GameObjectPoolInUseState EAKFHGMGPAD; // 0xEA
		::System::Boolean EOPGKBNCGBH; // 0xEB
		static ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>** StaticGet_EHGBEBKOJAG()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::GameObject*>**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53830);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_JGFMMGDBNPK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53838);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NGOKFEAEPJF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53840);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_HELJLEMBCMH()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53848);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DKDPOHBNDMF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53850);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_OFECKJCGBCL()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53858);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_CIMAGCCMGGC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53860);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FKMFOODCDEO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "AIBOPLOBAFN")->GetStaticField(0x53868);
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

		::System::Void FMOPFGKPAFB_1(::System::Action_1<::UnityEngine::GameObject*>* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_FMOPFGKPAFB_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JCJGMDAOIPN_1(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + AIBOPLOBAFN_JCJGMDAOIPN_1_OFFSET))(this, a1);
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
