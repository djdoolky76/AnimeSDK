#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DHBOGGBEMFF_PVSState.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/ScenenLightManager/LightOp.h"
#include "unitysdk/System/Object.h"
class CELOMGMBCKK;
class CNNIBJAKKOI;
class DHBOGGBEMFF;
class DHBOGGBEMFF_FANENNLGHPH;
class DHBOGGBEMFF_PBCMKBIEJOP;
class IDBHLOCKPJL;
class IOJHOEOABKB;
class KLEFGGIHGMI;
class KPNFPHJPOMM;
class MEIGMBOLDOF;
class ONEMIJCPBEO;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace ScenenLightManager { class BlockEnvExportDataHeader; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DHBOGGBEMFF_ACABPNKKPEF_OFFSET UNITYSDK_OFFSET(0xF436A10)
#define DHBOGGBEMFF_AFBFGKOGAOA_OFFSET UNITYSDK_OFFSET(0xF436420)
#define DHBOGGBEMFF_AGADOGHGOCD_OFFSET UNITYSDK_OFFSET(0xF443940)
#define DHBOGGBEMFF_AGGKBLFDGOC_OFFSET UNITYSDK_OFFSET(0xF436AD0)
#define DHBOGGBEMFF_AGMGJKMKEPB_OFFSET UNITYSDK_OFFSET(0xF442E60)
#define DHBOGGBEMFF_AHJGHBJKMGH_OFFSET UNITYSDK_OFFSET(0xF437BB0)
#define DHBOGGBEMFF_AKGDJFOAPDO_OFFSET UNITYSDK_OFFSET(0xF43EA60)
#define DHBOGGBEMFF_AOIJDIGADML_OFFSET UNITYSDK_OFFSET(0xF4435F0)
#define DHBOGGBEMFF_BDAEJGKGLBD_OFFSET UNITYSDK_OFFSET(0xF436E40)
#define DHBOGGBEMFF_BIPDJOLFJNP_OFFSET UNITYSDK_OFFSET(0xF43DEF0)
#define DHBOGGBEMFF_BKKDENNICBG_OFFSET UNITYSDK_OFFSET(0xF43DAD0)
#define DHBOGGBEMFF_BMMDLDPNIBC_OFFSET UNITYSDK_OFFSET(0xF4365E0)
#define DHBOGGBEMFF_BMNHIENNCOK_OFFSET UNITYSDK_OFFSET(0xF4437D0)
#define DHBOGGBEMFF_BNJEMNMGPKH_OFFSET UNITYSDK_OFFSET(0xF4362C0)
#define DHBOGGBEMFF_BPFGKJDBJLK_OFFSET UNITYSDK_OFFSET(0xF442490)
#define DHBOGGBEMFF_CCDIOCPHHGF_OFFSET UNITYSDK_OFFSET(0xF436060)
#define DHBOGGBEMFF_CCTOR_OFFSET UNITYSDK_OFFSET(0xF445A20)
#define DHBOGGBEMFF_CEEJOEFDHNG_1_OFFSET UNITYSDK_OFFSET(0xF43E560)
#define DHBOGGBEMFF_CEEJOEFDHNG_2_OFFSET UNITYSDK_OFFSET(0xF43E700)
#define DHBOGGBEMFF_CEEJOEFDHNG_OFFSET UNITYSDK_OFFSET(0xF43E180)
#define DHBOGGBEMFF_CFCPINEOBML_OFFSET UNITYSDK_OFFSET(0xF436170)
#define DHBOGGBEMFF_CHFMOACEABM_OFFSET UNITYSDK_OFFSET(0xF43A3E0)
#define DHBOGGBEMFF_CJJDKCBNNCE_OFFSET UNITYSDK_OFFSET(0xF4373A0)
#define DHBOGGBEMFF_CKPEECPCOPM_OFFSET UNITYSDK_OFFSET(0xF443380)
#define DHBOGGBEMFF_CLDMFJNNGFF_OFFSET UNITYSDK_OFFSET(0xF43AF00)
#define DHBOGGBEMFF_CMMLLEFOFFK_OFFSET UNITYSDK_OFFSET(0xF442510)
#define DHBOGGBEMFF_COJJNBBPOIM_1_OFFSET UNITYSDK_OFFSET(0xF43E3B0)
#define DHBOGGBEMFF_COJJNBBPOIM_OFFSET UNITYSDK_OFFSET(0xF43DF40)
#define DHBOGGBEMFF_CPKCBGBJOEF_OFFSET UNITYSDK_OFFSET(0xF436200)
#define DHBOGGBEMFF_CTOR_OFFSET UNITYSDK_OFFSET(0xF43ED50)
#define DHBOGGBEMFF_DAEPDCONMKP_OFFSET UNITYSDK_OFFSET(0xF43A620)
#define DHBOGGBEMFF_DAGFBHOLDOC_OFFSET UNITYSDK_OFFSET(0xF4363F0)
#define DHBOGGBEMFF_DBBALPFEGEJ_OFFSET UNITYSDK_OFFSET(0xF436670)
#define DHBOGGBEMFF_DBPIGGGDAHN_OFFSET UNITYSDK_OFFSET(0xF436320)
#define DHBOGGBEMFF_DIHILBFMODG_OFFSET UNITYSDK_OFFSET(0xF437690)
#define DHBOGGBEMFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF440220)
#define DHBOGGBEMFF_DKPNJJBNOIE_OFFSET UNITYSDK_OFFSET(0xF43C6F0)
#define DHBOGGBEMFF_DMIAKCFEDKH_OFFSET UNITYSDK_OFFSET(0xF435520)
#define DHBOGGBEMFF_DPDFNGGIIPL_OFFSET UNITYSDK_OFFSET(0xF43CA70)
#define DHBOGGBEMFF_EBLEKIGBAAL_OFFSET UNITYSDK_OFFSET(0xF4379F0)
#define DHBOGGBEMFF_ECMMOPHLFHE_OFFSET UNITYSDK_OFFSET(0xF437910)
#define DHBOGGBEMFF_ECODKBAMDBP_OFFSET UNITYSDK_OFFSET(0xF43E890)
#define DHBOGGBEMFF_EEJEOOAHDCD_OFFSET UNITYSDK_OFFSET(0xF436400)
#define DHBOGGBEMFF_EJGNOIJHDPG_OFFSET UNITYSDK_OFFSET(0xF4375A0)
#define DHBOGGBEMFF_FBPPBIJFFBL_OFFSET UNITYSDK_OFFSET(0xF436140)
#define DHBOGGBEMFF_FCMFFKABNLP_OFFSET UNITYSDK_OFFSET(0xF43A8F0)
#define DHBOGGBEMFF_FDAFHPLFGMG_OFFSET UNITYSDK_OFFSET(0xF43D920)
#define DHBOGGBEMFF_FILOFLMNNLI_OFFSET UNITYSDK_OFFSET(0xF438B10)
#define DHBOGGBEMFF_FJJPLAMAGGH_OFFSET UNITYSDK_OFFSET(0xF435D20)
#define DHBOGGBEMFF_FKGAGNDMGOH_OFFSET UNITYSDK_OFFSET(0xF4402D0)
#define DHBOGGBEMFF_FLIDLGMGHIM_OFFSET UNITYSDK_OFFSET(0xF437CB0)
#define DHBOGGBEMFF_FMEDHOKIGCJ_OFFSET UNITYSDK_OFFSET(0xF43EC40)
#define DHBOGGBEMFF_FMIGOKIDKJL_OFFSET UNITYSDK_OFFSET(0xF43DCC0)
#define DHBOGGBEMFF_GDGAFFCFHCF_OFFSET UNITYSDK_OFFSET(0xF436330)
#define DHBOGGBEMFF_GFJOIPGOJIC_OFFSET UNITYSDK_OFFSET(0xF4427A0)
#define DHBOGGBEMFF_GFOJMFHLDOL_OFFSET UNITYSDK_OFFSET(0xF436270)
#define DHBOGGBEMFF_GGJCLJPELBL_OFFSET UNITYSDK_OFFSET(0xF43BEA0)
#define DHBOGGBEMFF_GHCGOHAOIEA_OFFSET UNITYSDK_OFFSET(0xF441FD0)
#define DHBOGGBEMFF_GMLAFCKCLAD_OFFSET UNITYSDK_OFFSET(0xF43FAF0)
#define DHBOGGBEMFF_GPMFNHOBIDI_OFFSET UNITYSDK_OFFSET(0xF437BF0)
#define DHBOGGBEMFF_HCLMAONKBKP_OFFSET UNITYSDK_OFFSET(0xF443A50)
#define DHBOGGBEMFF_HDBKKIKMEAJ_OFFSET UNITYSDK_OFFSET(0xF4439F0)
#define DHBOGGBEMFF_HDKBEJAJMNF_OFFSET UNITYSDK_OFFSET(0xF442870)
#define DHBOGGBEMFF_HDNGNJPANAI_OFFSET UNITYSDK_OFFSET(0xF43B7D0)
#define DHBOGGBEMFF_HHGBMNIGKNL_OFFSET UNITYSDK_OFFSET(0xF436390)
#define DHBOGGBEMFF_HIJEJKKLBPD_1_OFFSET UNITYSDK_OFFSET(0xF43ABB0)
#define DHBOGGBEMFF_HIJEJKKLBPD_OFFSET UNITYSDK_OFFSET(0xF43A480)
#define DHBOGGBEMFF_HKPHAAEONJJ_OFFSET UNITYSDK_OFFSET(0xF43BF30)
#define DHBOGGBEMFF_HLJOJGOBMPO_OFFSET UNITYSDK_OFFSET(0xF43F880)
#define DHBOGGBEMFF_IDNDDDEFNML_OFFSET UNITYSDK_OFFSET(0xF43D710)
#define DHBOGGBEMFF_IEFOPGBPHNE_OFFSET UNITYSDK_OFFSET(0xF436F30)
#define DHBOGGBEMFF_IEIKOGDLPMC_OFFSET UNITYSDK_OFFSET(0xF43D050)
#define DHBOGGBEMFF_IHOEEIIMEPK_OFFSET UNITYSDK_OFFSET(0xF436340)
#define DHBOGGBEMFF_ILILBNDJGLK_OFFSET UNITYSDK_OFFSET(0xF43FA30)
#define DHBOGGBEMFF_INFDLCJEKHP_OFFSET UNITYSDK_OFFSET(0xF435D30)
#define DHBOGGBEMFF_JBBKMPEKPNI_OFFSET UNITYSDK_OFFSET(0xF436B60)
#define DHBOGGBEMFF_JEGBJJLOJOJ_OFFSET UNITYSDK_OFFSET(0xF435E20)
#define DHBOGGBEMFF_JIBPNPPAOEC_OFFSET UNITYSDK_OFFSET(0xF437060)
#define DHBOGGBEMFF_JJPFENHBHFN_OFFSET UNITYSDK_OFFSET(0xF437A50)
#define DHBOGGBEMFF_JKOJLLBNDNO_1_OFFSET UNITYSDK_OFFSET(0xF441DF0)
#define DHBOGGBEMFF_JKOJLLBNDNO_OFFSET UNITYSDK_OFFSET(0xF440500)
#define DHBOGGBEMFF_JMIBHMICFOG_OFFSET UNITYSDK_OFFSET(0xF43FFC0)
#define DHBOGGBEMFF_JMMJNCKMFDH_OFFSET UNITYSDK_OFFSET(0xF436150)
#define DHBOGGBEMFF_KCGAIHPHALE_OFFSET UNITYSDK_OFFSET(0xF43FD10)
#define DHBOGGBEMFF_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0xF43FEE0)
#define DHBOGGBEMFF_KLDFMLBNALF_OFFSET UNITYSDK_OFFSET(0xF442DD0)
#define DHBOGGBEMFF_KMKLECPJMGM_OFFSET UNITYSDK_OFFSET(0xF443190)
#define DHBOGGBEMFF_KNNPIBLDGLJ_OFFSET UNITYSDK_OFFSET(0xF43D6B0)
#define DHBOGGBEMFF_LBCBPPOHDDG_OFFSET UNITYSDK_OFFSET(0xF436550)
#define DHBOGGBEMFF_LCFMCFMIEHP_OFFSET UNITYSDK_OFFSET(0xF440A90)
#define DHBOGGBEMFF_LCIHIKIPGPF_OFFSET UNITYSDK_OFFSET(0xF4443D0)
#define DHBOGGBEMFF_LCOAFHKHGIE_OFFSET UNITYSDK_OFFSET(0xF437400)
#define DHBOGGBEMFF_LDDBAPAINNN_OFFSET UNITYSDK_OFFSET(0xF4370F0)
#define DHBOGGBEMFF_LLHAOCFPOLP_OFFSET UNITYSDK_OFFSET(0xF443290)
#define DHBOGGBEMFF_MBAIEFNCPKJ_OFFSET UNITYSDK_OFFSET(0xF4428D0)
#define DHBOGGBEMFF_MBDGMJIBIIB_OFFSET UNITYSDK_OFFSET(0xF442C60)
#define DHBOGGBEMFF_MDPKCGPHAED_OFFSET UNITYSDK_OFFSET(0xF4368A0)
#define DHBOGGBEMFF_MIHNOIDJLKB_OFFSET UNITYSDK_OFFSET(0xF436C50)
#define DHBOGGBEMFF_MIKLBALLEKK_OFFSET UNITYSDK_OFFSET(0xF43DDA0)
#define DHBOGGBEMFF_MNBKMGEAKJF_OFFSET UNITYSDK_OFFSET(0xF441AC0)
#define DHBOGGBEMFF_MNJJBIPJMFP_OFFSET UNITYSDK_OFFSET(0xF436940)
#define DHBOGGBEMFF_NDMKPPFCKPH_OFFSET UNITYSDK_OFFSET(0xF436410)
#define DHBOGGBEMFF_NFNLMDLIBML_OFFSET UNITYSDK_OFFSET(0xF4377E0)
#define DHBOGGBEMFF_NGBOBBBCOBA_OFFSET UNITYSDK_OFFSET(0xF443000)
#define DHBOGGBEMFF_NIFHFEGHPGE_OFFSET UNITYSDK_OFFSET(0xF4360D0)
#define DHBOGGBEMFF_NJNFLAJEOJM_OFFSET UNITYSDK_OFFSET(0xF436730)
#define DHBOGGBEMFF_NMCFNLCADOB_OFFSET UNITYSDK_OFFSET(0xF436FA0)
#define DHBOGGBEMFF_NMIDJDDFJOO_OFFSET UNITYSDK_OFFSET(0xF437250)
#define DHBOGGBEMFF_NNGIBIOBEAE_OFFSET UNITYSDK_OFFSET(0xF436310)
#define DHBOGGBEMFF_OAFKAFLEMFK_OFFSET UNITYSDK_OFFSET(0xF43FCB0)
#define DHBOGGBEMFF_OILEKKPMGEC_1_OFFSET UNITYSDK_OFFSET(0xF43B870)
#define DHBOGGBEMFF_OILEKKPMGEC_OFFSET UNITYSDK_OFFSET(0xF43B4E0)
#define DHBOGGBEMFF_OLMHMKACMGD_OFFSET UNITYSDK_OFFSET(0xF4363E0)
#define DHBOGGBEMFF_PICNHMNAHAB_OFFSET UNITYSDK_OFFSET(0xF43BE00)
#define DHBOGGBEMFF_PJDLGAIBCML_OFFSET UNITYSDK_OFFSET(0xF443680)
#define DHBOGGBEMFF_PKGGJLHGPBH_OFFSET UNITYSDK_OFFSET(0xF443890)
#define DHBOGGBEMFF_PNIAHOEPPFD_OFFSET UNITYSDK_OFFSET(0xF436160)
#define DHBOGGBEMFF_POOFMLBIHPC_OFFSET UNITYSDK_OFFSET(0xF435E90)

inline static constexpr unsigned int DHBOGGBEMFF_TypeDefinitionIndex = 50200;

