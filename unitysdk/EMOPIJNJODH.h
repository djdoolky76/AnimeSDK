#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleEnemyHudHideType.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHIALIFCIJ.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"
class ABCBPKFCILL;
class AJHPHMDACGG;
class AKAPOCMFCHC;
class AMPFPHCKIFP;
class BCJFPJLLFAC;
class CMIBMDCJFEG;
class DFJOJJKDIGH;
class DLMIEJJBGNF;
class DPEODBDLBPP;
class EAHCLJPMCIG;
class EGAFHDBKGCM;
class EKFMIDBJDIA;
class EOKOEJKEFMN;
class FCFNFMPIEFJ;
class FCKGNAJIKMF;
class FDKFCICELMI;
class FNKFOIJMONH;
class GJBIPAMPICI;
class GLKIFLPIBCC;
class HHNJEGFBFJC;
class HIHFJCIJENK;
class HLONMANFCJE;
class HMFIAKBFICH;
class JCGJEBAIBPL;
class JGPEMHHOJBH;
class JLFAONJDFEL;
class KCMGAIFFBPL;
class LHLEJAADHNE;
class MCMDOMJOAGJ;
class MLACJFGGBIJ;
class NOIJCJDEABA;
class OBJANKHLNGO;
class OLOBOACDIIL;
class OOCCBMLAELL;
class PCGGALGFNPM;
class PEOEPDGDFEH;
class PJKCCKJLEAH;
class POOJGAMDHHI;
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }

