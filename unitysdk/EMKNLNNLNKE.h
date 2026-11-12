#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKDDEOLBGEI.h"
#include "unitysdk/IBDBGGMIBEE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ABFAAKFMJIO;
class BABNOKHOBCF;
class DNFFEFPKDPC;
class HFCPGANBGMI;
class INMMPMDELKE;
class JAODHHPIKGJ;
class MNCOPNHONHO;
class OMAFNEHLDED;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMKNLNNLNKE_AAKNAHCILFA_OFFSET UNITYSDK_OFFSET(0x1649DCB0)
#define EMKNLNNLNKE_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1649C4D0)
#define EMKNLNNLNKE_AMAEPOLHMLG_OFFSET UNITYSDK_OFFSET(0x16499380)
#define EMKNLNNLNKE_AMFCJPOOEOB_OFFSET UNITYSDK_OFFSET(0x1649F890)
#define EMKNLNNLNKE_AMOMFEOMGIB_OFFSET UNITYSDK_OFFSET(0x16498EA0)
#define EMKNLNNLNKE_AMPIMJJBKBE_OFFSET UNITYSDK_OFFSET(0x1649C190)
#define EMKNLNNLNKE_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x164A0230)
#define EMKNLNNLNKE_BMCPNCOMPIN_OFFSET UNITYSDK_OFFSET(0x1649FF70)
#define EMKNLNNLNKE_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0x164A07D0)
#define EMKNLNNLNKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x164A14F0)
#define EMKNLNNLNKE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1649C2D0)
#define EMKNLNNLNKE_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1649C330)
#define EMKNLNNLNKE_CMFIKHEIOHF_OFFSET UNITYSDK_OFFSET(0x16498C60)
#define EMKNLNNLNKE_CTOR_OFFSET UNITYSDK_OFFSET(0x164A14E0)
#define EMKNLNNLNKE_DBOONNEOHLG_OFFSET UNITYSDK_OFFSET(0x164A00D0)
#define EMKNLNNLNKE_DGHLCFLEJFC_OFFSET UNITYSDK_OFFSET(0x1649DF60)
#define EMKNLNNLNKE_DJKCJIAJMNG_OFFSET UNITYSDK_OFFSET(0x164991D0)
#define EMKNLNNLNKE_EAJFJPFGBAD_OFFSET UNITYSDK_OFFSET(0x164A1490)
#define EMKNLNNLNKE_EMFNMGPILDD_OFFSET UNITYSDK_OFFSET(0x1649E780)
#define EMKNLNNLNKE_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x164A1430)
#define EMKNLNNLNKE_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1649E580)
#define EMKNLNNLNKE_FMMBPPMFDMG_OFFSET UNITYSDK_OFFSET(0x1649E360)
#define EMKNLNNLNKE_FNKDGGAJFIH_OFFSET UNITYSDK_OFFSET(0x16495BC0)
#define EMKNLNNLNKE_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0x164A0590)
#define EMKNLNNLNKE_GCGIEKJKENH_OFFSET UNITYSDK_OFFSET(0x1649C610)
#define EMKNLNNLNKE_GJJHPJENLHO_OFFSET UNITYSDK_OFFSET(0x16499120)
#define EMKNLNNLNKE_GMABPIDBNJB_OFFSET UNITYSDK_OFFSET(0x16493730)
#define EMKNLNNLNKE_HAMPOKCIBEC_OFFSET UNITYSDK_OFFSET(0x1649C470)
#define EMKNLNNLNKE_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x1649CDC0)
#define EMKNLNNLNKE_HCNCEGNHEAI_OFFSET UNITYSDK_OFFSET(0x164959A0)
#define EMKNLNNLNKE_HEIGGAJDNKP_OFFSET UNITYSDK_OFFSET(0x1649CBA0)
#define EMKNLNNLNKE_HGBEPDIPMKK_OFFSET UNITYSDK_OFFSET(0x16498650)
#define EMKNLNNLNKE_HGGKGALGAEG_OFFSET UNITYSDK_OFFSET(0x16495B20)
#define EMKNLNNLNKE_HLGPIAMPANI_OFFSET UNITYSDK_OFFSET(0x1649EC20)
#define EMKNLNNLNKE_HNFDGDIGJDM_OFFSET UNITYSDK_OFFSET(0x16497810)
#define EMKNLNNLNKE_HNFICKLHGOF_OFFSET UNITYSDK_OFFSET(0x16496DA0)
#define EMKNLNNLNKE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1649CCC0)
#define EMKNLNNLNKE_IPMCHJGHHMG_OFFSET UNITYSDK_OFFSET(0x164A0B80)
#define EMKNLNNLNKE_JIJOKFAKKME_OFFSET UNITYSDK_OFFSET(0x164A1440)
#define EMKNLNNLNKE_JLOGBMOCILO_OFFSET UNITYSDK_OFFSET(0x16495A60)
#define EMKNLNNLNKE_JOBHMFOJODH_1_OFFSET UNITYSDK_OFFSET(0x1649E470)
#define EMKNLNNLNKE_JOBHMFOJODH_OFFSET UNITYSDK_OFFSET(0x1649E3B0)
#define EMKNLNNLNKE_KAGFOCAPPMJ_OFFSET UNITYSDK_OFFSET(0x164957A0)
#define EMKNLNNLNKE_KDCEELIFNOA_OFFSET UNITYSDK_OFFSET(0x164A1140)
#define EMKNLNNLNKE_KLLJONJCOFD_OFFSET UNITYSDK_OFFSET(0x164A0FB0)
#define EMKNLNNLNKE_KMJLBKNOEDD_OFFSET UNITYSDK_OFFSET(0x1649C200)
#define EMKNLNNLNKE_KNMMDAOGPCL_1_OFFSET UNITYSDK_OFFSET(0x164A1280)
#define EMKNLNNLNKE_KNMMDAOGPCL_OFFSET UNITYSDK_OFFSET(0x164A1200)
#define EMKNLNNLNKE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1649BE50)
#define EMKNLNNLNKE_LBHHFBCBDGO_OFFSET UNITYSDK_OFFSET(0x164956E0)
#define EMKNLNNLNKE_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x1649D3B0)
#define EMKNLNNLNKE_LJBJFECCLNP_OFFSET UNITYSDK_OFFSET(0x1649F3D0)
#define EMKNLNNLNKE_LNEDNDACLOG_OFFSET UNITYSDK_OFFSET(0x1649CC70)
#define EMKNLNNLNKE_MBGHIIAJMGD_OFFSET UNITYSDK_OFFSET(0x1649DD10)
#define EMKNLNNLNKE_MCNAHCLCEAD_OFFSET UNITYSDK_OFFSET(0x1649DE20)
#define EMKNLNNLNKE_MEIDNKELODC_OFFSET UNITYSDK_OFFSET(0x16495C50)
#define EMKNLNNLNKE_MGKKEFBDPKD_OFFSET UNITYSDK_OFFSET(0x1649EE40)
#define EMKNLNNLNKE_MNCJOFFKLFB_OFFSET UNITYSDK_OFFSET(0x164A1310)
#define EMKNLNNLNKE_NGDCOLPIOEI_OFFSET UNITYSDK_OFFSET(0x164A0A40)
#define EMKNLNNLNKE_NJCMDMFEHLE_OFFSET UNITYSDK_OFFSET(0x1649D980)
#define EMKNLNNLNKE_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x1649E5D0)
#define EMKNLNNLNKE_NNFAEMDBIHC_OFFSET UNITYSDK_OFFSET(0x1649E620)
#define EMKNLNNLNKE_NNGIFFCGBAB_OFFSET UNITYSDK_OFFSET(0x164A0D00)
#define EMKNLNNLNKE_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0x1649D040)
#define EMKNLNNLNKE_OLAHPMJBCOO_OFFSET UNITYSDK_OFFSET(0x164969D0)
#define EMKNLNNLNKE_OLMBDJFMIGO_OFFSET UNITYSDK_OFFSET(0x164A10C0)
#define EMKNLNNLNKE_OOPCNBIGBFA_OFFSET UNITYSDK_OFFSET(0x164A0020)
#define EMKNLNNLNKE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1649CD60)
#define EMKNLNNLNKE_PBHNKOHNJEO_OFFSET UNITYSDK_OFFSET(0x164992E0)
#define EMKNLNNLNKE_PFNAKEOGPJI_OFFSET UNITYSDK_OFFSET(0x164A13A0)
#define EMKNLNNLNKE_PGELBMBFCPJ_OFFSET UNITYSDK_OFFSET(0x16497A80)