	class DHBOGGBEMFF : public ::System::Object
	{
	public:
		::CNNIBJAKKOI* IFHNIEDNEAF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CNNIBJAKKOI*>* CHHCMCIINFG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CNNIBJAKKOI*>* CEEOKEJFJKA; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::CustomRP::CustomLightQualityFilter, ::CNNIBJAKKOI*>* NLKJHPDFEJM; // 0x28
		::CNNIBJAKKOI* EHJMDJKGMFL; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JKGJBOIFODN; // 0x38
		::System::Collections::Generic::LinkedList_1<::System::Object*>* PJFNHMNJPKG; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* PHIBHIOFGDA; // 0x48
		::System::String* CMHGNGAMDCG; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CNNIBJAKKOI*>* HDMAAGDHBDJ; // 0x58
		::System::Collections::Generic::List_1<::MEIGMBOLDOF*>* ICECDIBGCPJ; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Int32>* BFGNNGMEEGP; // 0x68
		::Collections::Pooled::PooledList_1<::System::Int32>* EENHOKBKGCG; // 0x70
		::Collections::Pooled::PooledList_1<::System::Int32>* JMAJAIDOGDO; // 0x78
		::ScenenLightManager::BlockEnvExportDataHeader* OCCJGHOLOPD; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LKEIKDJAKOG; // 0x88
		::System::Collections::Generic::List_1<::System::Int64>* BAOEDLJJFPM; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GODBDKAGLOH; // 0x98
		::System::Collections::Generic::HashSet_1<::System::String*>* EAJIGLEDBOJ; // 0xA0
		::CNNIBJAKKOI* FGGKIHGBADJ; // 0xA8
		::CNNIBJAKKOI* FBMJNCKFNEI; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HMKPHEAHOHD; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* CFDBFJBPIFB; // 0xC0
		::System::String* ONDMEGKNDIJ; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* AIABELJGOCH; // 0xD0
		::UnityEngine::GameObject* ALBCIPHNOBB; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*>* EGFFEJBEFPN; // 0xE0
		::CNNIBJAKKOI* GELEBNBBPFN; // 0xE8
		::System::Collections::Generic::List_1<::MEIGMBOLDOF*>* LNIPKLMALGD; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* LDMIAIONOON; // 0xF8
		::System::Collections::Generic::List_1<::System::Boolean>* FLOMOPHKEAA; // 0x100
		::KPNFPHJPOMM* GJCGNLFBDFP; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CNNIBJAKKOI*>* GGEKCECLHOD; // 0x110
		::System::Collections::Generic::List_1<::IDBHLOCKPJL*>* BMHNOAEJMMH; // 0x118
		::System::Collections::Generic::LinkedList_1<::ONEMIJCPBEO*>* PCEBFMGLJOE; // 0x120
		::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* JOJFINMFCIG; // 0x128
		::System::String* IAAMJGILNIE; // 0x130
		::RPG::CustomRP::CustomLightQualityFilter MIJENEBEDOK; // 0x138
		::System::Single MJHPMOBOJFL; // 0x13C
		::System::Int32 MLFKDCAINOH; // 0x140
		::ScenenLightManager::FadingState NBHPFJAGCIG; // 0x144
		static ::DHBOGGBEMFF** StaticGet_CAPCFPCKDAB()
		{
			return (::DHBOGGBEMFF**)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x5E0D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_DNLDGDGKNHE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x5E0D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHBOGGBEMFF*>** StaticGet_ADGLJEDHLGK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::DHBOGGBEMFF*>**)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x5E0E0);
		}

		static ::System::Collections::Generic::Queue_1<::System::Int32>** StaticGet_NEHCKJLGFDL()
		{
			return (::System::Collections::Generic::Queue_1<::System::Int32>**)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x5E0E8);
		}

		static ::RPG::Client::EnvironmentSystem** StaticGet_LKDKHHMECAG()
		{
			return (::RPG::Client::EnvironmentSystem**)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x5E0F0);
		}

		static ::System::Boolean* StaticGet_CMAKJFGCOAH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x13E70);
		}

		static ::System::Boolean* StaticGet_PLIBOLNCCBP()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x13E71);
		}

		static ::System::Int32* StaticGet_EKLIHEEOLJI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x13E74);
		}

		static ::System::Int32* StaticGet_DJDBABDKBNI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DHBOGGBEMFF")->GetStaticField(0x13E78);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CCTOR_OFFSET))();
		}

		::System::Double DMIAKCFEDKH()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DMIAKCFEDKH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IDBHLOCKPJL*>* FJJPLAMAGGH()
		{
			return ((::System::Collections::Generic::List_1<::IDBHLOCKPJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FJJPLAMAGGH_OFFSET))(this);
		}

		::System::Void INFDLCJEKHP(::IDBHLOCKPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBHLOCKPJL*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_INFDLCJEKHP_OFFSET))(this, a1);
		}

		::System::Void JEGBJJLOJOJ(::IDBHLOCKPJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBHLOCKPJL*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JEGBJJLOJOJ_OFFSET))(this, a1);
		}

		::System::Void POOFMLBIHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_POOFMLBIHPC_OFFSET))(this);
		}

		::System::Void CCDIOCPHHGF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CCDIOCPHHGF_OFFSET))(this, a1);
		}

		::System::Void NIFHFEGHPGE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NIFHFEGHPGE_OFFSET))(this, a1);
		}

		::IOJHOEOABKB* FBPPBIJFFBL()
		{
			return ((::IOJHOEOABKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FBPPBIJFFBL_OFFSET))(this);
		}

		::RPG::CustomRP::CustomLightQualityFilter JMMJNCKMFDH()
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JMMJNCKMFDH_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::System::Object*>* PNIAHOEPPFD()
		{
			return ((::System::Collections::Generic::LinkedList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PNIAHOEPPFD_OFFSET))(this);
		}

		::System::Int32 CFCPINEOBML()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CFCPINEOBML_OFFSET))(this);
		}

		::System::Int32 CPKCBGBJOEF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CPKCBGBJOEF_OFFSET))(this);
		}

		::System::Int32 GFOJMFHLDOL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GFOJMFHLDOL_OFFSET))(this);
		}

		::System::Int32 BNJEMNMGPKH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BNJEMNMGPKH_OFFSET))(this);
		}

		::CNNIBJAKKOI* NNGIBIOBEAE()
		{
			return ((::CNNIBJAKKOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NNGIBIOBEAE_OFFSET))(this);
		}

		::UnityEngine::GameObject* DBPIGGGDAHN()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DBPIGGGDAHN_OFFSET))(this);
		}

		::System::String* GDGAFFCFHCF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GDGAFFCFHCF_OFFSET))(this);
		}

		::System::Int32 IHOEEIIMEPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_IHOEEIIMEPK_OFFSET))(this);
		}

		::System::Int32 HHGBMNIGKNL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HHGBMNIGKNL_OFFSET))(this);
		}

		::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>* OLMHMKACMGD()
		{
			return ((::RPG::Client::LRUCache_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_OLMHMKACMGD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>* DAGFBHOLDOC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DAGFBHOLDOC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EEJEOOAHDCD()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_EEJEOOAHDCD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NDMKPPFCKPH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NDMKPPFCKPH_OFFSET))(this);
		}

		::System::Boolean AFBFGKOGAOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AFBFGKOGAOA_OFFSET))(this);
		}

		::System::Int32 LBCBPPOHDDG(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LBCBPPOHDDG_OFFSET))(this, a1);
		}

		::System::Int32 BMMDLDPNIBC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BMMDLDPNIBC_OFFSET))(this, a1);
		}

		::System::Void DBBALPFEGEJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DBBALPFEGEJ_OFFSET))(this, a1, a2);
		}

		::System::Void NJNFLAJEOJM(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NJNFLAJEOJM_OFFSET))(this, a1, a2);
		}

		::System::Void MDPKCGPHAED(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MDPKCGPHAED_OFFSET))(this, a1, a2);
		}

		::System::Int32 MNJJBIPJMFP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MNJJBIPJMFP_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* ACABPNKKPEF(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_ACABPNKKPEF_OFFSET))(this, a1);
		}

		::System::Void JBBKMPEKPNI(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JBBKMPEKPNI_OFFSET))(this, a1, a2);
		}

		::System::Void MIHNOIDJLKB(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MIHNOIDJLKB_OFFSET))(this, a1, a2);
		}

		::System::Void BDAEJGKGLBD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BDAEJGKGLBD_OFFSET))(this, a1);
		}

		::System::Void JIBPNPPAOEC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JIBPNPPAOEC_OFFSET))(this, a1);
		}

		::System::Void LDDBAPAINNN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LDDBAPAINNN_OFFSET))(this, a1);
		}

		::System::Void NMIDJDDFJOO(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NMIDJDDFJOO_OFFSET))(this, a1, a2, a3);
		}

		::System::String* LCOAFHKHGIE(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LCOAFHKHGIE_OFFSET))(this, a1);
		}

		::System::String* EJGNOIJHDPG(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_EJGNOIJHDPG_OFFSET))(this, a1);
		}

		::System::Void DIHILBFMODG(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DIHILBFMODG_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* AGGKBLFDGOC(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AGGKBLFDGOC_OFFSET))(this, a1);
		}

		::System::Void NFNLMDLIBML(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NFNLMDLIBML_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ECMMOPHLFHE(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_ECMMOPHLFHE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EBLEKIGBAAL(::System::String* a1, ::RPG::CustomRP::CustomLightQualityFilter a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_EBLEKIGBAAL_OFFSET))(this, a1, a2);
		}

		::System::Void AHJGHBJKMGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AHJGHBJKMGH_OFFSET))(this);
		}

		::System::Void GPMFNHOBIDI(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GPMFNHOBIDI_OFFSET))(this, a1);
		}

		::System::Void JJPFENHBHFN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JJPFENHBHFN_OFFSET))(this, a1);
		}

		::System::Boolean IEFOPGBPHNE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_IEFOPGBPHNE_OFFSET))(this, a1);
		}

		::System::Void FLIDLGMGHIM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FLIDLGMGHIM_OFFSET))(this, a1);
		}

		::System::Void HIJEJKKLBPD(::RPG::CustomRP::CustomLightQualityFilter a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HIJEJKKLBPD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* DAEPDCONMKP(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DAEPDCONMKP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* FCMFFKABNLP(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FCMFFKABNLP_OFFSET))(this, a1);
		}

		::System::Void HIJEJKKLBPD_1(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HIJEJKKLBPD_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HDNGNJPANAI(::DHBOGGBEMFF_PBCMKBIEJOP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHBOGGBEMFF_PBCMKBIEJOP*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HDNGNJPANAI_OFFSET))(this, a1, a2);
		}

		::System::Void PICNHMNAHAB(::DHBOGGBEMFF_PBCMKBIEJOP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHBOGGBEMFF_PBCMKBIEJOP*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PICNHMNAHAB_OFFSET))(this, a1, a2);
		}

		::System::Void GGJCLJPELBL(::DHBOGGBEMFF_PBCMKBIEJOP* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHBOGGBEMFF_PBCMKBIEJOP*, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GGJCLJPELBL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int64>* DKPNJJBNOIE(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::String* a4)
		{
			return ((::System::Collections::Generic::List_1<::System::Int64>*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DKPNJJBNOIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DPDFNGGIIPL(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4, ::System::String* a5, ::System::Collections::Generic::List_1<::System::Int64>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DPDFNGGIIPL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IEIKOGDLPMC(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_IEIKOGDLPMC_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::CustomRP::CustomLightQualityFilter KNNPIBLDGLJ(::RPG::CustomRP::CustomLightQualityFilter a1)
		{
			return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_KNNPIBLDGLJ_OFFSET))(a1);
		}

		::System::Void IDNDDDEFNML(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_IDNDDDEFNML_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FDAFHPLFGMG(::System::Int32 a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3, ::DHBOGGBEMFF_FANENNLGHPH* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::DHBOGGBEMFF_FANENNLGHPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FDAFHPLFGMG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BKKDENNICBG(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::DHBOGGBEMFF_FANENNLGHPH* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::DHBOGGBEMFF_FANENNLGHPH*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BKKDENNICBG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FMIGOKIDKJL(::CELOMGMBCKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CELOMGMBCKK*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FMIGOKIDKJL_OFFSET))(this, a1);
		}

		::MEIGMBOLDOF* BIPDJOLFJNP(::UnityEngine::GameObject* a1)
		{
			return ((::MEIGMBOLDOF*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BIPDJOLFJNP_OFFSET))(this, a1);
		}

		::System::Void COJJNBBPOIM(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_COJJNBBPOIM_OFFSET))(this, a1);
		}

		::System::Void CEEJOEFDHNG(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CEEJOEFDHNG_OFFSET))(this, a1);
		}

		::System::Void COJJNBBPOIM_1(::System::Int32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_COJJNBBPOIM_1_OFFSET))(this, a1, a2);
		}

		::System::Void CEEJOEFDHNG_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CEEJOEFDHNG_1_OFFSET))(this, a1);
		}

		::System::Void CEEJOEFDHNG_2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CEEJOEFDHNG_2_OFFSET))(this, a1);
		}

		::System::Void ECODKBAMDBP(::MEIGMBOLDOF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_ECODKBAMDBP_OFFSET))(this, a1, a2);
		}

		::System::Void AKGDJFOAPDO(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AKGDJFOAPDO_OFFSET))(this, a1);
		}

		::System::Void FMEDHOKIGCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FMEDHOKIGCJ_OFFSET))(this, a1);
		}

		::System::Void HLJOJGOBMPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HLJOJGOBMPO_OFFSET))(this);
		}

		static ::System::Int32 ILILBNDJGLK()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_ILILBNDJGLK_OFFSET))();
		}

		static ::System::Int32 GMLAFCKCLAD()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GMLAFCKCLAD_OFFSET))();
		}

		static ::DHBOGGBEMFF* OAFKAFLEMFK(::System::Int32 a1)
		{
			return ((::DHBOGGBEMFF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_OAFKAFLEMFK_OFFSET))(a1);
		}

		static ::DHBOGGBEMFF* KCGAIHPHALE()
		{
			return ((::DHBOGGBEMFF*(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_KCGAIHPHALE_OFFSET))();
		}

		static ::DHBOGGBEMFF* KEBEIGGJIPA(::System::Int32 a1)
		{
			return ((::DHBOGGBEMFF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_KEBEIGGJIPA_OFFSET))(a1);
		}

		static ::System::Void JMIBHMICFOG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JMIBHMICFOG_OFFSET))(a1);
		}

		static ::System::Void FKGAGNDMGOH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FKGAGNDMGOH_OFFSET))();
		}

		static ::System::Void JKOJLLBNDNO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JKOJLLBNDNO_OFFSET))();
		}

		static ::System::Void JKOJLLBNDNO_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_JKOJLLBNDNO_1_OFFSET))(a1);
		}

		::System::Void MNBKMGEAKJF(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MNBKMGEAKJF_OFFSET))(this, a1);
		}

		static ::System::Int32 BPFGKJDBJLK()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BPFGKJDBJLK_OFFSET))();
		}

		static ::System::Void CMMLLEFOFFK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CMMLLEFOFFK_OFFSET))();
		}

		static ::System::Void GFJOIPGOJIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GFJOIPGOJIC_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_DISPOSE_OFFSET))(this);
		}

		::MEIGMBOLDOF* NMCFNLCADOB(::System::Int32 a1)
		{
			return ((::MEIGMBOLDOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NMCFNLCADOB_OFFSET))(this, a1);
		}

		::System::Int32 HDKBEJAJMNF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HDKBEJAJMNF_OFFSET))(this);
		}

		::MEIGMBOLDOF* CJJDKCBNNCE(::System::Int32 a1)
		{
			return ((::MEIGMBOLDOF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CJJDKCBNNCE_OFFSET))(this, a1);
		}

		::System::Void MBAIEFNCPKJ(::System::Int64 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MBAIEFNCPKJ_OFFSET))(this, a1, a2);
		}

		::DHBOGGBEMFF_PVSState MBDGMJIBIIB(::System::Int32 a1)
		{
			return ((::DHBOGGBEMFF_PVSState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MBDGMJIBIIB_OFFSET))(this, a1);
		}

		::System::Int32 KLDFMLBNALF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_KLDFMLBNALF_OFFSET))(this, a1);
		}

		::System::Void FILOFLMNNLI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_FILOFLMNNLI_OFFSET))(this, a1);
		}

		::System::Void AGMGJKMKEPB(::ScenenLightManager::BlockEnvExportDataHeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::BlockEnvExportDataHeader*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AGMGJKMKEPB_OFFSET))(this, a1);
		}

		::System::Void CHFMOACEABM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CHFMOACEABM_OFFSET))(this);
		}

		::System::Void NGBOBBBCOBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_NGBOBBBCOBA_OFFSET))(this, a1);
		}

		::System::Void KMKLECPJMGM(::CNNIBJAKKOI* a1, ::ScenenLightManager::LightOp a2)
		{
			return ((::System::Void(*)(::PVOID, ::CNNIBJAKKOI*, ::ScenenLightManager::LightOp))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_KMKLECPJMGM_OFFSET))(this, a1, a2);
		}

		::System::Void LLHAOCFPOLP(::CNNIBJAKKOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNNIBJAKKOI*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LLHAOCFPOLP_OFFSET))(this, a1);
		}

		::System::Void HKPHAAEONJJ(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5, ::DHBOGGBEMFF_FANENNLGHPH* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32, ::DHBOGGBEMFF_FANENNLGHPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HKPHAAEONJJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::CNNIBJAKKOI* CLDMFJNNGFF(::System::String* a1, ::System::String* a2, ::RPG::CustomRP::CustomLightQualityFilter a3)
		{
			return ((::CNNIBJAKKOI*(*)(::PVOID, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CLDMFJNNGFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OILEKKPMGEC(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::CNNIBJAKKOI* a5, ::ScenenLightManager::LightOp a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_OILEKKPMGEC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void OILEKKPMGEC_1(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::ScenenLightManager::LightOp a5, ::System::Boolean a6, ::System::Int32 a7, ::DHBOGGBEMFF_FANENNLGHPH* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::ScenenLightManager::LightOp, ::System::Boolean, ::System::Int32, ::DHBOGGBEMFF_FANENNLGHPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_OILEKKPMGEC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void CKPEECPCOPM(::System::Int32 a1, ::System::String* a2, ::CNNIBJAKKOI* a3, ::ScenenLightManager::LightOp a4, ::System::Int32 a5, ::DHBOGGBEMFF_FANENNLGHPH* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::CNNIBJAKKOI*, ::ScenenLightManager::LightOp, ::System::Int32, ::DHBOGGBEMFF_FANENNLGHPH*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_CKPEECPCOPM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void AOIJDIGADML(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AOIJDIGADML_OFFSET))(this, a1);
		}

		::System::Void MIKLBALLEKK(::ONEMIJCPBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONEMIJCPBEO*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_MIKLBALLEKK_OFFSET))(this, a1);
		}

		::System::Void PJDLGAIBCML(::ScenenLightManager::FadingState a1)
		{
			return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PJDLGAIBCML_OFFSET))(this, a1);
		}

		::System::Void BMNHIENNCOK(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_BMNHIENNCOK_OFFSET))(this, a1);
		}

		::System::Void PKGGJLHGPBH(::MEIGMBOLDOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEIGMBOLDOF*))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_PKGGJLHGPBH_OFFSET))(this, a1);
		}

		::System::Void AGADOGHGOCD(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_AGADOGHGOCD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDBKKIKMEAJ(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HDBKKIKMEAJ_OFFSET))(this, a1);
		}

		::System::Void GHCGOHAOIEA(::System::Int32 a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_GHCGOHAOIEA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HCLMAONKBKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_HCLMAONKBKP_OFFSET))(this);
		}

		::System::Void LCIHIKIPGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LCIHIKIPGPF_OFFSET))(this);
		}

		::System::Void LCFMCFMIEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBOGGBEMFF_LCFMCFMIEHP_OFFSET))(this);
		}

	};