#define EMOPIJNJODH_ABELFDPGKOE_OFFSET UNITYSDK_OFFSET(0x155925F0)
#define EMOPIJNJODH_ADMHGLMFLBO_OFFSET UNITYSDK_OFFSET(0x1554F140)
#define EMOPIJNJODH_AHGNKLBHFGK_OFFSET UNITYSDK_OFFSET(0x15595440)
#define EMOPIJNJODH_AIKNCNLPFHG_OFFSET UNITYSDK_OFFSET(0x155918A0)
#define EMOPIJNJODH_ANACGNGKEFG_OFFSET UNITYSDK_OFFSET(0x155506B0)
#define EMOPIJNJODH_AODAKNMADMO_OFFSET UNITYSDK_OFFSET(0x15593B60)
#define EMOPIJNJODH_BAAEJKPLNGB_OFFSET UNITYSDK_OFFSET(0x1554F340)
#define EMOPIJNJODH_BALBPJHBNPG_OFFSET UNITYSDK_OFFSET(0x1554EF50)
#define EMOPIJNJODH_BBPKHLOIGBC_OFFSET UNITYSDK_OFFSET(0x155915A0)
#define EMOPIJNJODH_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x15594B30)
#define EMOPIJNJODH_BKAANKIIPMB_OFFSET UNITYSDK_OFFSET(0x15551410)
#define EMOPIJNJODH_BLCMCABJHKP_OFFSET UNITYSDK_OFFSET(0x15593EF0)
#define EMOPIJNJODH_BNLPKDGPNGJ_OFFSET UNITYSDK_OFFSET(0x15594B80)
#define EMOPIJNJODH_BPADNCEHLFG_OFFSET UNITYSDK_OFFSET(0x15596400)
#define EMOPIJNJODH_CADHPAIJDKJ_OFFSET UNITYSDK_OFFSET(0x15595DE0)
#define EMOPIJNJODH_CEOCHFLMOMA_OFFSET UNITYSDK_OFFSET(0x15594CD0)
#define EMOPIJNJODH_CKPNDNDLDNL_OFFSET UNITYSDK_OFFSET(0x15551850)
#define EMOPIJNJODH_COIGHOBFILM_OFFSET UNITYSDK_OFFSET(0x15551610)
#define EMOPIJNJODH_CTOR_OFFSET UNITYSDK_OFFSET(0x1554D910)
#define EMOPIJNJODH_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0x15551300)
#define EMOPIJNJODH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1554EF00)
#define EMOPIJNJODH_DJDONLHHKCI_OFFSET UNITYSDK_OFFSET(0x15595AD0)
#define EMOPIJNJODH_DJIEAOEDHJM_OFFSET UNITYSDK_OFFSET(0x15592760)
#define EMOPIJNJODH_DLHLCHGPBBG_OFFSET UNITYSDK_OFFSET(0x1554FDA0)
#define EMOPIJNJODH_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15590F60)
#define EMOPIJNJODH_DMBMGCGDMCE_OFFSET UNITYSDK_OFFSET(0x15592FF0)
#define EMOPIJNJODH_DODAKNGNJIM_OFFSET UNITYSDK_OFFSET(0x15595280)
#define EMOPIJNJODH_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x155519B0)
#define EMOPIJNJODH_EDCOGLFPDKD_OFFSET UNITYSDK_OFFSET(0x15550F40)
#define EMOPIJNJODH_EFKCHIJPKEN_OFFSET UNITYSDK_OFFSET(0x15551910)
#define EMOPIJNJODH_EJPHKAJJCOG_OFFSET UNITYSDK_OFFSET(0x15594C30)
#define EMOPIJNJODH_EKKGLDLKMMN_OFFSET UNITYSDK_OFFSET(0x155943E0)
#define EMOPIJNJODH_EMLIGPCECHP_OFFSET UNITYSDK_OFFSET(0x155501C0)
#define EMOPIJNJODH_EOPMNMLMGMC_OFFSET UNITYSDK_OFFSET(0x15550E20)
#define EMOPIJNJODH_EPPJFMKIOMJ_OFFSET UNITYSDK_OFFSET(0x155940D0)
#define EMOPIJNJODH_FCOHJDGPJFK_OFFSET UNITYSDK_OFFSET(0x15594160)
#define EMOPIJNJODH_FIHLOKNBBJC_OFFSET UNITYSDK_OFFSET(0x155931E0)
#define EMOPIJNJODH_FJAKNBIHECC_OFFSET UNITYSDK_OFFSET(0x155935C0)
#define EMOPIJNJODH_FJGNONOLDOD_OFFSET UNITYSDK_OFFSET(0x15592BE0)
#define EMOPIJNJODH_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0x15593A40)
#define EMOPIJNJODH_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0x15596250)
#define EMOPIJNJODH_FODLNNJHEFM_OFFSET UNITYSDK_OFFSET(0x1554F410)
#define EMOPIJNJODH_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x155936A0)
#define EMOPIJNJODH_GIKEIPBOCFA_OFFSET UNITYSDK_OFFSET(0x1554F5A0)
#define EMOPIJNJODH_GJDJBCAKNMO_OFFSET UNITYSDK_OFFSET(0x155928B0)
#define EMOPIJNJODH_GKBAKFEGHOL_OFFSET UNITYSDK_OFFSET(0x155960D0)
#define EMOPIJNJODH_GLJHJIDOJKG_OFFSET UNITYSDK_OFFSET(0x15592E50)
#define EMOPIJNJODH_GMFBCJIAJCI_OFFSET UNITYSDK_OFFSET(0x155516D0)
#define EMOPIJNJODH_GMHCINLIDAH_OFFSET UNITYSDK_OFFSET(0x15596DA0)
#define EMOPIJNJODH_HABGFCJFKDI_OFFSET UNITYSDK_OFFSET(0x15592450)
#define EMOPIJNJODH_HAIODNJPHIP_OFFSET UNITYSDK_OFFSET(0x155922B0)
#define EMOPIJNJODH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1554ECD0)
#define EMOPIJNJODH_IAKNMDIPNGC_OFFSET UNITYSDK_OFFSET(0x15596500)
#define EMOPIJNJODH_IAODJDMCKNE_OFFSET UNITYSDK_OFFSET(0x15593150)
#define EMOPIJNJODH_IECECNKLNFF_OFFSET UNITYSDK_OFFSET(0x15596F80)
#define EMOPIJNJODH_IIEBIBHLLGA_OFFSET UNITYSDK_OFFSET(0x15594350)
#define EMOPIJNJODH_IJMLIPBPGDJ_OFFSET UNITYSDK_OFFSET(0x1554FA10)
#define EMOPIJNJODH_IPAGBKBOACC_OFFSET UNITYSDK_OFFSET(0x15550930)
#define EMOPIJNJODH_IPEAGFMEOKB_OFFSET UNITYSDK_OFFSET(0x15593D10)
#define EMOPIJNJODH_IPFAIIHNDLC_OFFSET UNITYSDK_OFFSET(0x1554FA60)
#define EMOPIJNJODH_JFIMJONCKHC_OFFSET UNITYSDK_OFFSET(0x155933C0)
#define EMOPIJNJODH_JGIPGPHKDDI_OFFSET UNITYSDK_OFFSET(0x15592CA0)
#define EMOPIJNJODH_JMCKFCBBCED_OFFSET UNITYSDK_OFFSET(0x1554F550)
#define EMOPIJNJODH_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x15592B30)
#define EMOPIJNJODH_KAELGIGOHKO_OFFSET UNITYSDK_OFFSET(0x15596B70)
#define EMOPIJNJODH_KAPOIKCCHIN_OFFSET UNITYSDK_OFFSET(0x1554F1C0)
#define EMOPIJNJODH_KBBAPEJHEIB_OFFSET UNITYSDK_OFFSET(0x155505B0)
#define EMOPIJNJODH_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x155914B0)
#define EMOPIJNJODH_KBKGEMBCBMO_OFFSET UNITYSDK_OFFSET(0x155955A0)
#define EMOPIJNJODH_KCPNDDCLOHF_OFFSET UNITYSDK_OFFSET(0x15596E40)
#define EMOPIJNJODH_KFJFPLKMPOP_OFFSET UNITYSDK_OFFSET(0x155959A0)
#define EMOPIJNJODH_KHCOPOKGAKI_OFFSET UNITYSDK_OFFSET(0x15591AE0)
#define EMOPIJNJODH_KMGJGCBMNJH_OFFSET UNITYSDK_OFFSET(0x15593A90)
#define EMOPIJNJODH_KOHOFEEBHCD_OFFSET UNITYSDK_OFFSET(0x15594630)
#define EMOPIJNJODH_KOIEPHBLHID_OFFSET UNITYSDK_OFFSET(0x15551500)
#define EMOPIJNJODH_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0x155945A0)
#define EMOPIJNJODH_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15594C80)
#define EMOPIJNJODH_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x15593270)
#define EMOPIJNJODH_LHPFOFIBPLF_OFFSET UNITYSDK_OFFSET(0x15595B60)
#define EMOPIJNJODH_LJGADJHHIEH_OFFSET UNITYSDK_OFFSET(0x155956B0)
#define EMOPIJNJODH_MJFNAIFEEBE_OFFSET UNITYSDK_OFFSET(0x15596610)
#define EMOPIJNJODH_MKGOBICKGDK_OFFSET UNITYSDK_OFFSET(0x155952E0)
#define EMOPIJNJODH_MKOHPHOKKML_OFFSET UNITYSDK_OFFSET(0x15595850)
#define EMOPIJNJODH_MNLMOBLIJPI_OFFSET UNITYSDK_OFFSET(0x15594F90)
#define EMOPIJNJODH_MOAKCNDMFND_OFFSET UNITYSDK_OFFSET(0x15551790)
#define EMOPIJNJODH_MOEAGAPNMEM_OFFSET UNITYSDK_OFFSET(0x15550D20)
#define EMOPIJNJODH_NFHKHMHDEJH_OFFSET UNITYSDK_OFFSET(0x15592940)
#define EMOPIJNJODH_NOBJJJODDNK_1_OFFSET UNITYSDK_OFFSET(0x15596A80)
#define EMOPIJNJODH_NOBJJJODDNK_OFFSET UNITYSDK_OFFSET(0x15596800)
#define EMOPIJNJODH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1554DC70)
#define EMOPIJNJODH_NPPPONLILLE_OFFSET UNITYSDK_OFFSET(0x15591D70)
#define EMOPIJNJODH_OEEDBNEIAPC_OFFSET UNITYSDK_OFFSET(0x15592D70)
#define EMOPIJNJODH_OGOHNCEFKOJ_OFFSET UNITYSDK_OFFSET(0x155936F0)
#define EMOPIJNJODH_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x15592F10)
#define EMOPIJNJODH_OJIMFFMHEEK_OFFSET UNITYSDK_OFFSET(0x15591990)
#define EMOPIJNJODH_OLOMIIBBPLP_OFFSET UNITYSDK_OFFSET(0x155950B0)
#define EMOPIJNJODH_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x155939F0)
#define EMOPIJNJODH_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x15551130)
#define EMOPIJNJODH_PIGPIKBNEMC_OFFSET UNITYSDK_OFFSET(0x155932C0)
#define EMOPIJNJODH_PINIKDPJDLI_OFFSET UNITYSDK_OFFSET(0x1554F210)
#define EMOPIJNJODH_PJMHPEIJKLF_OFFSET UNITYSDK_OFFSET(0x15591050)
#define EMOPIJNJODH_PKNEKNFCPOA_OFFSET UNITYSDK_OFFSET(0x15595D90)
#define EMOPIJNJODH_PODPCBFDNNI_OFFSET UNITYSDK_OFFSET(0x15594D90)
#define EMOPIJNJODH_PPEDGKMMNCA_OFFSET UNITYSDK_OFFSET(0x15551060)

