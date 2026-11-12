#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDAIFMHAAMO.h"
#include "unitysdk/OAPDNDPPBKP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CMLIOLLFLOC;
class KGNMHBFIJEI;
class KNKLCMFLDIB;
class NOHKOODINEJ;
class PEEDFBLADEA;
namespace RPG::Client::Prop { class RollerCoasterPuzzleBoard; }
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define CFDHJMFAGCK_ABLFPPEFLON_OFFSET UNITYSDK_OFFSET(0xD3714A0)
#define CFDHJMFAGCK_AEECFMAEDMM_OFFSET UNITYSDK_OFFSET(0xD3739E0)
#define CFDHJMFAGCK_AHGEAEEDALE_OFFSET UNITYSDK_OFFSET(0xD372970)
#define CFDHJMFAGCK_AHHJOCCAPNM_OFFSET UNITYSDK_OFFSET(0xD374670)
#define CFDHJMFAGCK_BPANFJPCBEL_OFFSET UNITYSDK_OFFSET(0xD372300)
#define CFDHJMFAGCK_BPIAEMHCEEE_OFFSET UNITYSDK_OFFSET(0xD3700A0)
#define CFDHJMFAGCK_CAOPKGEFBOC_OFFSET UNITYSDK_OFFSET(0xD372460)
#define CFDHJMFAGCK_CLHJGEHBHNJ_OFFSET UNITYSDK_OFFSET(0xD371550)
#define CFDHJMFAGCK_CNFLDIOEEON_OFFSET UNITYSDK_OFFSET(0xD373870)
#define CFDHJMFAGCK_CTOR_OFFSET UNITYSDK_OFFSET(0xD36FC60)
#define CFDHJMFAGCK_DIGKBDOKABA_OFFSET UNITYSDK_OFFSET(0xD373BC0)
#define CFDHJMFAGCK_DJFFHOBMAKI_OFFSET UNITYSDK_OFFSET(0xD372CE0)
#define CFDHJMFAGCK_DMDHKAAENDK_OFFSET UNITYSDK_OFFSET(0xD36FF50)
#define CFDHJMFAGCK_EBNEGPAOEOI_OFFSET UNITYSDK_OFFSET(0xD3717D0)
#define CFDHJMFAGCK_EDFHNBLFLLP_OFFSET UNITYSDK_OFFSET(0xD3742D0)
#define CFDHJMFAGCK_EFHFLEMANCN_OFFSET UNITYSDK_OFFSET(0xD373DF0)
#define CFDHJMFAGCK_EKKANMOKJDK_OFFSET UNITYSDK_OFFSET(0xD373EA0)
#define CFDHJMFAGCK_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xD36FEA0)
#define CFDHJMFAGCK_FBEBGKIEJCO_OFFSET UNITYSDK_OFFSET(0xD372DF0)
#define CFDHJMFAGCK_FBEGHELIPAF_OFFSET UNITYSDK_OFFSET(0xD373950)
#define CFDHJMFAGCK_FBFLBMIENIF_OFFSET UNITYSDK_OFFSET(0xD374030)
#define CFDHJMFAGCK_GBFNHIEDGHN_OFFSET UNITYSDK_OFFSET(0xD370A10)
#define CFDHJMFAGCK_GDMLNEPHBDP_OFFSET UNITYSDK_OFFSET(0xD3718E0)
#define CFDHJMFAGCK_GHAFIFLJLHM_OFFSET UNITYSDK_OFFSET(0xD374110)
#define CFDHJMFAGCK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xD372A10)
#define CFDHJMFAGCK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xD372690)
#define CFDHJMFAGCK_HHBAJPKDJHK_OFFSET UNITYSDK_OFFSET(0xD372FA0)
#define CFDHJMFAGCK_HPDACDJGEBG_OFFSET UNITYSDK_OFFSET(0xD374360)
#define CFDHJMFAGCK_IEJDNMAMIDA_OFFSET UNITYSDK_OFFSET(0xD371F90)
#define CFDHJMFAGCK_JALFBJMDJBO_OFFSET UNITYSDK_OFFSET(0xD371E60)
#define CFDHJMFAGCK_JAMIFHCGGPN_OFFSET UNITYSDK_OFFSET(0xD371370)
#define CFDHJMFAGCK_JHLEPEBEOGN_OFFSET UNITYSDK_OFFSET(0xD371F30)
#define CFDHJMFAGCK_JKANDHHLPDG_OFFSET UNITYSDK_OFFSET(0xD3746E0)
#define CFDHJMFAGCK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xD372090)
#define CFDHJMFAGCK_JNBNNKGMKKA_OFFSET UNITYSDK_OFFSET(0xD3713E0)
#define CFDHJMFAGCK_KGLDENOEMHK_OFFSET UNITYSDK_OFFSET(0xD3709C0)
#define CFDHJMFAGCK_LHHCEHHGBHO_OFFSET UNITYSDK_OFFSET(0xD373C30)
#define CFDHJMFAGCK_LHNPOECDIAF_OFFSET UNITYSDK_OFFSET(0xD373F00)
#define CFDHJMFAGCK_LKGNILEBAGC_OFFSET UNITYSDK_OFFSET(0xD372640)
#define CFDHJMFAGCK_LNBNIDEIBBK_OFFSET UNITYSDK_OFFSET(0xD374260)
#define CFDHJMFAGCK_LNBOBEPEAGD_OFFSET UNITYSDK_OFFSET(0xD372920)
#define CFDHJMFAGCK_MBIOJBADMBO_OFFSET UNITYSDK_OFFSET(0xD372E50)
#define CFDHJMFAGCK_NHHBMHCFIKJ_OFFSET UNITYSDK_OFFSET(0xD370020)
#define CFDHJMFAGCK_OLOKKHNCGDL_OFFSET UNITYSDK_OFFSET(0xD371140)
#define CFDHJMFAGCK_PFOPOAGNBGH_OFFSET UNITYSDK_OFFSET(0xD372BB0)
#define CFDHJMFAGCK_PIELJFAGMKC_OFFSET UNITYSDK_OFFSET(0xD3721E0)
#define CFDHJMFAGCK_PJAFBPGKCAP_OFFSET UNITYSDK_OFFSET(0xD373250)
#define CFDHJMFAGCK_PMGHELKEHPI_OFFSET UNITYSDK_OFFSET(0xD370440)
#define CFDHJMFAGCK_PPBFILMMDOL_OFFSET UNITYSDK_OFFSET(0xD36FFB0)

