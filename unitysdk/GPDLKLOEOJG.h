#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatDiceEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ANIOGPJFCKF;
class BKHHFIJCHEP;
class FDBODHHKGFB;
class GLPPDCIBMIH;
class IFLICGOLBIG;
class IJFIHJJPHNA;
class PDPMIHGIFDP;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GPDLKLOEOJG_AEKOKNCPFJP_OFFSET UNITYSDK_OFFSET(0x15B49440)
#define GPDLKLOEOJG_AFAHGOLAJOK_OFFSET UNITYSDK_OFFSET(0x15B45700)
#define GPDLKLOEOJG_AGAKAPIFMOP_OFFSET UNITYSDK_OFFSET(0x15B44010)
#define GPDLKLOEOJG_AIDFJLJANIB_OFFSET UNITYSDK_OFFSET(0x15B4C360)
#define GPDLKLOEOJG_APENHBGAGCI_OFFSET UNITYSDK_OFFSET(0x15B4AEF0)
#define GPDLKLOEOJG_APPDGGMKMHN_OFFSET UNITYSDK_OFFSET(0x15B4E3C0)
#define GPDLKLOEOJG_BBNEBAGIEKF_OFFSET UNITYSDK_OFFSET(0x15B4CBB0)
#define GPDLKLOEOJG_BEIDAIDAFDG_OFFSET UNITYSDK_OFFSET(0x15B47880)
#define GPDLKLOEOJG_BFJLFKFFBFL_OFFSET UNITYSDK_OFFSET(0x15B4AFD0)
#define GPDLKLOEOJG_BGPHJMNLLPN_OFFSET UNITYSDK_OFFSET(0x15B473E0)
#define GPDLKLOEOJG_BHOODHJMLIE_OFFSET UNITYSDK_OFFSET(0x15B45200)
#define GPDLKLOEOJG_BKEADLEBPAG_OFFSET UNITYSDK_OFFSET(0x15B4E350)
#define GPDLKLOEOJG_BMPAHCAHEIJ_OFFSET UNITYSDK_OFFSET(0x15B48120)
#define GPDLKLOEOJG_BONKJIGIGBK_OFFSET UNITYSDK_OFFSET(0x15B46A10)
#define GPDLKLOEOJG_BOPEOJLDOEO_OFFSET UNITYSDK_OFFSET(0x15B4AA90)
#define GPDLKLOEOJG_BPAJDANCCGG_OFFSET UNITYSDK_OFFSET(0x15B49760)
#define GPDLKLOEOJG_CDJKGJOBAAK_OFFSET UNITYSDK_OFFSET(0x15B4AF60)
#define GPDLKLOEOJG_CEFDOHHPBKA_OFFSET UNITYSDK_OFFSET(0x15B4D930)
#define GPDLKLOEOJG_CHIMDLFFNPB_OFFSET UNITYSDK_OFFSET(0x15B47340)
#define GPDLKLOEOJG_CHPCKNCHKHK_OFFSET UNITYSDK_OFFSET(0x15B42B70)
#define GPDLKLOEOJG_CJDGOKKNEFO_OFFSET UNITYSDK_OFFSET(0x15B44100)
#define GPDLKLOEOJG_CLIHOFAKDPF_OFFSET UNITYSDK_OFFSET(0x15B44B30)
#define GPDLKLOEOJG_COEHHLLGDKP_OFFSET UNITYSDK_OFFSET(0x15B4C900)
#define GPDLKLOEOJG_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x15B45050)
#define GPDLKLOEOJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B419F0)
#define GPDLKLOEOJG_DACBCJEHLMJ_OFFSET UNITYSDK_OFFSET(0x15B47BD0)
#define GPDLKLOEOJG_DCEDKHBAKHK_OFFSET UNITYSDK_OFFSET(0x15B4D3D0)
#define GPDLKLOEOJG_DEADDBGKIKC_OFFSET UNITYSDK_OFFSET(0x15B45470)
#define GPDLKLOEOJG_DEKPMPKMBCI_OFFSET UNITYSDK_OFFSET(0x15B432A0)
#define GPDLKLOEOJG_DKDFJEKDDJO_OFFSET UNITYSDK_OFFSET(0x15B4C530)
#define GPDLKLOEOJG_DNABAKGJJPN_OFFSET UNITYSDK_OFFSET(0x15B42450)
#define GPDLKLOEOJG_ECCPAAGAHNM_OFFSET UNITYSDK_OFFSET(0x15B44760)
#define GPDLKLOEOJG_EDBFLPJFIKA_OFFSET UNITYSDK_OFFSET(0x15B493F0)
#define GPDLKLOEOJG_EIMDDDJIMHD_OFFSET UNITYSDK_OFFSET(0x15B46500)
#define GPDLKLOEOJG_EJCANDMADFK_OFFSET UNITYSDK_OFFSET(0x15B4A640)
#define GPDLKLOEOJG_EPIGJCKMLJC_OFFSET UNITYSDK_OFFSET(0x15B44ED0)
#define GPDLKLOEOJG_FBHFGIIKLFI_OFFSET UNITYSDK_OFFSET(0x15B4C220)
#define GPDLKLOEOJG_FHLLJJHLOLO_OFFSET UNITYSDK_OFFSET(0x15B41FB0)
#define GPDLKLOEOJG_FMMAGHPBGEH_OFFSET UNITYSDK_OFFSET(0x15B49350)
#define GPDLKLOEOJG_FNNEKMKOKPA_OFFSET UNITYSDK_OFFSET(0x15B49BC0)
#define GPDLKLOEOJG_FOPDJCJEAKM_OFFSET UNITYSDK_OFFSET(0x15B44670)
#define GPDLKLOEOJG_GCEEPKNLOBB_OFFSET UNITYSDK_OFFSET(0x15B49DA0)
#define GPDLKLOEOJG_GDHDJHCGNLL_OFFSET UNITYSDK_OFFSET(0x15B483E0)
#define GPDLKLOEOJG_GET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x15B4E3A0)
#define GPDLKLOEOJG_GFKDNPIBGKG_OFFSET UNITYSDK_OFFSET(0x15B42B00)
#define GPDLKLOEOJG_GIPAMLIMDMA_OFFSET UNITYSDK_OFFSET(0x15B4D810)
#define GPDLKLOEOJG_HHHCCDDJBMK_OFFSET UNITYSDK_OFFSET(0x15B4AE80)
#define GPDLKLOEOJG_HIGCAOAJCNN_OFFSET UNITYSDK_OFFSET(0x15B48620)
#define GPDLKLOEOJG_HNNHKLOAEFG_OFFSET UNITYSDK_OFFSET(0x15B41DD0)
#define GPDLKLOEOJG_ICANHEHACBP_OFFSET UNITYSDK_OFFSET(0x15B45510)
#define GPDLKLOEOJG_IELMBGCPBHK_1_OFFSET UNITYSDK_OFFSET(0x15B48370)
#define GPDLKLOEOJG_IELMBGCPBHK_OFFSET UNITYSDK_OFFSET(0x15B482D0)
#define GPDLKLOEOJG_IFGOPLNPNJI_OFFSET UNITYSDK_OFFSET(0x15B4D980)
#define GPDLKLOEOJG_IKKBNDEOCIK_OFFSET UNITYSDK_OFFSET(0x15B49B20)
#define GPDLKLOEOJG_ILMCIEMFKFL_OFFSET UNITYSDK_OFFSET(0x15B42980)
#define GPDLKLOEOJG_JBOIFCJFOPH_OFFSET UNITYSDK_OFFSET(0x15B4B0D0)
#define GPDLKLOEOJG_JCNGNNOFGPD_OFFSET UNITYSDK_OFFSET(0x15B41E50)
#define GPDLKLOEOJG_JDCPOHOIFLG_OFFSET UNITYSDK_OFFSET(0x15B47FA0)
#define GPDLKLOEOJG_JGGGGCMKJFC_OFFSET UNITYSDK_OFFSET(0x15B4C680)
#define GPDLKLOEOJG_JHFMDGFLGNJ_OFFSET UNITYSDK_OFFSET(0x15B41CA0)
#define GPDLKLOEOJG_JHHEHAFIEMB_OFFSET UNITYSDK_OFFSET(0x15B47AE0)
#define GPDLKLOEOJG_JNJKLMHOOIN_OFFSET UNITYSDK_OFFSET(0x15B4A050)
#define GPDLKLOEOJG_KBGFGEABKOJ_OFFSET UNITYSDK_OFFSET(0x15B455C0)
#define GPDLKLOEOJG_KBLPPPLMDAA_OFFSET UNITYSDK_OFFSET(0x15B48E10)
#define GPDLKLOEOJG_KDLAKCADMLH_OFFSET UNITYSDK_OFFSET(0x15B427B0)
#define GPDLKLOEOJG_KFGLPLPGMME_OFFSET UNITYSDK_OFFSET(0x15B429E0)
#define GPDLKLOEOJG_KFOMLGFFPBM_OFFSET UNITYSDK_OFFSET(0x15B42180)
#define GPDLKLOEOJG_KGDBAHEGKMG_OFFSET UNITYSDK_OFFSET(0x15B477E0)
#define GPDLKLOEOJG_KIJLEJEOHOB_OFFSET UNITYSDK_OFFSET(0x15B4DAD0)
#define GPDLKLOEOJG_KKLJIIBMKLF_OFFSET UNITYSDK_OFFSET(0x15B4D6B0)
#define GPDLKLOEOJG_LBCGBAJNOMF_OFFSET UNITYSDK_OFFSET(0x15B42E50)
#define GPDLKLOEOJG_LBFJGMEJHDD_OFFSET UNITYSDK_OFFSET(0x15B4C9C0)
#define GPDLKLOEOJG_LBKJOABJGOG_OFFSET UNITYSDK_OFFSET(0x15B437F0)
#define GPDLKLOEOJG_LJPEMFNPLCD_OFFSET UNITYSDK_OFFSET(0x15B4A780)
#define GPDLKLOEOJG_LMEBAJMCCIH_OFFSET UNITYSDK_OFFSET(0x15B425F0)
#define GPDLKLOEOJG_LOJEFBGPGKF_OFFSET UNITYSDK_OFFSET(0x15B4A800)
#define GPDLKLOEOJG_LPBMKEAFCDB_OFFSET UNITYSDK_OFFSET(0x15B46C90)
#define GPDLKLOEOJG_LPKLHGIMLHH_OFFSET UNITYSDK_OFFSET(0x15B451A0)
#define GPDLKLOEOJG_MAPJGLKCCAP_OFFSET UNITYSDK_OFFSET(0x15B4C0A0)
#define GPDLKLOEOJG_MBHIDEJJPAA_OFFSET UNITYSDK_OFFSET(0x15B4B4A0)
#define GPDLKLOEOJG_MDCJKGBBAIO_OFFSET UNITYSDK_OFFSET(0x15B4A540)
#define GPDLKLOEOJG_MFACIKJGHHE_OFFSET UNITYSDK_OFFSET(0x15B490C0)
#define GPDLKLOEOJG_MGNECAFIOPM_OFFSET UNITYSDK_OFFSET(0x15B47120)
#define GPDLKLOEOJG_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15B42260)
#define GPDLKLOEOJG_MINGDGCJMIO_OFFSET UNITYSDK_OFFSET(0x15B4CFD0)
#define GPDLKLOEOJG_MKALGFPPNIM_OFFSET UNITYSDK_OFFSET(0x15B4CDC0)
#define GPDLKLOEOJG_MMMDKHENPEP_OFFSET UNITYSDK_OFFSET(0x15B476A0)
#define GPDLKLOEOJG_MNIILDEBIMG_OFFSET UNITYSDK_OFFSET(0x15B46B50)
#define GPDLKLOEOJG_NCNDEADKOOM_OFFSET UNITYSDK_OFFSET(0x15B45F00)
#define GPDLKLOEOJG_NGNDJGAIKDO_OFFSET UNITYSDK_OFFSET(0x15B4B040)
#define GPDLKLOEOJG_NIADDBKBJGO_OFFSET UNITYSDK_OFFSET(0x15B48040)
#define GPDLKLOEOJG_NOAHGHJHOFK_OFFSET UNITYSDK_OFFSET(0x15B4E100)
#define GPDLKLOEOJG_NOECONCIBEO_OFFSET UNITYSDK_OFFSET(0x15B4E2C0)
#define GPDLKLOEOJG_NOMGLENLGCP_OFFSET UNITYSDK_OFFSET(0x15B4C710)
#define GPDLKLOEOJG_OAAHMKNFBCH_OFFSET UNITYSDK_OFFSET(0x15B43090)
#define GPDLKLOEOJG_OAEEANDILKO_OFFSET UNITYSDK_OFFSET(0x15B46D30)
#define GPDLKLOEOJG_OALMCDLNGMH_OFFSET UNITYSDK_OFFSET(0x15B49170)
#define GPDLKLOEOJG_OBKOFEHMOHE_OFFSET UNITYSDK_OFFSET(0x15B43670)
#define GPDLKLOEOJG_OHOIAFKHDHM_OFFSET UNITYSDK_OFFSET(0x15B48F00)
#define GPDLKLOEOJG_PEDEIFEJMGN_OFFSET UNITYSDK_OFFSET(0x15B43980)
#define GPDLKLOEOJG_PJHEGMMKKIN_OFFSET UNITYSDK_OFFSET(0x15B463A0)
#define GPDLKLOEOJG_PJIGOFPBECF_OFFSET UNITYSDK_OFFSET(0x15B49D10)
#define GPDLKLOEOJG_PKLGCNHCIPD_OFFSET UNITYSDK_OFFSET(0x15B492E0)
#define GPDLKLOEOJG_PPFJJGDLLPM_OFFSET UNITYSDK_OFFSET(0x15B4D200)
#define GPDLKLOEOJG_SET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x15B4E3B0)
#define GPDLKLOEOJG___PLAYCONFIRMPERFORMANCE_B__67_0_OFFSET UNITYSDK_OFFSET(0x15B4E3D0)

	class GPDLKLOEOJG : public ::System::Object
	{
	public:
		::System::Action* AMBDKNJFNHN; // 0x10
		::System::Action* DEJNJAPCFLM; // 0x18
		::UnityEngine::Transform* FGEIHEMCHJG; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* FOHHIBGKLKG; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DLGLEOHCLHB; // 0x30
		::UnityEngine::Transform* CLFLFBAKBAL; // 0x38
		::ANIOGPJFCKF* _PerformanceConfigProxy_k__BackingField; // 0x40
		::BKHHFIJCHEP* FLMODBLFAGD; // 0x48
		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* ONCHNHCBHDD; // 0x50
		::IJFIHJJPHNA* CFKHNPGEAJA; // 0x58
		::UnityEngine::Transform* HEPLNNAIOLO; // 0x60
		::RPG::Client::DiceCombatPhySimParameter* OFGLPPJEPOK; // 0x68
		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* AEMIIECABKG; // 0x70
		::System::Action* EKAPEKLMJJC; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* GLHGACAJCIK; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NKEOHPAIJAK; // 0x88
		::UnityEngine::Transform* CKFPOAOPLJB; // 0x90
		::System::Boolean PEAIHAKIKPA; // 0x98
		::System::Boolean FENHPIJAAMI; // 0x99
		::System::Boolean PGMNIDGNKAJ; // 0x9A
		::System::Boolean DHCFELMDMNL; // 0x9B
		::System::Boolean GDHCLEOMMAK; // 0x9C
		::System::Boolean AOLLNNIADAH; // 0x9D
		::System::Byte _padding0[0x2];
		::System::Single GMHFAOECHEF; // 0xA0
		::System::Single FANIBAAGIMK; // 0xA4
		// static const ::System::Object GLMMFKMEHHD; // 0x0
		::System::Void _ctor(::IJFIHJJPHNA* a1, ::BKHHFIJCHEP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JHFMDGFLGNJ(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JHFMDGFLGNJ_OFFSET))(this, a1);
		}

		::System::Void HNNHKLOAEFG(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_HNNHKLOAEFG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JCNGNNOFGPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JCNGNNOFGPD_OFFSET))(this);
		}

		::System::Void KFOMLGFFPBM(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KFOMLGFFPBM_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void DNABAKGJJPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DNABAKGJJPN_OFFSET))(this, a1);
		}

		::System::Void LMEBAJMCCIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LMEBAJMCCIH_OFFSET))(this);
		}

		::System::Void KDLAKCADMLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KDLAKCADMLH_OFFSET))(this);
		}

		::System::Boolean ILMCIEMFKFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_ILMCIEMFKFL_OFFSET))(this);
		}

		::System::Boolean KFGLPLPGMME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KFGLPLPGMME_OFFSET))(this);
		}

		::System::Void CHPCKNCHKHK(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CHPCKNCHKHK_OFFSET))(this, a1);
		}

		::System::Void LBCGBAJNOMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LBCGBAJNOMF_OFFSET))(this);
		}

		::System::Void DEKPMPKMBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DEKPMPKMBCI_OFFSET))(this);
		}

		::System::Void LBKJOABJGOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LBKJOABJGOG_OFFSET))(this);
		}

		::System::Void AGAKAPIFMOP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_AGAKAPIFMOP_OFFSET))(this, a1);
		}

		::System::Void FOPDJCJEAKM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_FOPDJCJEAKM_OFFSET))(this, a1);
		}

		::System::Void ECCPAAGAHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_ECCPAAGAHNM_OFFSET))(this);
		}

		::System::Void COPGACEDIEI(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_COPGACEDIEI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EPIGJCKMLJC(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_EPIGJCKMLJC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* OAAHMKNFBCH()
		{
			return ((::System::Collections::Generic::List_1<::IFLICGOLBIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_OAAHMKNFBCH_OFFSET))(this);
		}

		::UnityEngine::Vector3 OBKOFEHMOHE(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_OBKOFEHMOHE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BHOODHJMLIE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BHOODHJMLIE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* DEADDBGKIKC(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DEADDBGKIKC_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* ICANHEHACBP(::System::Collections::Generic::List_1<::IFLICGOLBIG*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::IFLICGOLBIG*>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_ICANHEHACBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* CJDGOKKNEFO()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CJDGOKKNEFO_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CLIHOFAKDPF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CLIHOFAKDPF_OFFSET))(this);
		}

		::System::Void KBGFGEABKOJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KBGFGEABKOJ_OFFSET))(this, a1);
		}

		::System::Void AFAHGOLAJOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_AFAHGOLAJOK_OFFSET))(this);
		}

		::System::Void NCNDEADKOOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NCNDEADKOOM_OFFSET))(this);
		}

		::System::Boolean PJHEGMMKKIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_PJHEGMMKKIN_OFFSET))(this);
		}

		::System::Void EIMDDDJIMHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_EIMDDDJIMHD_OFFSET))(this);
		}

		::System::Void MNIILDEBIMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MNIILDEBIMG_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LPBMKEAFCDB(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LPBMKEAFCDB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OAEEANDILKO(::System::Collections::Generic::List_1<::IFLICGOLBIG*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Collections::Generic::List_1<::IFLICGOLBIG*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_OAEEANDILKO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* MGNECAFIOPM(::System::Collections::Generic::List_1<::IFLICGOLBIG*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Collections::Generic::List_1<::IFLICGOLBIG*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MGNECAFIOPM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Quaternion PEDEIFEJMGN(::IFLICGOLBIG* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::IFLICGOLBIG*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_PEDEIFEJMGN_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* CHIMDLFFNPB(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CHIMDLFFNPB_OFFSET))(this, a1);
		}

		::System::Void BGPHJMNLLPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BGPHJMNLLPN_OFFSET))(this);
		}

		::System::Void BONKJIGIGBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BONKJIGIGBK_OFFSET))(this);
		}

		::System::Void MMMDKHENPEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MMMDKHENPEP_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KGDBAHEGKMG(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KGDBAHEGKMG_OFFSET))(this, a1);
		}

		::System::Void BEIDAIDAFDG(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BEIDAIDAFDG_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* JHHEHAFIEMB(::System::Int32 a1, ::System::UInt32 a2, ::FDBODHHKGFB* a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::FDBODHHKGFB*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JHHEHAFIEMB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DACBCJEHLMJ(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DACBCJEHLMJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BMPAHCAHEIJ(::System::Int32 a1, ::System::UInt32 a2, ::FDBODHHKGFB* a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::FDBODHHKGFB*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BMPAHCAHEIJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void IELMBGCPBHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_IELMBGCPBHK_OFFSET))(this);
		}

		::System::Void IELMBGCPBHK_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_IELMBGCPBHK_1_OFFSET))(this, a1);
		}

		::System::Void GDHDJHCGNLL(::IFLICGOLBIG* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_GDHDJHCGNLL_OFFSET))(this, a1, a2);
		}

		::System::Void HIGCAOAJCNN(::IFLICGOLBIG* a1, ::IFLICGOLBIG* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*, ::IFLICGOLBIG*, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_HIGCAOAJCNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KBLPPPLMDAA(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::System::Int32 a5, ::RPG::GameCore::DiceCombatDiceType a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KBLPPPLMDAA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OHOIAFKHDHM(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4, ::UnityEngine::GameObject* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_OHOIAFKHDHM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::IEnumerator* MFACIKJGHHE(::System::UInt32 a1, ::PDPMIHGIFDP* a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::PDPMIHGIFDP*, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MFACIKJGHHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OALMCDLNGMH(::System::UInt32 a1, ::PDPMIHGIFDP* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PDPMIHGIFDP*, ::System::UInt32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_OALMCDLNGMH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKLGCNHCIPD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_PKLGCNHCIPD_OFFSET))(this, a1);
		}

		::System::Void FMMAGHPBGEH(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_FMMAGHPBGEH_OFFSET))(this, a1);
		}

		::System::Void EDBFLPJFIKA(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_EDBFLPJFIKA_OFFSET))(this, a1);
		}

		::System::Void BPAJDANCCGG(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BPAJDANCCGG_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* IKKBNDEOCIK(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_IKKBNDEOCIK_OFFSET))(this, a1);
		}

		::System::Void FNNEKMKOKPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_FNNEKMKOKPA_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* PJIGOFPBECF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_PJIGOFPBECF_OFFSET))(this);
		}

		::System::Void GCEEPKNLOBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_GCEEPKNLOBB_OFFSET))(this);
		}

		::System::Void JNJKLMHOOIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JNJKLMHOOIN_OFFSET))(this);
		}

		::System::Void MDCJKGBBAIO(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MDCJKGBBAIO_OFFSET))(this, a1);
		}

		::System::Void EJCANDMADFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_EJCANDMADFK_OFFSET))(this);
		}

		::System::Void LJPEMFNPLCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LJPEMFNPLCD_OFFSET))(this);
		}

		::System::Void AEKOKNCPFJP(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_AEKOKNCPFJP_OFFSET))(this, a1);
		}

		::System::Void BOPEOJLDOEO(::System::Single a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BOPEOJLDOEO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HHHCCDDJBMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_HHHCCDDJBMK_OFFSET))(this);
		}

		::System::Void APENHBGAGCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_APENHBGAGCI_OFFSET))(this);
		}

		::System::Void CDJKGJOBAAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CDJKGJOBAAK_OFFSET))(this);
		}

		::System::Void BFJLFKFFBFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BFJLFKFFBFL_OFFSET))(this);
		}

		::System::Void NGNDJGAIKDO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NGNDJGAIKDO_OFFSET))(this, a1);
		}

		::System::Void JBOIFCJFOPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JBOIFCJFOPH_OFFSET))(this);
		}

		::System::Boolean MAPJGLKCCAP(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MAPJGLKCCAP_OFFSET))(this, a1, a2);
		}

		::System::Single LOJEFBGPGKF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LOJEFBGPGKF_OFFSET))(this);
		}

		::System::Int32 FBHFGIIKLFI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_FBHFGIIKLFI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* AIDFJLJANIB()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_AIDFJLJANIB_OFFSET))(this);
		}

		::IFLICGOLBIG* DKDFJEKDDJO(::GLPPDCIBMIH* a1)
		{
			return ((::IFLICGOLBIG*(*)(::PVOID, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DKDFJEKDDJO_OFFSET))(this, a1);
		}

		::System::Void JGGGGCMKJFC(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JGGGGCMKJFC_OFFSET))(this, a1);
		}

		::System::Void NIADDBKBJGO(::IFLICGOLBIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NIADDBKBJGO_OFFSET))(this, a1);
		}

		::System::Void JDCPOHOIFLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_JDCPOHOIFLG_OFFSET))(this);
		}

		::System::Void NOMGLENLGCP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NOMGLENLGCP_OFFSET))(this, a1);
		}

		::System::Void COEHHLLGDKP(::IFLICGOLBIG* a1, ::IFLICGOLBIG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFLICGOLBIG*, ::IFLICGOLBIG*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_COEHHLLGDKP_OFFSET))(this, a1, a2);
		}

		::System::Void LBFJGMEJHDD(::System::Collections::Generic::List_1<::IFLICGOLBIG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFLICGOLBIG*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LBFJGMEJHDD_OFFSET))(this, a1);
		}

		::System::Void BBNEBAGIEKF(::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BBNEBAGIEKF_OFFSET))(this, a1);
		}

		::System::Void MKALGFPPNIM(::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MKALGFPPNIM_OFFSET))(this, a1);
		}

		::System::Void MINGDGCJMIO(::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MINGDGCJMIO_OFFSET))(this, a1);
		}

		::System::Void MBHIDEJJPAA(::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatDiceEffectType))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_MBHIDEJJPAA_OFFSET))(this, a1, a2);
		}

		::System::Void FHLLJJHLOLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_FHLLJJHLOLO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PPFJJGDLLPM()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_PPFJJGDLLPM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* DCEDKHBAKHK(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_DCEDKHBAKHK_OFFSET))(this, a1);
		}

		::System::Int32 KKLJIIBMKLF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KKLJIIBMKLF_OFFSET))(this);
		}

		::System::Void CEFDOHHPBKA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_CEFDOHHPBKA_OFFSET))(this, a1);
		}

		::System::Void IFGOPLNPNJI(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_IFGOPLNPNJI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KIJLEJEOHOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_KIJLEJEOHOB_OFFSET))(this, a1);
		}

		::System::Void NOAHGHJHOFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NOAHGHJHOFK_OFFSET))(this);
		}

		::System::Int32 GIPAMLIMDMA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_GIPAMLIMDMA_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombatPhySimParameter* NOECONCIBEO()
		{
			return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_NOECONCIBEO_OFFSET))(this);
		}

		::System::Boolean LPKLHGIMLHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_LPKLHGIMLHH_OFFSET))(this);
		}

		::System::Int32 BKEADLEBPAG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_BKEADLEBPAG_OFFSET))(this);
		}

		::ANIOGPJFCKF* get_PerformanceConfigProxy()
		{
			return ((::ANIOGPJFCKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_GET_PERFORMANCECONFIGPROXY_OFFSET))(this);
		}

		::System::Void set_PerformanceConfigProxy(::ANIOGPJFCKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANIOGPJFCKF*))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_SET_PERFORMANCECONFIGPROXY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IFLICGOLBIG*>* APPDGGMKMHN()
		{
			return ((::System::Collections::Generic::List_1<::IFLICGOLBIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_APPDGGMKMHN_OFFSET))(this);
		}

		::System::UInt32 GFKDNPIBGKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG_GFKDNPIBGKG_OFFSET))(this);
		}

		::System::Void __PlayConfirmPerformance_b__67_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPDLKLOEOJG___PLAYCONFIRMPERFORMANCE_B__67_0_OFFSET))(this);
		}

	};