inline static constexpr unsigned int EMOPIJNJODH_TypeDefinitionIndex = 80827;

	class EMOPIJNJODH : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::BCJFPJLLFAC* CKKLKEBHIGE; // 0x18
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x20
		::ABCBPKFCILL* MKJKAJDEOOM; // 0x28
		::HHNJEGFBFJC* HGHJEHMHLPK; // 0x30
		::EOKOEJKEFMN* JJIMIBMNMOI; // 0x38
		::GJBIPAMPICI* HKOBEMANMEM; // 0x40
		::PJKCCKJLEAH* PKGBACLHIME; // 0x48
		::JCGJEBAIBPL* JJANKLBLJBG; // 0x50
		::EAHCLJPMCIG* JOKBAPFCJFM; // 0x58
		::OLOBOACDIIL* EKLMOHKHFML; // 0x60
		::AMPFPHCKIFP* LKMADPKKBNF; // 0x68
		::System::Void _ctor(::OBJANKHLNGO* a1, ::EAHCLJPMCIG* a2, ::EOKOEJKEFMN* a3, ::AMPFPHCKIFP* a4, ::JCGJEBAIBPL* a5, ::OLOBOACDIIL* a6, ::PJKCCKJLEAH* a7, ::GJBIPAMPICI* a8, ::BCJFPJLLFAC* a9, ::HHNJEGFBFJC* a10, ::ABCBPKFCILL* a11, ::RPG::Client::FateRin::Logging::ILoggerFactory* a12)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::EAHCLJPMCIG*, ::EOKOEJKEFMN*, ::AMPFPHCKIFP*, ::JCGJEBAIBPL*, ::OLOBOACDIIL*, ::PJKCCKJLEAH*, ::GJBIPAMPICI*, ::BCJFPJLLFAC*, ::HHNJEGFBFJC*, ::ABCBPKFCILL*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DISPOSE_OFFSET))(this);
		}

		::System::Void BALBPJHBNPG(::FCFNFMPIEFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCFNFMPIEFJ*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BALBPJHBNPG_OFFSET))(this, a1);
		}

		static ::System::UInt32 ADMHGLMFLBO(::OOCCBMLAELL* a1)
		{
			return ((::System::UInt32(*)(::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_ADMHGLMFLBO_OFFSET))(a1);
		}

		::System::Void KAPOIKCCHIN(::NOIJCJDEABA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOIJCJDEABA*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KAPOIKCCHIN_OFFSET))(this, a1);
		}

		::System::Void PINIKDPJDLI(::HIHFJCIJENK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIHFJCIJENK*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PINIKDPJDLI_OFFSET))(this, a1);
		}

		::System::Void BAAEJKPLNGB(::MLACJFGGBIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLACJFGGBIJ*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BAAEJKPLNGB_OFFSET))(this, a1);
		}

		::System::Void FODLNNJHEFM(::POOJGAMDHHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POOJGAMDHHI*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FODLNNJHEFM_OFFSET))(this, a1);
		}

		::System::Void JMCKFCBBCED(::FCKGNAJIKMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCKGNAJIKMF*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_JMCKFCBBCED_OFFSET))(this, a1);
		}

		::System::Void GIKEIPBOCFA(::JGPEMHHOJBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGPEMHHOJBH*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GIKEIPBOCFA_OFFSET))(this, a1);
		}

		::System::Void IJMLIPBPGDJ(::FDKFCICELMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDKFCICELMI*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IJMLIPBPGDJ_OFFSET))(this, a1);
		}

		::System::Void IPFAIIHNDLC(::LHLEJAADHNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHLEJAADHNE*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IPFAIIHNDLC_OFFSET))(this, a1);
		}

		::System::Void DLHLCHGPBBG(::EGAFHDBKGCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGAFHDBKGCM*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DLHLCHGPBBG_OFFSET))(this, a1);
		}

		::System::Void EMLIGPCECHP(::MCMDOMJOAGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCMDOMJOAGJ*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EMLIGPCECHP_OFFSET))(this, a1);
		}

		::System::Void KBBAPEJHEIB(::HLONMANFCJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLONMANFCJE*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KBBAPEJHEIB_OFFSET))(this, a1);
		}

		::System::Void ANACGNGKEFG(::PEOEPDGDFEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEOEPDGDFEH*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_ANACGNGKEFG_OFFSET))(this, a1);
		}

		::System::Void IPAGBKBOACC(::HMFIAKBFICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMFIAKBFICH*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IPAGBKBOACC_OFFSET))(this, a1);
		}

		::System::Void MOEAGAPNMEM(::GLKIFLPIBCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLKIFLPIBCC*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MOEAGAPNMEM_OFFSET))(this, a1);
		}

		::System::Void EOPMNMLMGMC(::AKAPOCMFCHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKAPOCMFCHC*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EOPMNMLMGMC_OFFSET))(this, a1);
		}

		::System::Void EDCOGLFPDKD(::FNKFOIJMONH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNKFOIJMONH*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EDCOGLFPDKD_OFFSET))(this, a1);
		}

		::System::Void PPEDGKMMNCA(::DPEODBDLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPEODBDLBPP*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PPEDGKMMNCA_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void DFHKMNFAMEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DFHKMNFAMEO_OFFSET))(this, a1);
		}

		::System::Void BKAANKIIPMB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BKAANKIIPMB_OFFSET))(this, a1);
		}

		::System::Void KOIEPHBLHID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KOIEPHBLHID_OFFSET))(this, a1);
		}

		::System::Void COIGHOBFILM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_COIGHOBFILM_OFFSET))(this, a1);
		}

		::System::Void GMFBCJIAJCI(::JLFAONJDFEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLFAONJDFEL*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GMFBCJIAJCI_OFFSET))(this, a1);
		}

		::System::Void MOAKCNDMFND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MOAKCNDMFND_OFFSET))(this, a1);
		}

		::System::Void CKPNDNDLDNL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_CKPNDNDLDNL_OFFSET))(this, a1);
		}

		::System::Void EFKCHIJPKEN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EFKCHIJPKEN_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void AIKNCNLPFHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_AIKNCNLPFHG_OFFSET))(this, a1);
		}

		::System::Void OJIMFFMHEEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OJIMFFMHEEK_OFFSET))(this, a1);
		}

		::System::Void NPPPONLILLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_NPPPONLILLE_OFFSET))(this);
		}

		::System::Void HAIODNJPHIP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_HAIODNJPHIP_OFFSET))(this, a1);
		}

		::System::Void HABGFCJFKDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_HABGFCJFKDI_OFFSET))(this, a1);
		}

		::System::Void ABELFDPGKOE(::System::UInt32 a1, ::ICHIALIFCIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + EMOPIJNJODH_ABELFDPGKOE_OFFSET))(this, a1, a2);
		}

		::System::Void KHCOPOKGAKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KHCOPOKGAKI_OFFSET))(this, a1);
		}

		::System::Void PJMHPEIJKLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PJMHPEIJKLF_OFFSET))(this, a1);
		}

		::System::Void DJIEAOEDHJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DJIEAOEDHJM_OFFSET))(this);
		}

		::System::Void GJDJBCAKNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GJDJBCAKNMO_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void GLJHJIDOJKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GLJHJIDOJKG_OFFSET))(this, a1);
		}

		::System::Void OGPAMKGAGJF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void DMBMGCGDMCE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DMBMGCGDMCE_OFFSET))(this, a1);
		}

		::System::Void IAODJDMCKNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IAODJDMCKNE_OFFSET))(this, a1);
		}

		::System::Void FIHLOKNBBJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FIHLOKNBBJC_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_LCJLLGBJENF_OFFSET))(this, a1);
		}

		::System::Void JFIMJONCKHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_JFIMJONCKHC_OFFSET))(this, a1);
		}

		::System::Void GCODCEFGANN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GCODCEFGANN_OFFSET))(this, a1);
		}

		::System::Void OPOCPDBMELE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OPOCPDBMELE_OFFSET))(this, a1);
		}

		::System::Void FLFDNCNPDNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FLFDNCNPDNI_OFFSET))(this, a1);
		}

		::System::Void KMGJGCBMNJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KMGJGCBMNJH_OFFSET))(this, a1);
		}

		::System::Void AODAKNMADMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_AODAKNMADMO_OFFSET))(this, a1);
		}

		::System::Void IPEAGFMEOKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IPEAGFMEOKB_OFFSET))(this, a1);
		}

		::System::Void BLCMCABJHKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BLCMCABJHKP_OFFSET))(this, a1);
		}

		::System::Void EPPJFMKIOMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EPPJFMKIOMJ_OFFSET))(this, a1);
		}

		::System::Void IIEBIBHLLGA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IIEBIBHLLGA_OFFSET))(this, a1);
		}

		::System::Void LBBCPHPEHIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void BHBCLBBOPFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BHBCLBBOPFL_OFFSET))(this, a1);
		}

		::System::Void EJPHKAJJCOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EJPHKAJJCOG_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_LBPHINKONCH_OFFSET))(this, a1);
		}

		::System::Void CEOCHFLMOMA(::DFJOJJKDIGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJOJJKDIGH*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_CEOCHFLMOMA_OFFSET))(this, a1);
		}

		::System::Void BNLPKDGPNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BNLPKDGPNGJ_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType> PODPCBFDNNI()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType>(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PODPCBFDNNI_OFFSET))(this);
		}

		::System::Void MNLMOBLIJPI(::RPG::GameCore::TurnState a1, ::RPG::GameCore::InsertActionType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MNLMOBLIJPI_OFFSET))(this, a1, a2);
		}

		::System::UInt32 OLOMIIBBPLP(::RPG::GameCore::TurnState a1, ::RPG::GameCore::InsertActionType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::InsertActionType))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OLOMIIBBPLP_OFFSET))(this, a1, a2);
		}

		::System::Boolean DODAKNGNJIM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DODAKNGNJIM_OFFSET))(this, a1);
		}

		::System::Void AHGNKLBHFGK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_AHGNKLBHFGK_OFFSET))(this, a1);
		}

		::System::Void KBKGEMBCBMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KBKGEMBCBMO_OFFSET))(this, a1);
		}

		::System::Void LJGADJHHIEH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_LJGADJHHIEH_OFFSET))(this, a1);
		}

		::System::Void MKOHPHOKKML(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MKOHPHOKKML_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventManager* KFJFPLKMPOP()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KFJFPLKMPOP_OFFSET))(this);
		}

		::System::Void DJDONLHHKCI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_DJDONLHHKCI_OFFSET))(this, a1);
		}

		::System::Void PKNEKNFCPOA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PKNEKNFCPOA_OFFSET))(this, a1);
		}

		::System::Void LHPFOFIBPLF(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_LHPFOFIBPLF_OFFSET))(this, a1);
		}

		::System::Void GKBAKFEGHOL(::PCGGALGFNPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCGGALGFNPM*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GKBAKFEGHOL_OFFSET))(this, a1);
		}

		::System::Void FNKFKLJFODH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FNKFKLJFODH_OFFSET))(this, a1);
		}

		::System::Void NFHKHMHDEJH(::RPG::Client::MonsterPhaseChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_NFHKHMHDEJH_OFFSET))(this, a1);
		}

		::System::Void BPADNCEHLFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BPADNCEHLFG_OFFSET))(this, a1);
		}

		::System::Void IAKNMDIPNGC(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IAKNMDIPNGC_OFFSET))(this, a1, a2);
		}

		::System::Void MJFNAIFEEBE(::System::UInt32 a1, ::ICHIALIFCIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MJFNAIFEEBE_OFFSET))(this, a1, a2);
		}

		::System::Void PIGPIKBNEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_PIGPIKBNEMC_OFFSET))(this);
		}

		::System::Void FJAKNBIHECC(::System::UInt32 a1, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudHideType, ::System::Boolean))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FJAKNBIHECC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OGOHNCEFKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OGOHNCEFKOJ_OFFSET))(this);
		}

		::System::Void OEEDBNEIAPC(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EMOPIJNJODH_OEEDBNEIAPC_OFFSET))(this, a1, a2);
		}

		::System::Void NOBJJJODDNK(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_NOBJJJODDNK_OFFSET))(this, a1);
		}

		::System::Void KAELGIGOHKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KAELGIGOHKO_OFFSET))(this, a1);
		}

		::System::Void NOBJJJODDNK_1(::RPG::GameCore::FixPoint a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + EMOPIJNJODH_NOBJJJODDNK_1_OFFSET))(this, a1, a2);
		}

		::System::Void GMHCINLIDAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_GMHCINLIDAH_OFFSET))(this, a1);
		}

		::System::Void KCPNDDCLOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KCPNDDCLOHF_OFFSET))(this);
		}

		::System::Void FJGNONOLDOD(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FJGNONOLDOD_OFFSET))(this, a1, a2);
		}

		::System::UInt32 MKGOBICKGDK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_MKGOBICKGDK_OFFSET))(this, a1);
		}

		::System::Void CADHPAIJDKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOPIJNJODH_CADHPAIJDKJ_OFFSET))(this);
		}

		::System::Void FCOHJDGPJFK(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_FCOHJDGPJFK_OFFSET))(this, a1);
		}

		::System::Void JGIPGPHKDDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMOPIJNJODH_JGIPGPHKDDI_OFFSET))(this, a1);
		}

		::System::Void EKKGLDLKMMN(::DLMIEJJBGNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLMIEJJBGNF*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_EKKGLDLKMMN_OFFSET))(this, a1);
		}

		::System::Void IECECNKLNFF(::AJHPHMDACGG* a1, ::DLMIEJJBGNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AJHPHMDACGG*, ::DLMIEJJBGNF*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_IECECNKLNFF_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOFEEBHCD(::CMIBMDCJFEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_KOHOFEEBHCD_OFFSET))(this, a1);
		}

		::System::Void BBPKHLOIGBC(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + EMOPIJNJODH_BBPKHLOIGBC_OFFSET))(this, a1);
		}

	};
