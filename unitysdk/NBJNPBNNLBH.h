#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/FPHBDDAACJC.h"
#include "unitysdk/RPG/Client/EAirshipDriveType.h"
#include "unitysdk/RPG/Client/EAirshipMoorState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/JJBAAGFMEKM.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NBJNPBNNLBH;
namespace RPG::Client { class AirlineStation; }
namespace RPG::Client { class AirlineWay; }
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipAudio; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define NBJNPBNNLBH_ADLEKLABGHL_OFFSET UNITYSDK_OFFSET(0xBAD5B90)
#define NBJNPBNNLBH_AIFJCJPLKCK_1_OFFSET UNITYSDK_OFFSET(0xBAD6200)
#define NBJNPBNNLBH_AIFJCJPLKCK_OFFSET UNITYSDK_OFFSET(0xBAD50E0)
#define NBJNPBNNLBH_ALBLOBLBGEL_OFFSET UNITYSDK_OFFSET(0xBAD80C0)
#define NBJNPBNNLBH_ANFKIOLKBHD_OFFSET UNITYSDK_OFFSET(0xBAD46D0)
#define NBJNPBNNLBH_BCEOGFMBIPL_OFFSET UNITYSDK_OFFSET(0xBAD6960)
#define NBJNPBNNLBH_BENEOEINLPD_OFFSET UNITYSDK_OFFSET(0xBAD89B0)
#define NBJNPBNNLBH_BKPNFDGIJJF_OFFSET UNITYSDK_OFFSET(0xBAD8000)
#define NBJNPBNNLBH_BLHLFHGGJLP_OFFSET UNITYSDK_OFFSET(0xBAD4820)
#define NBJNPBNNLBH_BLPLAFPIJPC_OFFSET UNITYSDK_OFFSET(0xBAD7F80)
#define NBJNPBNNLBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAD8CD0)
#define NBJNPBNNLBH_CFIONMKPNNK_OFFSET UNITYSDK_OFFSET(0xBAD75D0)
#define NBJNPBNNLBH_CHEIFPAGFBB_OFFSET UNITYSDK_OFFSET(0xBAD6E10)
#define NBJNPBNNLBH_CJCGNAMNBKP_OFFSET UNITYSDK_OFFSET(0xBAD6EF0)
#define NBJNPBNNLBH_CLEAR_OFFSET UNITYSDK_OFFSET(0xBACA5E0)
#define NBJNPBNNLBH_CNCHAAKBIJD_OFFSET UNITYSDK_OFFSET(0xBAD4DB0)
#define NBJNPBNNLBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBACA230)
#define NBJNPBNNLBH_DFHLKMNCNCD_OFFSET UNITYSDK_OFFSET(0xBACE020)
#define NBJNPBNNLBH_DHKGAFLHBLH_OFFSET UNITYSDK_OFFSET(0xBAD4010)
#define NBJNPBNNLBH_DKFKBFPDJDO_OFFSET UNITYSDK_OFFSET(0xBAD8790)
#define NBJNPBNNLBH_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xBACA300)
#define NBJNPBNNLBH_ENOFFOIMKFA_OFFSET UNITYSDK_OFFSET(0xBACA7E0)
#define NBJNPBNNLBH_ENPMDCNFFMO_OFFSET UNITYSDK_OFFSET(0xBAD8720)
#define NBJNPBNNLBH_EPPAEPPJDJL_OFFSET UNITYSDK_OFFSET(0xBAD7F50)
#define NBJNPBNNLBH_FMHGDPCLMEN_OFFSET UNITYSDK_OFFSET(0xBAD23A0)
#define NBJNPBNNLBH_GDHOCNHPBOL_OFFSET UNITYSDK_OFFSET(0xBACF010)
#define NBJNPBNNLBH_GDJEMDOKDED_OFFSET UNITYSDK_OFFSET(0xBAD7530)
#define NBJNPBNNLBH_GFLEHLPNJPK_OFFSET UNITYSDK_OFFSET(0xBAD7A70)
#define NBJNPBNNLBH_GJIENLJDNGA_OFFSET UNITYSDK_OFFSET(0xBAD7FD0)
#define NBJNPBNNLBH_GKGAGBOHMOD_OFFSET UNITYSDK_OFFSET(0xBACF500)
#define NBJNPBNNLBH_GKILCNPHMMK_OFFSET UNITYSDK_OFFSET(0xBAD71E0)
#define NBJNPBNNLBH_GLABKDJPOPC_OFFSET UNITYSDK_OFFSET(0xBAD89A0)
#define NBJNPBNNLBH_GMJINEJMCOJ_1_OFFSET UNITYSDK_OFFSET(0xBACEE10)
#define NBJNPBNNLBH_GMJINEJMCOJ_OFFSET UNITYSDK_OFFSET(0xBACE070)
#define NBJNPBNNLBH_HAPECNHHHDK_OFFSET UNITYSDK_OFFSET(0xBAD85F0)
#define NBJNPBNNLBH_HBNJEPLKAHH_OFFSET UNITYSDK_OFFSET(0xBAD62D0)
#define NBJNPBNNLBH_HIGIMEBDOKL_OFFSET UNITYSDK_OFFSET(0xBAD6450)
#define NBJNPBNNLBH_HLBLJGIMJDM_1_OFFSET UNITYSDK_OFFSET(0xBAD62F0)
#define NBJNPBNNLBH_HLBLJGIMJDM_OFFSET UNITYSDK_OFFSET(0xBAD52F0)
#define NBJNPBNNLBH_IFNNICOOLJF_OFFSET UNITYSDK_OFFSET(0xBAD3D90)
#define NBJNPBNNLBH_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0xBAD80A0)
#define NBJNPBNNLBH_IJDCKAGDJOH_OFFSET UNITYSDK_OFFSET(0xBAD4300)
#define NBJNPBNNLBH_ILDJFKOPNHO_OFFSET UNITYSDK_OFFSET(0xBAD7F70)
#define NBJNPBNNLBH_IPAFBBDIHHM_OFFSET UNITYSDK_OFFSET(0xBAD26F0)
#define NBJNPBNNLBH_JAFBFJEMBNP_OFFSET UNITYSDK_OFFSET(0xBAD8310)
#define NBJNPBNNLBH_JFHDBHFJBLB_OFFSET UNITYSDK_OFFSET(0xBAD5E30)
#define NBJNPBNNLBH_JJOHPNFFCEG_OFFSET UNITYSDK_OFFSET(0xBAD7310)
#define NBJNPBNNLBH_JLGKKDGBGLB_OFFSET UNITYSDK_OFFSET(0xBAD4AA0)
#define NBJNPBNNLBH_KCFFGPANNNB_OFFSET UNITYSDK_OFFSET(0xBAD82E0)
#define NBJNPBNNLBH_KHLMMBEIBGA_OFFSET UNITYSDK_OFFSET(0xBACB2B0)
#define NBJNPBNNLBH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBACA980)
#define NBJNPBNNLBH_LAPIEPKKOOL_OFFSET UNITYSDK_OFFSET(0xBACE4C0)
#define NBJNPBNNLBH_LCALOBJBGDD_OFFSET UNITYSDK_OFFSET(0xBACEA30)
#define NBJNPBNNLBH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xBAD7EF0)
#define NBJNPBNNLBH_LDBBLOCKNGF_OFFSET UNITYSDK_OFFSET(0xBAD8370)
#define NBJNPBNNLBH_LEBHILIHGDC_OFFSET UNITYSDK_OFFSET(0xBACF510)
#define NBJNPBNNLBH_LHGJCBFLIDC_OFFSET UNITYSDK_OFFSET(0xBAD4A40)
#define NBJNPBNNLBH_LKIOKOMGGBN_OFFSET UNITYSDK_OFFSET(0xBACE340)
#define NBJNPBNNLBH_LPGIMLNKFPC_OFFSET UNITYSDK_OFFSET(0xBAD8520)
#define NBJNPBNNLBH_LPJEHCMJPPL_OFFSET UNITYSDK_OFFSET(0xBAD78B0)
#define NBJNPBNNLBH_LPOJKAMJEII_OFFSET UNITYSDK_OFFSET(0xBAD7800)
#define NBJNPBNNLBH_LPOJMOFCLED_OFFSET UNITYSDK_OFFSET(0xBAD5870)
#define NBJNPBNNLBH_MFEDKGHADMD_OFFSET UNITYSDK_OFFSET(0xBACDFC0)
#define NBJNPBNNLBH_MKAGBHGJGNA_OFFSET UNITYSDK_OFFSET(0xBAD7FE0)
#define NBJNPBNNLBH_NBJFLGNEBED_1_OFFSET UNITYSDK_OFFSET(0xBACB340)
#define NBJNPBNNLBH_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0xBACF5D0)
#define NBJNPBNNLBH_NCILPHNKLLI_OFFSET UNITYSDK_OFFSET(0xBACDF40)
#define NBJNPBNNLBH_NFGMAJPFOEJ_OFFSET UNITYSDK_OFFSET(0xBAD82F0)
#define NBJNPBNNLBH_NGBFIACJIPF_OFFSET UNITYSDK_OFFSET(0xBAD8300)
#define NBJNPBNNLBH_NIBFPBKNJOL_OFFSET UNITYSDK_OFFSET(0xBAD67C0)
#define NBJNPBNNLBH_NMCNONMKNJJ_OFFSET UNITYSDK_OFFSET(0xBAD2230)
#define NBJNPBNNLBH_NNPLKOOLBLM_OFFSET UNITYSDK_OFFSET(0xBAD27A0)
#define NBJNPBNNLBH_OCKJEJFOCHA_OFFSET UNITYSDK_OFFSET(0xBAD8320)
#define NBJNPBNNLBH_OEIMMPKBKPO_OFFSET UNITYSDK_OFFSET(0xBACB0D0)
#define NBJNPBNNLBH_OFNMOEEIMCA_OFFSET UNITYSDK_OFFSET(0xBACB1B0)
#define NBJNPBNNLBH_OKCBBHKBDJH_OFFSET UNITYSDK_OFFSET(0xBAD80D0)
#define NBJNPBNNLBH_OPIHNJHCAFP_OFFSET UNITYSDK_OFFSET(0xBACA580)
#define NBJNPBNNLBH_PALKBBBDBJN_OFFSET UNITYSDK_OFFSET(0xBACB060)
#define NBJNPBNNLBH_PEMLPLGBPCL_OFFSET UNITYSDK_OFFSET(0xBACA840)
#define NBJNPBNNLBH_PFELGEHJFBD_OFFSET UNITYSDK_OFFSET(0xBAD7930)
#define NBJNPBNNLBH_PGMMEHLDFKC_OFFSET UNITYSDK_OFFSET(0xBAD8410)
#define NBJNPBNNLBH_PHDIPGFOHBB_OFFSET UNITYSDK_OFFSET(0xBAD8990)
#define NBJNPBNNLBH_PIBPCABNDEL_OFFSET UNITYSDK_OFFSET(0xBAD7D00)
#define NBJNPBNNLBH_PKNLBCHACKB_1_OFFSET UNITYSDK_OFFSET(0xBAD4B60)
#define NBJNPBNNLBH_PKNLBCHACKB_OFFSET UNITYSDK_OFFSET(0xBAD5740)
#define NBJNPBNNLBH_PLLBNPHOBMB_OFFSET UNITYSDK_OFFSET(0xBAD79D0)
#define NBJNPBNNLBH_POJDCEKAMHH_OFFSET UNITYSDK_OFFSET(0xBAD7F60)

	class NBJNPBNNLBH : public ::System::Object
	{
	public:
		::RPG::Client::Airship* EHHCPMFKNKP; // 0x10
		::System::Collections::Generic::List_1<::NBJNPBNNLBH*>* MPAEADFKOOP; // 0x18
		::FPHBDDAACJC MOJOBECBPPA; // 0x20
		::NBJNPBNNLBH* IFKCKKFEEMO; // 0x68
		::FPHBDDAACJC HPMKDFPIPCI; // 0x70
		::RPG::Client::AirshipAudio* INJBDHEANIA; // 0xB8
		::System::Single AIPDJMFBEMF; // 0xC0
		::System::Single JACEHJBPOJB; // 0xC4
		::System::Single CIDBBGANFFK; // 0xC8
		::System::Single DBMGANHFAEH; // 0xCC
		::System::Single CMKOGEKIOJL; // 0xD0
		::System::Single OPKAAOEOEGM; // 0xD4
		::UnityEngine::Vector3 BKGGIADOMFP; // 0xD8
		::System::Single GOMPPOJEFDK; // 0xE4
		::System::Single HCHDDFFINGC; // 0xE8
		::System::Single KMEGJIGEOJG; // 0xEC
		::System::Single JGFDPFIKDCJ; // 0xF0
		::System::Single GPNONFBBNHC; // 0xF4
		::System::Single OFAIJMBBPCC; // 0xF8
		::System::Single AOCHMPGLPLA; // 0xFC
		::UnityEngine::Vector3 CCKGJGIAGOD; // 0x100
		::RPG::Client::EAirshipDriveType LNPGBOKLEPO; // 0x10C
		::System::Single BNPEDEHPCFN; // 0x110
		::System::Single LBHOAPLLECN; // 0x114
		::UnityEngine::Vector3 MANBOKHMMGN; // 0x118
		::System::Single FHAEMNFFFLM; // 0x124
		::RPG::Client::EAirshipMoorState IEBBGCCGMNG; // 0x128
		::System::Single MIHBHGABGMM; // 0x12C
		::System::Single CECBHBJJDHD; // 0x130
		::System::Single PMKEHMCJMKJ; // 0x134
		::System::Single CDIMALHJJOG; // 0x138
		::System::Int32 FLFHKELNJEG; // 0x13C
		::System::Int32 HGIGNADJBAE; // 0x140
		::System::Single OBDODMLPIGH; // 0x144
		::System::Single NJLLNKOBDCK; // 0x148
		::System::Single BLOFKKJFBOG; // 0x14C
		::System::Single OJMJMLBBJCH; // 0x150
		::System::Single DPKDGJAGHJH; // 0x154
		::System::Boolean GLKNAGNAFLK; // 0x158
		::System::Boolean MECDICPBLML; // 0x159
		::System::Boolean GHKDBJKJHMN; // 0x15A
		::System::Boolean JELADKDAMJN; // 0x15B
		::System::Boolean GJHOHBILDMD; // 0x15C
		::System::Boolean GENEAPGPNDI; // 0x15D
		::System::Boolean AIIAHINAIJE; // 0x15E
		static ::System::Int32* StaticGet_JGCOFIOHCHO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NBJNPBNNLBH")->GetStaticField(0x70D0);
		}

		static ::System::Int32* StaticGet_BBHOEIAOEJJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NBJNPBNNLBH")->GetStaticField(0x70D4);
		}

		static ::System::Int32* StaticGet_KHKAPDIEKKH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NBJNPBNNLBH")->GetStaticField(0x70D8);
		}

		static ::System::Int32* StaticGet_MFDMAFAFDOA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NBJNPBNNLBH")->GetStaticField(0x70DC);
		}

		static ::System::Int32* StaticGet_GIOJMIGICCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NBJNPBNNLBH")->GetStaticField(0x70E0);
		}

		// static const ::System::Object ENEIACENMAD; // 0x0
		// static const ::System::Object MKKDHENLMBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CCTOR_OFFSET))();
		}

		::System::Void DLAILGNMFGI(::RPG::Client::Airship* a1, ::System::Collections::Generic::List_1<::NBJNPBNNLBH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*, ::System::Collections::Generic::List_1<::NBJNPBNNLBH*>*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void OPIHNJHCAFP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_OPIHNJHCAFP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CLEAR_OFFSET))(this);
		}

		::System::Void PEMLPLGBPCL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PEMLPLGBPCL_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::JJBAAGFMEKM a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJBAAGFMEKM, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void NCILPHNKLLI(::EAirshipWorkingState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NCILPHNKLLI_OFFSET))(this, a1, a2);
		}

		::System::Void MFEDKGHADMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_MFEDKGHADMD_OFFSET))(this, a1);
		}

		::System::Void DFHLKMNCNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_DFHLKMNCNCD_OFFSET))(this);
		}

		::System::Void GMJINEJMCOJ(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GMJINEJMCOJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GMJINEJMCOJ_1(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GMJINEJMCOJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GDHOCNHPBOL(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GDHOCNHPBOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LEBHILIHGDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LEBHILIHGDC_OFFSET))(this, a1);
		}

		::System::Void NMCNONMKNJJ(::RPG::Client::AirlineStation* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineStation*, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NMCNONMKNJJ_OFFSET))(this, a1, a2);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NBJFLGNEBED_1_OFFSET))(this);
		}

		::System::Void AIFJCJPLKCK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_AIFJCJPLKCK_OFFSET))(this, a1);
		}

		::System::Void AIFJCJPLKCK_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_AIFJCJPLKCK_1_OFFSET))(this, a1, a2);
		}

		::System::Void HLBLJGIMJDM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_HLBLJGIMJDM_OFFSET))(this, a1);
		}

		::System::Void HLBLJGIMJDM_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_HLBLJGIMJDM_1_OFFSET))(this, a1, a2);
		}

		::System::Single JLGKKDGBGLB(::RPG::Client::AirlineWay* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_JLGKKDGBGLB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HIGIMEBDOKL(::FPHBDDAACJC a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FPHBDDAACJC))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_HIGIMEBDOKL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NIBFPBKNJOL(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NIBFPBKNJOL_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ADLEKLABGHL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ADLEKLABGHL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion BCEOGFMBIPL(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_BCEOGFMBIPL_OFFSET))(a1, a2, a3);
		}

		::System::Void PKNLBCHACKB(::FPHBDDAACJC a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::FPHBDDAACJC, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PKNLBCHACKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKNLBCHACKB_1(::FPHBDDAACJC a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::FPHBDDAACJC, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PKNLBCHACKB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 CNCHAAKBIJD(::FPHBDDAACJC a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FPHBDDAACJC, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CNCHAAKBIJD_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 LPOJMOFCLED(::FPHBDDAACJC a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FPHBDDAACJC, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LPOJMOFCLED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DHKGAFLHBLH(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_DHKGAFLHBLH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 IJDCKAGDJOH(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_IJDCKAGDJOH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single IFNNICOOLJF(::RPG::Client::AirlineWay* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_IFNNICOOLJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single OEIMMPKBKPO(::RPG::Client::AirlineWay* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_OEIMMPKBKPO_OFFSET))(this, a1);
		}

		::System::Single OFNMOEEIMCA(::RPG::Client::AirlineWay* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_OFNMOEEIMCA_OFFSET))(this, a1);
		}

		::System::Single CHEIFPAGFBB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CHEIFPAGFBB_OFFSET))(this, a1);
		}

		::System::Single LAPIEPKKOOL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LAPIEPKKOOL_OFFSET))(this);
		}

		::System::Single CJCGNAMNBKP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CJCGNAMNBKP_OFFSET))(this);
		}

		::System::Void GKILCNPHMMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GKILCNPHMMK_OFFSET))(this, a1);
		}

		::System::Void JJOHPNFFCEG(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_JJOHPNFFCEG_OFFSET))(this, a1, a2);
		}

		::System::Void LCALOBJBGDD(::System::Boolean a1, ::RPG::Client::EAirshipDriveType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EAirshipDriveType))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LCALOBJBGDD_OFFSET))(this, a1, a2);
		}

		::System::Void GDJEMDOKDED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GDJEMDOKDED_OFFSET))(this, a1);
		}

		::System::Void CFIONMKPNNK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_CFIONMKPNNK_OFFSET))(this, a1);
		}

		::System::Void LPJEHCMJPPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LPJEHCMJPPL_OFFSET))(this, a1);
		}

		::System::Void PFELGEHJFBD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PFELGEHJFBD_OFFSET))(this, a1);
		}

		::System::Void PLLBNPHOBMB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PLLBNPHOBMB_OFFSET))(this, a1);
		}

		::System::Void GFLEHLPNJPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GFLEHLPNJPK_OFFSET))(this);
		}

		::System::Void PIBPCABNDEL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PIBPCABNDEL_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean EPPAEPPJDJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_EPPAEPPJDJL_OFFSET))(this);
		}

		::System::Boolean ENOFFOIMKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ENOFFOIMKFA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NBJNPBNNLBH*>* POJDCEKAMHH()
		{
			return ((::System::Collections::Generic::List_1<::NBJNPBNNLBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_POJDCEKAMHH_OFFSET))(this);
		}

		::System::Boolean GKGAGBOHMOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GKGAGBOHMOD_OFFSET))(this);
		}

		::RPG::Client::AirlineStation* LPOJKAMJEII()
		{
			return ((::RPG::Client::AirlineStation*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LPOJKAMJEII_OFFSET))(this);
		}

		::RPG::Client::Airship* ILDJFKOPNHO()
		{
			return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ILDJFKOPNHO_OFFSET))(this);
		}

		::UnityEngine::Transform* BLPLAFPIJPC()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_BLPLAFPIJPC_OFFSET))(this);
		}

		::System::Single GJIENLJDNGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GJIENLJDNGA_OFFSET))(this);
		}

		::System::Single HBNJEPLKAHH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_HBNJEPLKAHH_OFFSET))(this);
		}

		::System::Single KHLMMBEIBGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_KHLMMBEIBGA_OFFSET))(this);
		}

		::System::Single MKAGBHGJGNA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_MKAGBHGJGNA_OFFSET))(this);
		}

		::System::Single BKPNFDGIJJF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_BKPNFDGIJJF_OFFSET))(this);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_IHLCKDJPLCF_OFFSET))(this);
		}

		::System::Single LHGJCBFLIDC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LHGJCBFLIDC_OFFSET))(this);
		}

		::System::Single ALBLOBLBGEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ALBLOBLBGEL_OFFSET))(this);
		}

		::System::Void OKCBBHKBDJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_OKCBBHKBDJH_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipAudio* KCFFGPANNNB()
		{
			return ((::RPG::Client::AirshipAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_KCFFGPANNNB_OFFSET))(this);
		}

		::System::Boolean NFGMAJPFOEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NFGMAJPFOEJ_OFFSET))(this);
		}

		::System::Boolean NGBFIACJIPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NGBFIACJIPF_OFFSET))(this);
		}

		::System::Single JAFBFJEMBNP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_JAFBFJEMBNP_OFFSET))(this);
		}

		::System::Boolean OCKJEJFOCHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_OCKJEJFOCHA_OFFSET))(this);
		}

		::System::Void PALKBBBDBJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PALKBBBDBJN_OFFSET))(this);
		}

		::System::Void LDBBLOCKNGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LDBBLOCKNGF_OFFSET))(this, a1);
		}

		::System::Void PGMMEHLDFKC(::NBJNPBNNLBH* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::NBJNPBNNLBH*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PGMMEHLDFKC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPGIMLNKFPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LPGIMLNKFPC_OFFSET))(this, a1);
		}

		::System::Boolean HAPECNHHHDK(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_HAPECNHHHDK_OFFSET))(this, a1);
		}

		::System::Void ENPMDCNFFMO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ENPMDCNFFMO_OFFSET))(this, a1);
		}

		::System::Single LKIOKOMGGBN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_LKIOKOMGGBN_OFFSET))(this);
		}

		::System::Void DKFKBFPDJDO(::RPG::Client::AirlineWay* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineWay*))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_DKFKBFPDJDO_OFFSET))(this, a1);
		}

		::System::Boolean PHDIPGFOHBB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_PHDIPGFOHBB_OFFSET))(this);
		}

		::System::Single GLABKDJPOPC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_GLABKDJPOPC_OFFSET))(this);
		}

		::System::Void IPAFBBDIHHM(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_IPAFBBDIHHM_OFFSET))(this, a1, a2);
		}

		::System::Void ANFKIOLKBHD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_ANFKIOLKBHD_OFFSET))(this, a1);
		}

		::System::Void BLHLFHGGJLP(::RPG::Client::AirlineWay* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineWay*, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_BLHLFHGGJLP_OFFSET))(this, a1, a2);
		}

		::System::Void BENEOEINLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_BENEOEINLPD_OFFSET))(this);
		}

		::System::Void JFHDBHFJBLB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_JFHDBHFJBLB_OFFSET))(this, a1);
		}

		::System::Void NNPLKOOLBLM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_NNPLKOOLBLM_OFFSET))(this, a1);
		}

		::System::Void FMHGDPCLMEN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJNPBNNLBH_FMHGDPCLMEN_OFFSET))(this, a1);
		}

	};
