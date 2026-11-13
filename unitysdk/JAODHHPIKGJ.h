#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/LandingLevel.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/IMFCNAEANKD.h"
#include "unitysdk/KHCJDCLPAMC.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DNFFEFPKDPC;
class INMMPMDELKE;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAODHHPIKGJ_AAMIJFIKCHP_OFFSET UNITYSDK_OFFSET(0x1EC4A9F0)
#define JAODHHPIKGJ_ABMOFABKKAF_OFFSET UNITYSDK_OFFSET(0x1DDFC0D0)
#define JAODHHPIKGJ_AHCBAFHOINC_OFFSET UNITYSDK_OFFSET(0x1EC49960)
#define JAODHHPIKGJ_AMDGLNLGJFK_OFFSET UNITYSDK_OFFSET(0x1DDFBB00)
#define JAODHHPIKGJ_BCNFKOIHOIN_OFFSET UNITYSDK_OFFSET(0x1EC496A0)
#define JAODHHPIKGJ_BDLOFAEOFHH_OFFSET UNITYSDK_OFFSET(0x1EC4A630)
#define JAODHHPIKGJ_BEBBJMNLMOE_OFFSET UNITYSDK_OFFSET(0x1DDFC420)
#define JAODHHPIKGJ_BGHLDMLOLPK_OFFSET UNITYSDK_OFFSET(0x1EC4AC80)
#define JAODHHPIKGJ_BHNMLIPACHC_OFFSET UNITYSDK_OFFSET(0x1EC49C90)
#define JAODHHPIKGJ_BIEPPFPCPKO_OFFSET UNITYSDK_OFFSET(0x1EC49E00)
#define JAODHHPIKGJ_BJEANHMFOOI_OFFSET UNITYSDK_OFFSET(0x1EC4A940)
#define JAODHHPIKGJ_BMJBJHCBPEH_OFFSET UNITYSDK_OFFSET(0x1EC49D90)
#define JAODHHPIKGJ_CBHAMGMKPED_OFFSET UNITYSDK_OFFSET(0x1EC4AC10)
#define JAODHHPIKGJ_CFEIIMNMGCB_OFFSET UNITYSDK_OFFSET(0x1EC4AE10)
#define JAODHHPIKGJ_CIKNFDNLPMH_OFFSET UNITYSDK_OFFSET(0x1DDFC3D0)
#define JAODHHPIKGJ_CILIJONBAFI_OFFSET UNITYSDK_OFFSET(0x1EC49FA0)
#define JAODHHPIKGJ_CKANLJAJIOG_OFFSET UNITYSDK_OFFSET(0x1EC4A420)
#define JAODHHPIKGJ_CLGIEKOEGPG_OFFSET UNITYSDK_OFFSET(0x1EC4AD50)
#define JAODHHPIKGJ_CLJDNPLJMMB_OFFSET UNITYSDK_OFFSET(0x1EC4A5C0)
#define JAODHHPIKGJ_CMAFEMHOLKK_OFFSET UNITYSDK_OFFSET(0x1EC4A730)
#define JAODHHPIKGJ_COCEOHHGMFL_OFFSET UNITYSDK_OFFSET(0x1EC4AA60)
#define JAODHHPIKGJ_CPPMLMNENHJ_OFFSET UNITYSDK_OFFSET(0x1DDFBFE0)
#define JAODHHPIKGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC560)
#define JAODHHPIKGJ_DCHGKDDCMLM_OFFSET UNITYSDK_OFFSET(0x1DDFC170)
#define JAODHHPIKGJ_DCNKBGALOFH_OFFSET UNITYSDK_OFFSET(0x1DDFBDE0)
#define JAODHHPIKGJ_DGGGKCIMHMF_OFFSET UNITYSDK_OFFSET(0x1DDFBF40)
#define JAODHHPIKGJ_DHBGEEAPFBL_OFFSET UNITYSDK_OFFSET(0x1DDFC260)
#define JAODHHPIKGJ_DHIEIKAFCMC_OFFSET UNITYSDK_OFFSET(0x1DDFB990)
#define JAODHHPIKGJ_DNPFNKIGOHP_OFFSET UNITYSDK_OFFSET(0x1DDFC120)
#define JAODHHPIKGJ_EAODHFHBMPL_OFFSET UNITYSDK_OFFSET(0x1DDFBCA0)
#define JAODHHPIKGJ_EBJBCKAPCPB_OFFSET UNITYSDK_OFFSET(0x1DDFBAB0)
#define JAODHHPIKGJ_ECDPODPGGNN_OFFSET UNITYSDK_OFFSET(0x1EC4A380)
#define JAODHHPIKGJ_EDMEEAEENMN_OFFSET UNITYSDK_OFFSET(0x1EC49880)
#define JAODHHPIKGJ_EEGCMJJALCG_OFFSET UNITYSDK_OFFSET(0x1EC49FF0)
#define JAODHHPIKGJ_EGKPMANJLHL_OFFSET UNITYSDK_OFFSET(0x1EC499D0)
#define JAODHHPIKGJ_EHEHBPDOEIJ_OFFSET UNITYSDK_OFFSET(0x1EC49830)
#define JAODHHPIKGJ_EMNEINOBDIK_OFFSET UNITYSDK_OFFSET(0x1EC4A330)
#define JAODHHPIKGJ_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x1EC497E0)
#define JAODHHPIKGJ_FBBGMGGMEEG_OFFSET UNITYSDK_OFFSET(0x1EC49B60)
#define JAODHHPIKGJ_FCEKDIDMIHF_OFFSET UNITYSDK_OFFSET(0x1EC4AAF0)
#define JAODHHPIKGJ_FGDHONHJFEH_OFFSET UNITYSDK_OFFSET(0x1EC4AED0)
#define JAODHHPIKGJ_FIBNEJIJEDM_OFFSET UNITYSDK_OFFSET(0x1EC495B0)
#define JAODHHPIKGJ_FOMJFEKGBLD_OFFSET UNITYSDK_OFFSET(0x1EC498D0)
#define JAODHHPIKGJ_GACPADCJIMH_OFFSET UNITYSDK_OFFSET(0x1DDFBE20)
#define JAODHHPIKGJ_GET_PROXYCOORD_OFFSET UNITYSDK_OFFSET(0x1EC49920)
#define JAODHHPIKGJ_GILPIMCJOKM_OFFSET UNITYSDK_OFFSET(0x1EC49E70)
#define JAODHHPIKGJ_GKGLJHNILHP_OFFSET UNITYSDK_OFFSET(0x1EC4ACC0)
#define JAODHHPIKGJ_GLDHEBOADPH_OFFSET UNITYSDK_OFFSET(0x1EC49C40)
#define JAODHHPIKGJ_GOHBAMKIJFD_OFFSET UNITYSDK_OFFSET(0x1DDFC4C0)
#define JAODHHPIKGJ_GPIPNDPICEM_OFFSET UNITYSDK_OFFSET(0x1EC496F0)
#define JAODHHPIKGJ_HAMJJIPNBIJ_OFFSET UNITYSDK_OFFSET(0x1DDFC340)
#define JAODHHPIKGJ_HGDKAKDCAPF_OFFSET UNITYSDK_OFFSET(0x1EC4A510)
#define JAODHHPIKGJ_HJKJJFFDELN_OFFSET UNITYSDK_OFFSET(0x1EC4A160)
#define JAODHHPIKGJ_HNGDIDGJCGL_OFFSET UNITYSDK_OFFSET(0x1EC49EE0)
#define JAODHHPIKGJ_IAJHHMLCNCK_OFFSET UNITYSDK_OFFSET(0x1EC4ADA0)
#define JAODHHPIKGJ_ICKOEEDPBJG_OFFSET UNITYSDK_OFFSET(0x1DDFBCF0)
#define JAODHHPIKGJ_ILHIPFIIEGB_OFFSET UNITYSDK_OFFSET(0x1EC4A7E0)
#define JAODHHPIKGJ_JKKKEGPPMNP_OFFSET UNITYSDK_OFFSET(0x1EC4A240)
#define JAODHHPIKGJ_JKLCJONONKK_OFFSET UNITYSDK_OFFSET(0x1EC4A850)
#define JAODHHPIKGJ_JLIIDBBBEGE_OFFSET UNITYSDK_OFFSET(0x1DDFC080)
#define JAODHHPIKGJ_JNFHCHNENIC_OFFSET UNITYSDK_OFFSET(0x1DDFBBF0)
#define JAODHHPIKGJ_KCBNHAEBAOO_OFFSET UNITYSDK_OFFSET(0x1DDFC1C0)
#define JAODHHPIKGJ_KHDPOLBPAFI_OFFSET UNITYSDK_OFFSET(0x1EC4AD10)
#define JAODHHPIKGJ_KHEGOEHCGHK_OFFSET UNITYSDK_OFFSET(0x1DDFBBA0)
#define JAODHHPIKGJ_KLJKGKEJAAM_OFFSET UNITYSDK_OFFSET(0x1EC49740)
#define JAODHHPIKGJ_KNAJMFMMDBI_OFFSET UNITYSDK_OFFSET(0x1EC49AF0)
#define JAODHHPIKGJ_KPBHIPGHHLN_OFFSET UNITYSDK_OFFSET(0x1EC4A8D0)
#define JAODHHPIKGJ_KPHNLCGIJCG_OFFSET UNITYSDK_OFFSET(0x1DDFBF00)
#define JAODHHPIKGJ_KPMDFONKJAD_OFFSET UNITYSDK_OFFSET(0x1EC49790)
#define JAODHHPIKGJ_LAJMLGPAMDI_OFFSET UNITYSDK_OFFSET(0x1EC49620)
#define JAODHHPIKGJ_LDBDGAEJLKP_OFFSET UNITYSDK_OFFSET(0x1EC4A6C0)
#define JAODHHPIKGJ_LHKAKHNPIND_OFFSET UNITYSDK_OFFSET(0x1EC4AB60)
#define JAODHHPIKGJ_LJGAIAANNGK_OFFSET UNITYSDK_OFFSET(0x1DDFBB60)
#define JAODHHPIKGJ_LKEFHBAAOLM_OFFSET UNITYSDK_OFFSET(0x1EC4A2E0)
#define JAODHHPIKGJ_LPBNHKODBON_OFFSET UNITYSDK_OFFSET(0x1EC49CE0)
#define JAODHHPIKGJ_LPFGIAJKPPG_OFFSET UNITYSDK_OFFSET(0x1DDFBD50)
#define JAODHHPIKGJ_MAIHIPINMED_OFFSET UNITYSDK_OFFSET(0x1DDFB9D0)
#define JAODHHPIKGJ_MAMBDDBMAFM_OFFSET UNITYSDK_OFFSET(0x1DDFBD90)
#define JAODHHPIKGJ_MDLDONGKNPN_OFFSET UNITYSDK_OFFSET(0x1EC4A3D0)
#define JAODHHPIKGJ_MEGPCBJFMCM_OFFSET UNITYSDK_OFFSET(0x1DDFC210)
#define JAODHHPIKGJ_MFMJALMOAED_OFFSET UNITYSDK_OFFSET(0x1DDFC480)
#define JAODHHPIKGJ_MNPPACNPNHA_OFFSET UNITYSDK_OFFSET(0x1EC4AE90)
#define JAODHHPIKGJ_MPCMLPJCBGA_OFFSET UNITYSDK_OFFSET(0x1EC4A290)
#define JAODHHPIKGJ_NKMALNGPCKG_OFFSET UNITYSDK_OFFSET(0x1DDFBC40)
#define JAODHHPIKGJ_NLKGJNLIMEC_OFFSET UNITYSDK_OFFSET(0x1DDFBEB0)
#define JAODHHPIKGJ_NPANIMMHNHL_OFFSET UNITYSDK_OFFSET(0x1DDFC510)
#define JAODHHPIKGJ_OBCKOOMGDLN_OFFSET UNITYSDK_OFFSET(0x1EC49D30)
#define JAODHHPIKGJ_ODDDAHOFPJJ_OFFSET UNITYSDK_OFFSET(0x1DDFC380)
#define JAODHHPIKGJ_ODJFLMCBMFE_OFFSET UNITYSDK_OFFSET(0x1EC4A1D0)
#define JAODHHPIKGJ_OEGHNEPOPJP_OFFSET UNITYSDK_OFFSET(0x1EC4A4A0)
#define JAODHHPIKGJ_OMGLMNLEKDE_OFFSET UNITYSDK_OFFSET(0x1DDFBF90)
#define JAODHHPIKGJ_PCLAHOBELDP_OFFSET UNITYSDK_OFFSET(0x1DDFBE70)
#define JAODHHPIKGJ_PEAOJPBOMFK_OFFSET UNITYSDK_OFFSET(0x1DDFC040)
#define JAODHHPIKGJ_PGCMBMMAAKF_OFFSET UNITYSDK_OFFSET(0x1DDFC2B0)
#define JAODHHPIKGJ_PIHIDFCLKJM_OFFSET UNITYSDK_OFFSET(0x1DDFBA60)
#define JAODHHPIKGJ_PJOIBBPJKBC_OFFSET UNITYSDK_OFFSET(0x1EC49BD0)
#define JAODHHPIKGJ_PKFHBNFHOCM_OFFSET UNITYSDK_OFFSET(0x1DDFBA20)
#define JAODHHPIKGJ_PKLKKCILJED_OFFSET UNITYSDK_OFFSET(0x1EC49F50)
#define JAODHHPIKGJ_PLPMMMGJMMM_OFFSET UNITYSDK_OFFSET(0x1EC49A80)
#define JAODHHPIKGJ_SET_PROXYCOORD_OFFSET UNITYSDK_OFFSET(0x1EC49940)