inline static constexpr unsigned int CFDHJMFAGCK_TypeDefinitionIndex = 81547;

	class CFDHJMFAGCK : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RollerCoasterPuzzleBoard* MIPPNCGOJNM; // 0x10
		::OAPDNDPPBKP OJJDJCONEGA; // 0x18
		::OAPDNDPPBKP FMEPLFEANIP; // 0x28
		::System::Action* BCNNKJCMFFG; // 0x38
		::RPG::GameCore::AnchorInfo* DIBAGBONGID; // 0x40
		::NOHKOODINEJ* HNIHPFEGDBH; // 0x48
		::System::Action* GLELFFKHDMA; // 0x50
		::PEEDFBLADEA* APPIAANONPF; // 0x58
		::KNKLCMFLDIB* JNGDDKMLMII; // 0x60
		::UnityEngine::Coroutine* HGHFAMGOHPA; // 0x68
		::UnityEngine::Coroutine* FKIBJFMEMNJ; // 0x70
		::System::Action* KPIELJDNCJO; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* FAFJOBOPPJB; // 0x80
		::KGNMHBFIJEI* FPOKLAJMCNA; // 0x88
		::CMLIOLLFLOC* IJPIHJKEPKE; // 0x90
		::EDAIFMHAAMO PJMIDIFDEDA; // 0x98
		::UnityEngine::Vector3 NPEFHMEPCAB; // 0xE0
		::UnityEngine::Vector3 PKJFAIHHBIP; // 0xEC
		::System::Boolean DLCHPEAOCBI; // 0xF8
		::System::Boolean DEGEPAILDKH; // 0xF9
		::System::Boolean FMNEEONAMNO; // 0xFA
		::System::Boolean BGKICKOJNNM; // 0xFB
		::UnityEngine::Quaternion AMPKBLKKIEN; // 0xFC
		::UnityEngine::Vector3 MLINCEDMANK; // 0x10C
		::System::Int32 GLIGFNLAACP; // 0x118
		::System::Boolean AMDNGOEOHEM; // 0x11C
		::System::Boolean DODOEFIINCG; // 0x11D
		::System::Boolean FEALIAJGKBH; // 0x11E
		::System::Byte _padding0[0x1];
		::System::Int32 MMIHAELJLML; // 0x120
		::System::Single KHJEBDJEGKJ; // 0x124
		::System::Boolean GACMPAGKEOP; // 0x128
		::System::Boolean NBILKDLOKMM; // 0x129
		::System::Boolean IBGFLGGJBFM; // 0x12A
		::System::Boolean GCABADOFKFD; // 0x12B
		::System::Boolean NMHLGAJKCPG; // 0x12C
		::System::Boolean MCDPGBCOEFM; // 0x12D
		::System::Void _ctor(::RPG::Client::Prop::RollerCoasterPuzzleBoard* a1, ::KNKLCMFLDIB* a2, ::CMLIOLLFLOC* a3, ::EDAIFMHAAMO a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RollerCoasterPuzzleBoard*, ::KNKLCMFLDIB*, ::CMLIOLLFLOC*, ::EDAIFMHAAMO))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EPCCCIKOHJI(::System::Single a1, ::RPG::GameCore::AnchorInfo* a2, ::OAPDNDPPBKP a3, ::OAPDNDPPBKP a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::AnchorInfo*, ::OAPDNDPPBKP, ::OAPDNDPPBKP))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_EPCCCIKOHJI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DMDHKAAENDK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_DMDHKAAENDK_OFFSET))(this, a1);
		}

		::System::Void PPBFILMMDOL(::System::Int32 a1, ::System::Action_2<::System::Int32, ::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_PPBFILMMDOL_OFFSET))(this, a1, a2);
		}

		::System::Void NHHBMHCFIKJ(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_NHHBMHCFIKJ_OFFSET))(this, a1, a2);
		}

		::System::Void KGLDENOEMHK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_KGLDENOEMHK_OFFSET))(this, a1);
		}

		::System::Void OLOKKHNCGDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_OLOKKHNCGDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void LNBOBEPEAGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_LNBOBEPEAGD_OFFSET))(this);
		}

		::System::Void AHGEAEEDALE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_AHGEAEEDALE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void BPIAEMHCEEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_BPIAEMHCEEE_OFFSET))(this);
		}

		::System::Void PMGHELKEHPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_PMGHELKEHPI_OFFSET))(this);
		}

		::System::Boolean FBEBGKIEJCO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_FBEBGKIEJCO_OFFSET))(this, a1);
		}

		::System::Void MBIOJBADMBO(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_MBIOJBADMBO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNFLDIOEEON(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_CNFLDIOEEON_OFFSET))(this, a1);
		}

		::System::Void PIELJFAGMKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_PIELJFAGMKC_OFFSET))(this);
		}

		::System::Void CAOPKGEFBOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_CAOPKGEFBOC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FBEGHELIPAF(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_FBEGHELIPAF_OFFSET))(this, a1);
		}

		::System::Void AEECFMAEDMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_AEECFMAEDMM_OFFSET))(this);
		}

		::System::Void GBFNHIEDGHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_GBFNHIEDGHN_OFFSET))(this);
		}

		::System::Boolean EKKANMOKJDK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_EKKANMOKJDK_OFFSET))(this, a1);
		}

		::System::Void LHNPOECDIAF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_LHNPOECDIAF_OFFSET))(this, a1);
		}

		::System::Void EFHFLEMANCN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_EFHFLEMANCN_OFFSET))(this, a1);
		}

		::System::Void FBFLBMIENIF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_FBFLBMIENIF_OFFSET))(this, a1);
		}

		::System::Void BPANFJPCBEL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_BPANFJPCBEL_OFFSET))(this, a1);
		}

		::System::Void LKGNILEBAGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_LKGNILEBAGC_OFFSET))(this);
		}

		::System::Void LHHCEHHGBHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_LHHCEHHGBHO_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* LNBNIDEIBBK(::System::Int32 a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_LNBNIDEIBBK_OFFSET))(this, a1);
		}

		::System::Void JHLEPEBEOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JHLEPEBEOGN_OFFSET))(this);
		}

		::System::Void GHAFIFLJLHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_GHAFIFLJLHM_OFFSET))(this, a1);
		}

		::System::Void JNBNNKGMKKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JNBNNKGMKKA_OFFSET))(this);
		}

		::System::Boolean PJAFBPGKCAP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_PJAFBPGKCAP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single AHHJOCCAPNM(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_AHHJOCCAPNM_OFFSET))(this, a1);
		}

		::System::Void HPDACDJGEBG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_HPDACDJGEBG_OFFSET))(this, a1, a2);
		}

		::System::Void GDMLNEPHBDP(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_GDMLNEPHBDP_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* EDFHNBLFLLP(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_EDFHNBLFLLP_OFFSET))(this, a1, a2);
		}

		::System::Void ABLFPPEFLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_ABLFPPEFLON_OFFSET))(this);
		}

		::System::Void HHBAJPKDJHK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_HHBAJPKDJHK_OFFSET))(this, a1, a2);
		}

		::System::Void JKANDHHLPDG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JKANDHHLPDG_OFFSET))(this, a1);
		}

		::System::Void JALFBJMDJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JALFBJMDJBO_OFFSET))(this);
		}

		::System::Void EBNEGPAOEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_EBNEGPAOEOI_OFFSET))(this);
		}

		::System::Void JAMIFHCGGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_JAMIFHCGGPN_OFFSET))(this);
		}

		::System::Void DIGKBDOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_DIGKBDOKABA_OFFSET))(this);
		}

		::System::Boolean PFOPOAGNBGH(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_PFOPOAGNBGH_OFFSET))(this, a1, a2);
		}

		::System::Void CLHJGEHBHNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_CLHJGEHBHNJ_OFFSET))(this);
		}

		::System::Void DJFFHOBMAKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_DJFFHOBMAKI_OFFSET))(this);
		}

		::System::Void IEJDNMAMIDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDHJMFAGCK_IEJDNMAMIDA_OFFSET))(this);
		}

	};