inline static constexpr unsigned int EMKNLNNLNKE_TypeDefinitionIndex = 79118;

	class EMKNLNNLNKE : public ::IBDBGGMIBEE
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::INMMPMDELKE* ICHEDAEHEBG; // 0x20
		::ABFAAKFMJIO* GPOMDNANGGF; // 0x28
		::BABNOKHOBCF* FKINCGODJEP; // 0x30
		::DKDDEOLBGEI AOFHJEEGGDP; // 0x38
		::System::Single KHNNILONNGB; // 0x70
		::System::Single KGOOMCJJCMJ; // 0x74
		::System::Single NCGAABNBIEC; // 0x78
		::System::Single OMDIILGIIKE; // 0x7C
		::System::Single NGAEFBKNNGO; // 0x80
		::System::Single JPGNFBLFMAA; // 0x84
		::System::Single DGBHFJGKNEI; // 0x88
		::System::Single MPFEKLNFEOC; // 0x8C
		::UnityEngine::Vector3 IJILCGBIKNH; // 0x90
		::System::Single KEFHLFIMNGL; // 0x9C
		::System::Single GBKPLAHALHE; // 0xA0
		static ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>** StaticGet_LAEGDOCDNFD()
		{
			return (::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD10);
		}

		static ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>** StaticGet_IBBANLMKOKA()
		{
			return (::System::Collections::Generic::List_1<::DNFFEFPKDPC*>**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD18);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FOMMJMGPOHI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD20);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_AIPFDPGDBOI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD28);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_PPGPJAGIFAF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD30);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD38);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_NEOHMKJCDGG()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD40);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_DGGOIEMNNPE()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x2AD48);
		}

		static ::System::UInt32* StaticGet_LADBHBJFBME()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "EMKNLNNLNKE")->GetStaticField(0x8C90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKNLNNLNKE_CCTOR_OFFSET))();
		}

		::System::Void GMABPIDBNJB(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_GMABPIDBNJB_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCNCEGNHEAI(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HCNCEGNHEAI_OFFSET))(this, a1);
		}

		::System::Boolean LBHHFBCBDGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_LBHHFBCBDGO_OFFSET))(this);
		}

		::System::Boolean KAGFOCAPPMJ(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KAGFOCAPPMJ_OFFSET))(this, a1);
		}

		::System::Boolean JLOGBMOCILO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_JLOGBMOCILO_OFFSET))(this);
		}

		::System::Boolean HGGKGALGAEG(::JAODHHPIKGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HGGKGALGAEG_OFFSET))(this, a1);
		}

		::System::Boolean FNKDGGAJFIH(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_FNKDGGAJFIH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MEIDNKELODC(::JAODHHPIKGJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JAODHHPIKGJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_MEIDNKELODC_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 OLAHPMJBCOO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_OLAHPMJBCOO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HNFICKLHGOF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::DNFFEFPKDPC* a3, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::DNFFEFPKDPC*, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HNFICKLHGOF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HNFDGDIGJDM(::DNFFEFPKDPC* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::UnityEngine::Vector3, ::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HNFDGDIGJDM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGELBMBFCPJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_PGELBMBFCPJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean AMOMFEOMGIB(::JAODHHPIKGJ* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAODHHPIKGJ*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AMOMFEOMGIB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HGBEPDIPMKK(::JAODHHPIKGJ* a1, ::System::Boolean a2, ::DNFFEFPKDPC* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean, ::DNFFEFPKDPC*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HGBEPDIPMKK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AMAEPOLHMLG(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AMAEPOLHMLG_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_CLEAR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void GCGIEKJKENH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_GCGIEKJKENH_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::System::Void LFIFIEGFMOM(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_LFIFIEGFMOM_OFFSET))(this, a1, a2);
		}

		::System::Void NJCMDMFEHLE(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_NJCMDMFEHLE_OFFSET))(this, a1, a2);
		}

		::System::Void AAKNAHCILFA(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AAKNAHCILFA_OFFSET))(this, a1, a2);
		}

		::System::Void MBGHIIAJMGD(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_MBGHIIAJMGD_OFFSET))(this, a1, a2);
		}

		::System::Void MCNAHCLCEAD(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_MCNAHCLCEAD_OFFSET))(this, a1, a2);
		}

		::System::Void DGHLCFLEJFC(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_DGHLCFLEJFC_OFFSET))(this, a1, a2);
		}

		::System::Void FMMBPPMFDMG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_FMMBPPMFDMG_OFFSET))(this, a1);
		}

		::System::Boolean JOBHMFOJODH(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_JOBHMFOJODH_OFFSET))(this, a1);
		}

		::System::Boolean JOBHMFOJODH_1(::JAODHHPIKGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_JOBHMFOJODH_1_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void NNFAEMDBIHC(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_NNFAEMDBIHC_OFFSET))(this, a1);
		}

		::System::Void DJKCJIAJMNG(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_DJKCJIAJMNG_OFFSET))(this, a1);
		}

		::System::Void EMFNMGPILDD(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_EMFNMGPILDD_OFFSET))(this, a1);
		}

		::System::Boolean HLGPIAMPANI(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HLGPIAMPANI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MGKKEFBDPKD(::JAODHHPIKGJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_MGKKEFBDPKD_OFFSET))(this, a1, a2);
		}

		::System::Void LJBJFECCLNP(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_LJBJFECCLNP_OFFSET))(this, a1);
		}

		::System::Void AMFCJPOOEOB(::JAODHHPIKGJ* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AMFCJPOOEOB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMCPNCOMPIN(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_BMCPNCOMPIN_OFFSET))(this, a1);
		}

		::System::Void LNEDNDACLOG(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_LNEDNDACLOG_OFFSET))(this, a1);
		}

		::System::Void OOPCNBIGBFA(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_OOPCNBIGBFA_OFFSET))(this, a1);
		}

		::System::Void DBOONNEOHLG(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_DBOONNEOHLG_OFFSET))(this, a1);
		}

		::System::Void PBHNKOHNJEO(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_PBHNKOHNJEO_OFFSET))(this, a1);
		}

		::System::Void GJJHPJENLHO(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_GJJHPJENLHO_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BPOLDDMJGCO(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Nullable_1<::System::Single> a8)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_BPOLDDMJGCO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::UnityEngine::Vector3 NGDCOLPIOEI(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_NGDCOLPIOEI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 IPMCHJGHHMG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_IPMCHJGHHMG_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void NNGIFFCGBAB(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_NNGIFFCGBAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KLLJONJCOFD(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KLLJONJCOFD_OFFSET))(this, a1);
		}

		::System::Void KDCEELIFNOA(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KDCEELIFNOA_OFFSET))(this, a1);
		}

		::System::Void KNMMDAOGPCL(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KNMMDAOGPCL_OFFSET))(this, a1, a2);
		}

		::System::Void KNMMDAOGPCL_1(::JAODHHPIKGJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KNMMDAOGPCL_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean MNCJOFFKLFB(::JAODHHPIKGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_MNCJOFFKLFB_OFFSET))(this, a1);
		}

		::System::Void PFNAKEOGPJI(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_PFNAKEOGPJI_OFFSET))(this, a1);
		}

		::System::Void CMFIKHEIOHF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_CMFIKHEIOHF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_EPPAFNJFCMH_OFFSET))(this);
		}

		::OMAFNEHLDED* HEIGGAJDNKP()
		{
			return ((::OMAFNEHLDED*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HEIGGAJDNKP_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveConfig* AMPIMJJBKBE()
		{
			return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_AMPIMJJBKBE_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveBakedConfig* KMJLBKNOEDD()
		{
			return ((::RPG::GameCore::FiveDimMoveBakedConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_KMJLBKNOEDD_OFFSET))(this);
		}

		::System::UInt32 OLMBDJFMIGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_OLMBDJFMIGO_OFFSET))(this);
		}

		::System::Single JIJOKFAKKME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_JIJOKFAKKME_OFFSET))(this);
		}

		::System::Single EAJFJPFGBAD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_EAJFJPFGBAD_OFFSET))(this);
		}

		::JAODHHPIKGJ* HAMPOKCIBEC()
		{
			return ((::JAODHHPIKGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKNLNNLNKE_HAMPOKCIBEC_OFFSET))(this);
		}

	};