inline static constexpr unsigned int JAODHHPIKGJ_TypeDefinitionIndex = 44175;

	class JAODHHPIKGJ : public ::System::Object
	{
	public:
		::HGBCMFANCOE CPLNAKCLLDB; // 0x10
		::INMMPMDELKE* MNJIPMLJNGM; // 0xA68
		::DNFFEFPKDPC* BKNKCBLEBED; // 0xA70
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* NAMILFPLHEI; // 0xA78
		::System::Collections::Generic::HashSet_1<::DNFFEFPKDPC*>* DHKKBBNELGA; // 0xA80
		::DNFFEFPKDPC* MADAPNIMHGE; // 0xA88
		::DNFFEFPKDPC* EDFIILACBJM; // 0xA90
		::DNFFEFPKDPC* BMDMKKFKHGB; // 0xA98
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord _ProxyCoord_k__BackingField; // 0xAA0
		::UnityEngine::Matrix4x4 PLCPIEBMBDK; // 0xAB8
		::System::Single FIEDMLPMIJA; // 0xAF8
		::System::Int32 LFKHIFEDDPC; // 0xAFC
		::System::Int32 BCGMFNOFBOH; // 0xB00
		::System::Single CALBJJCEMHA; // 0xB04
		::System::Boolean LEPHNANJNED; // 0xB08
		::System::Boolean FCPFPGGDPBF; // 0xB09
		::System::Boolean CLBEDEABFEB; // 0xB0A
		::System::Boolean BGOAKGKPCMF; // 0xB0B
		::UnityEngine::Vector3 BGIMLGIBOKP; // 0xB0C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CTOR_OFFSET))(this);
		}

		::KHCJDCLPAMC FIBNEJIJEDM()
		{
			return ((::KHCJDCLPAMC(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_FIBNEJIJEDM_OFFSET))(this);
		}

		::System::Void LAJMLGPAMDI(::KHCJDCLPAMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHCJDCLPAMC))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LAJMLGPAMDI_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState BCNFKOIHOIN()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BCNFKOIHOIN_OFFSET))(this);
		}

		::System::Void GPIPNDPICEM(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GPIPNDPICEM_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState KLJKGKEJAAM()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KLJKGKEJAAM_OFFSET))(this);
		}

		::System::Void KPMDFONKJAD(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KPMDFONKJAD_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Void EHEHBPDOEIJ(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EHEHBPDOEIJ_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EDMEEAEENMN()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EDMEEAEENMN_OFFSET))(this);
		}

		::System::Void FOMJFEKGBLD(::RPG::Client::LittleGame::Move::MoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_FOMJFEKGBLD_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord get_ProxyCoord()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GET_PROXYCOORD_OFFSET))(this);
		}

		::System::Void set_ProxyCoord(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_SET_PROXYCOORD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AHCBAFHOINC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_AHCBAFHOINC_OFFSET))(this);
		}

		::System::Void EGKPMANJLHL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EGKPMANJLHL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 PLPMMMGJMMM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PLPMMMGJMMM_OFFSET))(this);
		}

		::System::Void KNAJMFMMDBI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KNAJMFMMDBI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FBBGMGGMEEG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_FBBGMGGMEEG_OFFSET))(this);
		}

		::System::Void PJOIBBPJKBC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PJOIBBPJKBC_OFFSET))(this, a1);
		}

		::System::Boolean GLDHEBOADPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GLDHEBOADPH_OFFSET))(this);
		}

		::System::Void BHNMLIPACHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BHNMLIPACHC_OFFSET))(this, a1);
		}

		::System::Single LPBNHKODBON()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LPBNHKODBON_OFFSET))(this);
		}

		::System::Void OBCKOOMGDLN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_OBCKOOMGDLN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BMJBJHCBPEH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BMJBJHCBPEH_OFFSET))(this);
		}

		::System::Void BIEPPFPCPKO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BIEPPFPCPKO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GILPIMCJOKM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GILPIMCJOKM_OFFSET))(this);
		}

		::System::Void HNGDIDGJCGL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_HNGDIDGJCGL_OFFSET))(this, a1);
		}

		::System::Boolean PKLKKCILJED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PKLKKCILJED_OFFSET))(this);
		}

		::System::Void CILIJONBAFI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CILIJONBAFI_OFFSET))(this, a1);
		}

		::System::Boolean EEGCMJJALCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EEGCMJJALCG_OFFSET))(this);
		}

		::UnityEngine::Vector3 HJKJJFFDELN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_HJKJJFFDELN_OFFSET))(this);
		}

		::System::Void ODJFLMCBMFE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ODJFLMCBMFE_OFFSET))(this, a1);
		}

		::System::Boolean JKKKEGPPMNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_JKKKEGPPMNP_OFFSET))(this);
		}

		::System::Void MPCMLPJCBGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MPCMLPJCBGA_OFFSET))(this, a1);
		}

		::System::Boolean LKEFHBAAOLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LKEFHBAAOLM_OFFSET))(this);
		}

		::System::Void EMNEINOBDIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EMNEINOBDIK_OFFSET))(this, a1);
		}

		::System::Boolean ECDPODPGGNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ECDPODPGGNN_OFFSET))(this);
		}

		::System::Void MDLDONGKNPN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MDLDONGKNPN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CKANLJAJIOG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CKANLJAJIOG_OFFSET))(this);
		}

		::System::Void HGDKAKDCAPF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_HGDKAKDCAPF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BDLOFAEOFHH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BDLOFAEOFHH_OFFSET))(this);
		}

		::System::Void CMAFEMHOLKK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CMAFEMHOLKK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 JKLCJONONKK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_JKLCJONONKK_OFFSET))(this);
		}

		::System::Void BJEANHMFOOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BJEANHMFOOI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 COCEOHHGMFL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_COCEOHHGMFL_OFFSET))(this);
		}

		::System::Void LHKAKHNPIND(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LHKAKHNPIND_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OEGHNEPOPJP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_OEGHNEPOPJP_OFFSET))(this);
		}

		::System::Void CLJDNPLJMMB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CLJDNPLJMMB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LDBDGAEJLKP()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LDBDGAEJLKP_OFFSET))(this);
		}

		::System::Void ILHIPFIIEGB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ILHIPFIIEGB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 KPBHIPGHHLN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KPBHIPGHHLN_OFFSET))(this);
		}

		::System::Void AAMIJFIKCHP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_AAMIJFIKCHP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FCEKDIDMIHF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_FCEKDIDMIHF_OFFSET))(this);
		}

		::System::Void CBHAMGMKPED(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CBHAMGMKPED_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 BGHLDMLOLPK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BGHLDMLOLPK_OFFSET))(this);
		}

		::System::Void GKGLJHNILHP(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GKGLJHNILHP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 KHDPOLBPAFI()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KHDPOLBPAFI_OFFSET))(this);
		}

		::System::Void CLGIEKOEGPG(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CLGIEKOEGPG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 IAJHHMLCNCK()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_IAJHHMLCNCK_OFFSET))(this);
		}

		::UnityEngine::Vector2 CFEIIMNMGCB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CFEIIMNMGCB_OFFSET))(this);
		}

		::System::Boolean MNPPACNPNHA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MNPPACNPNHA_OFFSET))(this);
		}

		::System::Void FGDHONHJFEH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_FGDHONHJFEH_OFFSET))(this, a1);
		}

		::System::Boolean DHIEIKAFCMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DHIEIKAFCMC_OFFSET))(this);
		}

		::System::Void MAIHIPINMED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MAIHIPINMED_OFFSET))(this, a1);
		}

		::System::Boolean PKFHBNFHOCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PKFHBNFHOCM_OFFSET))(this);
		}

		::System::Void PIHIDFCLKJM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PIHIDFCLKJM_OFFSET))(this, a1);
		}

		::System::Single EBJBCKAPCPB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EBJBCKAPCPB_OFFSET))(this);
		}

		::System::Void AMDGLNLGJFK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_AMDGLNLGJFK_OFFSET))(this, a1);
		}

		::System::Boolean LJGAIAANNGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LJGAIAANNGK_OFFSET))(this);
		}

		::System::Void KHEGOEHCGHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KHEGOEHCGHK_OFFSET))(this, a1);
		}

		::System::Single JNFHCHNENIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_JNFHCHNENIC_OFFSET))(this);
		}

		::System::Void NKMALNGPCKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_NKMALNGPCKG_OFFSET))(this, a1);
		}

		::System::Single EAODHFHBMPL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_EAODHFHBMPL_OFFSET))(this);
		}

		::System::Void ICKOEEDPBJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ICKOEEDPBJG_OFFSET))(this, a1);
		}

		::System::Boolean LPFGIAJKPPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_LPFGIAJKPPG_OFFSET))(this);
		}

		::System::Void MAMBDDBMAFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MAMBDDBMAFM_OFFSET))(this, a1);
		}

		::System::Boolean DCNKBGALOFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DCNKBGALOFH_OFFSET))(this);
		}

		::System::Void GACPADCJIMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GACPADCJIMH_OFFSET))(this, a1);
		}

		::System::Boolean PCLAHOBELDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PCLAHOBELDP_OFFSET))(this);
		}

		::System::Void NLKGJNLIMEC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_NLKGJNLIMEC_OFFSET))(this, a1);
		}

		::System::Boolean KPHNLCGIJCG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KPHNLCGIJCG_OFFSET))(this);
		}

		::System::Void DGGGKCIMHMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DGGGKCIMHMF_OFFSET))(this, a1);
		}

		::System::Single OMGLMNLEKDE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_OMGLMNLEKDE_OFFSET))(this);
		}

		::System::Void CPPMLMNENHJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CPPMLMNENHJ_OFFSET))(this, a1);
		}

		::System::Int32 PEAOJPBOMFK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PEAOJPBOMFK_OFFSET))(this);
		}

		::System::Void JLIIDBBBEGE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_JLIIDBBBEGE_OFFSET))(this, a1);
		}

		::System::Boolean ABMOFABKKAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ABMOFABKKAF_OFFSET))(this);
		}

		::System::Void DNPFNKIGOHP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DNPFNKIGOHP_OFFSET))(this, a1);
		}

		::System::Boolean DCHGKDDCMLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DCHGKDDCMLM_OFFSET))(this);
		}

		::System::Void KCBNHAEBAOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_KCBNHAEBAOO_OFFSET))(this, a1);
		}

		::System::Boolean MEGPCBJFMCM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MEGPCBJFMCM_OFFSET))(this);
		}

		::System::Void DHBGEEAPFBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_DHBGEEAPFBL_OFFSET))(this, a1);
		}

		::System::Boolean PGCMBMMAAKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_PGCMBMMAAKF_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::LandingLevel HAMJJIPNBIJ()
		{
			return ((::RPG::Client::LittleGame::FiveDim::LandingLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_HAMJJIPNBIJ_OFFSET))(this);
		}

		::System::Void ODDDAHOFPJJ(::RPG::Client::LittleGame::FiveDim::LandingLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::LandingLevel))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_ODDDAHOFPJJ_OFFSET))(this, a1);
		}

		::System::Single CIKNFDNLPMH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_CIKNFDNLPMH_OFFSET))(this);
		}

		::System::Void BEBBJMNLMOE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_BEBBJMNLMOE_OFFSET))(this, a1);
		}

		::System::Boolean MFMJALMOAED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_MFMJALMOAED_OFFSET))(this);
		}

		::System::Void GOHBAMKIJFD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_GOHBAMKIJFD_OFFSET))(this, a1);
		}

		::IMFCNAEANKD NPANIMMHNHL()
		{
			return ((::IMFCNAEANKD(*)(::PVOID))((::PBYTE)hIl2Cpp + JAODHHPIKGJ_NPANIMMHNHL_OFFSET))(this);
		}

	};
