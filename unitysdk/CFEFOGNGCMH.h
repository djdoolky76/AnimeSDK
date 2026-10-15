#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPICFNLLMCO.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingMatchExitDestination.h"
#include "unitysdk/RPG/Client/B51Racing/ERacingMatchFlowState.h"
#include "unitysdk/System/Object.h"
class AAKEKBEKPJA;
class BDHINPLKOPK;
class CLDCBKKKFPP;
class COMLBAOIJEA;
class DCNNAGMLENM;
class DCPFKELPBKE;
class ENHPOOFIMBB;
class GNOCLCNNAPD;
class HBFPEEPJOPK;
class HCAJDCFFEAE;
class HIJPIJFOOCN;
class HJPABINGLBK;
class IDCOJJANCCK;
class KBKFLNHFHPF;
class KPDKCEAFBHI;
class PJFJMEEIOCO;
namespace RPG::Client::B51Racing { class B51RacingGamePlayFinishPageViewModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class IDisposable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFEFOGNGCMH_AJDHMJLKKHL_OFFSET UNITYSDK_OFFSET(0xCA0A2B0)
#define CFEFOGNGCMH_BCIBFJAAMBF_OFFSET UNITYSDK_OFFSET(0xCA09DC0)
#define CFEFOGNGCMH_BDCDDHEDIEH_OFFSET UNITYSDK_OFFSET(0xCA05AE0)
#define CFEFOGNGCMH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xCA068E0)
#define CFEFOGNGCMH_BIDJNIPEDCE_OFFSET UNITYSDK_OFFSET(0xCA09EE0)
#define CFEFOGNGCMH_BLMLBHNNGPB_OFFSET UNITYSDK_OFFSET(0xCA06A00)
#define CFEFOGNGCMH_BODGCAPOMNG_OFFSET UNITYSDK_OFFSET(0xCA09F70)
#define CFEFOGNGCMH_BPDPDODJKLO_OFFSET UNITYSDK_OFFSET(0xCA08D00)
#define CFEFOGNGCMH_CBNBIMGONEF_OFFSET UNITYSDK_OFFSET(0xCA06080)
#define CFEFOGNGCMH_CEBIMHPOONE_OFFSET UNITYSDK_OFFSET(0xCA08AC0)
#define CFEFOGNGCMH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xCA07C40)
#define CFEFOGNGCMH_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xCA07060)
#define CFEFOGNGCMH_CJNMPGDHCDJ_OFFSET UNITYSDK_OFFSET(0xCA07430)
#define CFEFOGNGCMH_CPIGPNOELDN_OFFSET UNITYSDK_OFFSET(0xCA098D0)
#define CFEFOGNGCMH_CTOR_OFFSET UNITYSDK_OFFSET(0xCA05060)
#define CFEFOGNGCMH_DINNLOJGKEK_OFFSET UNITYSDK_OFFSET(0xCA05B30)
#define CFEFOGNGCMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA09550)
#define CFEFOGNGCMH_DKAFAJBFFBI_OFFSET UNITYSDK_OFFSET(0xCA08C90)
#define CFEFOGNGCMH_DNOGADBCNNB_OFFSET UNITYSDK_OFFSET(0xCA09AB0)
#define CFEFOGNGCMH_DPIEKEDLECJ_OFFSET UNITYSDK_OFFSET(0xCA05200)
#define CFEFOGNGCMH_ENELLPEBGBH_OFFSET UNITYSDK_OFFSET(0xCA07BB0)
#define CFEFOGNGCMH_FAHDDBIGPJD_OFFSET UNITYSDK_OFFSET(0xCA08BB0)
#define CFEFOGNGCMH_FGDDKOGPEMI_OFFSET UNITYSDK_OFFSET(0xCA09270)
#define CFEFOGNGCMH_FPMLPEAOONK_OFFSET UNITYSDK_OFFSET(0xCA090B0)
#define CFEFOGNGCMH_GEKGNEMGMEH_OFFSET UNITYSDK_OFFSET(0xCA06B40)
#define CFEFOGNGCMH_GET_CURRENTMATCHPARAMS_OFFSET UNITYSDK_OFFSET(0xCA0A4D0)
#define CFEFOGNGCMH_GET_CURRENTRESULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCA0A4F0)
#define CFEFOGNGCMH_GET_EXITDESTINATION_OFFSET UNITYSDK_OFFSET(0xCA08C00)
#define CFEFOGNGCMH_GHADGIAFECO_OFFSET UNITYSDK_OFFSET(0xCA09160)
#define CFEFOGNGCMH_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xCA05CA0)
#define CFEFOGNGCMH_GNDOHABHBOM_OFFSET UNITYSDK_OFFSET(0xCA09C20)
#define CFEFOGNGCMH_HAGACKJBENB_OFFSET UNITYSDK_OFFSET(0xCA09780)
#define CFEFOGNGCMH_HFFNDDKMOKM_OFFSET UNITYSDK_OFFSET(0xCA057B0)
#define CFEFOGNGCMH_HHLFBGDPKBG_OFFSET UNITYSDK_OFFSET(0xCA08190)
#define CFEFOGNGCMH_IAGKNMIDOFC_OFFSET UNITYSDK_OFFSET(0xCA09CF0)
#define CFEFOGNGCMH_IBIDCELNLMC_OFFSET UNITYSDK_OFFSET(0xCA05760)
#define CFEFOGNGCMH_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCA06F10)
#define CFEFOGNGCMH_IJHNIEFEHKA_OFFSET UNITYSDK_OFFSET(0xCA09310)
#define CFEFOGNGCMH_IMBCJHKINHF_OFFSET UNITYSDK_OFFSET(0xCA0A480)
#define CFEFOGNGCMH_JJHPLAFPBOO_OFFSET UNITYSDK_OFFSET(0xCA05F40)
#define CFEFOGNGCMH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCA08D70)
#define CFEFOGNGCMH_JMFFMLCLIMP_OFFSET UNITYSDK_OFFSET(0xCA08C20)
#define CFEFOGNGCMH_KNCPNMCCMBB_OFFSET UNITYSDK_OFFSET(0xCA05900)
#define CFEFOGNGCMH_LAJOKHOLMPE_OFFSET UNITYSDK_OFFSET(0xCA0A220)
#define CFEFOGNGCMH_LAOFNMGBEGG_OFFSET UNITYSDK_OFFSET(0xCA05BE0)
#define CFEFOGNGCMH_LHANMGPPBOL_OFFSET UNITYSDK_OFFSET(0xCA05640)
#define CFEFOGNGCMH_LINBGOPHGLA_OFFSET UNITYSDK_OFFSET(0xCA06690)
#define CFEFOGNGCMH_LJBEEFNMFKD_OFFSET UNITYSDK_OFFSET(0xCA09800)
#define CFEFOGNGCMH_LPDKNHAKBIB_OFFSET UNITYSDK_OFFSET(0xCA09880)
#define CFEFOGNGCMH_LPHDNCDGJHM_OFFSET UNITYSDK_OFFSET(0xCA08810)
#define CFEFOGNGCMH_MCACDCOJGJN_OFFSET UNITYSDK_OFFSET(0xCA07540)
#define CFEFOGNGCMH_MGAFGFIHNIF_OFFSET UNITYSDK_OFFSET(0xCA05950)
#define CFEFOGNGCMH_MLAIMLLEMPA_OFFSET UNITYSDK_OFFSET(0xCA07790)
#define CFEFOGNGCMH_MNLJGDAHDAN_1_OFFSET UNITYSDK_OFFSET(0xCA09D50)
#define CFEFOGNGCMH_MNLJGDAHDAN_OFFSET UNITYSDK_OFFSET(0xCA07AA0)
#define CFEFOGNGCMH_MPPBLDPPBDD_OFFSET UNITYSDK_OFFSET(0xCA0A160)
#define CFEFOGNGCMH_NAMEEJKPAGM_OFFSET UNITYSDK_OFFSET(0xCA099A0)
#define CFEFOGNGCMH_NBDEIKBNBLB_OFFSET UNITYSDK_OFFSET(0xCA07E70)
#define CFEFOGNGCMH_NBPEKLPKDEC_OFFSET UNITYSDK_OFFSET(0xCA07FF0)
#define CFEFOGNGCMH_NCBCLKFIPKI_OFFSET UNITYSDK_OFFSET(0xCA0A3E0)
#define CFEFOGNGCMH_NMLEGEEIBGA_OFFSET UNITYSDK_OFFSET(0xCA08120)
#define CFEFOGNGCMH_NOPFBGBHEFM_OFFSET UNITYSDK_OFFSET(0xCA083F0)
#define CFEFOGNGCMH_NPOBMPJKIAP_OFFSET UNITYSDK_OFFSET(0xCA07240)
#define CFEFOGNGCMH_OBPCJGHFBEP_OFFSET UNITYSDK_OFFSET(0xCA09730)
#define CFEFOGNGCMH_ODIECDJHPAK_OFFSET UNITYSDK_OFFSET(0xCA09360)
#define CFEFOGNGCMH_ODJGBIDAACN_OFFSET UNITYSDK_OFFSET(0xCA055F0)
#define CFEFOGNGCMH_ODLOMCEEDEP_OFFSET UNITYSDK_OFFSET(0xCA05250)
#define CFEFOGNGCMH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCA06DC0)
#define CFEFOGNGCMH_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCA06440)
#define CFEFOGNGCMH_OLFCHEANHOA_OFFSET UNITYSDK_OFFSET(0xCA074F0)
#define CFEFOGNGCMH_ONHHEPDFHBI_OFFSET UNITYSDK_OFFSET(0xCA06580)
#define CFEFOGNGCMH_PCJPLPNPKDH_OFFSET UNITYSDK_OFFSET(0xCA08560)
#define CFEFOGNGCMH_PDFKKEBCMAB_OFFSET UNITYSDK_OFFSET(0xCA09930)
#define CFEFOGNGCMH_PECPJNNAEOI_OFFSET UNITYSDK_OFFSET(0xCA09E20)
#define CFEFOGNGCMH_PEHPHOJMKDN_OFFSET UNITYSDK_OFFSET(0xCA063A0)
#define CFEFOGNGCMH_PIBOFNIKHHH_OFFSET UNITYSDK_OFFSET(0xCA06930)
#define CFEFOGNGCMH_SET_CURRENTMATCHPARAMS_OFFSET UNITYSDK_OFFSET(0xCA0A4E0)
#define CFEFOGNGCMH_SET_CURRENTRESULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCA0A500)
#define CFEFOGNGCMH_SET_EXITDESTINATION_OFFSET UNITYSDK_OFFSET(0xCA08C10)
#define CFEFOGNGCMH__QUITMATCH_B__20_0_OFFSET UNITYSDK_OFFSET(0xCA0A510)
#define CFEFOGNGCMH__RETURNAFTERSEASONMATCHFAILED_B__26_0_OFFSET UNITYSDK_OFFSET(0xCA0A530)
#define CFEFOGNGCMH__SETTLE_B__21_0_OFFSET UNITYSDK_OFFSET(0xCA0A520)

inline static constexpr unsigned int CFEFOGNGCMH_TypeDefinitionIndex = 81864;

	class CFEFOGNGCMH : public ::System::Object
	{
	public:
		::PJFJMEEIOCO* _CurrentResultSnapshot_k__BackingField; // 0x10
		::HJPABINGLBK* CBIGPGKJAEI; // 0x18
		::System::IDisposable* IDDCLDHMEEM; // 0x20
		::COMLBAOIJEA* DJFELOPFGIP; // 0x28
		::CLDCBKKKFPP* PHAGAHGEODP; // 0x30
		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* KGJLJHCIMMJ; // 0x38
		::AAKEKBEKPJA* DDGECBHMPJI; // 0x40
		::System::Collections::Generic::List_1<::ENHPOOFIMBB*>* MNDEAGBNFAJ; // 0x48
		::DCNNAGMLENM* _CurrentMatchParams_k__BackingField; // 0x50
		::DCPFKELPBKE* IBBCJPGLBJK; // 0x58
		::RPG::Client::B51Racing::B51RacingMatchExitDestination _ExitDestination_k__BackingField; // 0x60
		::System::Boolean OMONMPIJJLE; // 0x64
		::System::Boolean HFPFCCNFFFF; // 0x65
		// static const ::System::Object GOAELCAMOAJ; // 0x0
		// static const ::System::Object BLMDJLICEOG; // 0x0
		// static const ::System::Object FGHGKNGHLKN; // 0x0
		// static const ::System::Object AKGDNNIMHCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CTOR_OFFSET))(this);
		}

		::System::Void DPIEKEDLECJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_DPIEKEDLECJ_OFFSET))(this);
		}

		::System::Boolean ODJGBIDAACN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_ODJGBIDAACN_OFFSET))(this);
		}

		::System::Void IBIDCELNLMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_IBIDCELNLMC_OFFSET))(this);
		}

		::System::Void KNCPNMCCMBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_KNCPNMCCMBB_OFFSET))(this);
		}

		::System::Void BDCDDHEDIEH(::PJFJMEEIOCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFJMEEIOCO*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BDCDDHEDIEH_OFFSET))(this, a1);
		}

		::System::Single DINNLOJGKEK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_DINNLOJGKEK_OFFSET))(this);
		}

		::System::Boolean LAOFNMGBEGG(::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LAOFNMGBEGG_OFFSET))(this, a1);
		}

		::System::Boolean GMHFMPLLPDL(::DCNNAGMLENM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GMHFMPLLPDL_OFFSET))(this, a1);
		}

		::System::Void LINBGOPHGLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LINBGOPHGLA_OFFSET))(this);
		}

		::System::Boolean JJHPLAFPBOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_JJHPLAFPBOO_OFFSET))(this);
		}

		::System::Void CBNBIMGONEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CBNBIMGONEF_OFFSET))(this);
		}

		static ::DCNNAGMLENM* PEHPHOJMKDN(::DCNNAGMLENM* a1)
		{
			return ((::DCNNAGMLENM*(*)(::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_PEHPHOJMKDN_OFFSET))(a1);
		}

		::System::Boolean OINBDMGFFJL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Boolean BLMLBHNNGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BLMLBHNNGPB_OFFSET))(this);
		}

		::System::Boolean GEKGNEMGMEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GEKGNEMGMEH_OFFSET))(this);
		}

		::System::Boolean OHMHJFANEIF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Boolean IECIAPPANHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_IECIAPPANHI_OFFSET))(this);
		}

		::System::Boolean CIHFGJDCHIA(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CIHFGJDCHIA_OFFSET))(this, a1);
		}

		::System::Boolean OLFCHEANHOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_OLFCHEANHOA_OFFSET))(this);
		}

		::System::Void MLAIMLLEMPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MLAIMLLEMPA_OFFSET))(this);
		}

		::System::Boolean MCACDCOJGJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MCACDCOJGJN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* ENELLPEBGBH(::HPICFNLLMCO a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>*(*)(::PVOID, ::HPICFNLLMCO))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_ENELLPEBGBH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* NBDEIKBNBLB()
		{
			return ((::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NBDEIKBNBLB_OFFSET))(this);
		}

		::System::Boolean NOPFBGBHEFM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NOPFBGBHEFM_OFFSET))(this);
		}

		::System::Boolean PCJPLPNPKDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_PCJPLPNPKDH_OFFSET))(this);
		}

		::System::Void CEBIMHPOONE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CEBIMHPOONE_OFFSET))(this);
		}

		::System::Void FAHDDBIGPJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_FAHDDBIGPJD_OFFSET))(this);
		}

		::System::Boolean CHAHBFGGIDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CHAHBFGGIDL_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingMatchExitDestination get_ExitDestination()
		{
			return ((::RPG::Client::B51Racing::B51RacingMatchExitDestination(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GET_EXITDESTINATION_OFFSET))(this);
		}

		::System::Void set_ExitDestination(::RPG::Client::B51Racing::B51RacingMatchExitDestination a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingMatchExitDestination))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_SET_EXITDESTINATION_OFFSET))(this, a1);
		}

		::System::Boolean JMFFMLCLIMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_JMFFMLCLIMP_OFFSET))(this);
		}

		::System::Boolean DKAFAJBFFBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_DKAFAJBFFBI_OFFSET))(this);
		}

		::System::Boolean BPDPDODJKLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BPDPDODJKLO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GHADGIAFECO(::ENHPOOFIMBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHPOOFIMBB*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GHADGIAFECO_OFFSET))(this, a1);
		}

		::System::Void FGDDKOGPEMI(::ENHPOOFIMBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHPOOFIMBB*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_FGDDKOGPEMI_OFFSET))(this, a1);
		}

		::System::Boolean IJHNIEFEHKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_IJHNIEFEHKA_OFFSET))(this);
		}

		::HCAJDCFFEAE* NBPEKLPKDEC()
		{
			return ((::HCAJDCFFEAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NBPEKLPKDEC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_DISPOSE_OFFSET))(this);
		}

		::System::Void HAGACKJBENB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_HAGACKJBENB_OFFSET))(this);
		}

		::System::Void LJBEEFNMFKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LJBEEFNMFKD_OFFSET))(this);
		}

		::System::Void LPDKNHAKBIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LPDKNHAKBIB_OFFSET))(this);
		}

		::System::Single CPIGPNOELDN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CPIGPNOELDN_OFFSET))(this);
		}

		::System::Boolean PDFKKEBCMAB(::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_PDFKKEBCMAB_OFFSET))(this, a1);
		}

		static ::BDHINPLKOPK* DNOGADBCNNB()
		{
			return ((::BDHINPLKOPK*(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH_DNOGADBCNNB_OFFSET))();
		}

		static ::GNOCLCNNAPD* ONHHEPDFHBI()
		{
			return ((::GNOCLCNNAPD*(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH_ONHHEPDFHBI_OFFSET))();
		}

		static ::IDCOJJANCCK* NAMEEJKPAGM()
		{
			return ((::IDCOJJANCCK*(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NAMEEJKPAGM_OFFSET))();
		}

		::System::Void MGAFGFIHNIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MGAFGFIHNIF_OFFSET))(this);
		}

		::System::Boolean LHANMGPPBOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LHANMGPPBOL_OFFSET))(this);
		}

		::System::Void HFFNDDKMOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_HFFNDDKMOKM_OFFSET))(this);
		}

		::System::Void PIBOFNIKHHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_PIBOFNIKHHH_OFFSET))(this);
		}

		::System::Void LPHDNCDGJHM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LPHDNCDGJHM_OFFSET))(this, a1);
		}

		::System::Boolean GNDOHABHBOM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GNDOHABHBOM_OFFSET))(this, a1);
		}

		::System::Void ODLOMCEEDEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_ODLOMCEEDEP_OFFSET))(this);
		}

		::System::Boolean IAGKNMIDOFC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_IAGKNMIDOFC_OFFSET))(this, a1);
		}

		::System::String* BIDJNIPEDCE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BIDJNIPEDCE_OFFSET))(this);
		}

		::System::String* PECPJNNAEOI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_PECPJNNAEOI_OFFSET))(this);
		}

		::System::String* LAJOKHOLMPE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_LAJOKHOLMPE_OFFSET))(this);
		}

		::System::String* MPPBLDPPBDD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MPPBLDPPBDD_OFFSET))(this);
		}

		::System::Void BCIBFJAAMBF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BCIBFJAAMBF_OFFSET))(this, a1, a2);
		}

		::System::Boolean BODGCAPOMNG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BODGCAPOMNG_OFFSET))(this, a1);
		}

		::System::Boolean NMLEGEEIBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NMLEGEEIBGA_OFFSET))(this);
		}

		::System::Void CJNMPGDHCDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_CJNMPGDHCDJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* HHLFBGDPKBG(::System::String* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_HHLFBGDPKBG_OFFSET))(this, a1);
		}

		::System::Void OBPCJGHFBEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_OBPCJGHFBEP_OFFSET))(this);
		}

		::System::Boolean NCBCLKFIPKI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NCBCLKFIPKI_OFFSET))(this);
		}

		::System::Boolean FPMLPEAOONK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_FPMLPEAOONK_OFFSET))(this);
		}

		::KBKFLNHFHPF* AJDHMJLKKHL()
		{
			return ((::KBKFLNHFHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_AJDHMJLKKHL_OFFSET))(this);
		}

		::System::Boolean MNLJGDAHDAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MNLJGDAHDAN_OFFSET))(this);
		}

		::System::Boolean MNLJGDAHDAN_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_MNLJGDAHDAN_1_OFFSET))(this, a1);
		}

		::System::Boolean IMBCJHKINHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_IMBCJHKINHF_OFFSET))(this);
		}

		static ::KPDKCEAFBHI* ODIECDJHPAK()
		{
			return ((::KPDKCEAFBHI*(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH_ODIECDJHPAK_OFFSET))();
		}

		static ::HIJPIJFOOCN* NPOBMPJKIAP()
		{
			return ((::HIJPIJFOOCN*(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH_NPOBMPJKIAP_OFFSET))();
		}

		::DCNNAGMLENM* get_CurrentMatchParams()
		{
			return ((::DCNNAGMLENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GET_CURRENTMATCHPARAMS_OFFSET))(this);
		}

		::System::Void set_CurrentMatchParams(::DCNNAGMLENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_SET_CURRENTMATCHPARAMS_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::ERacingMatchFlowState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::B51Racing::ERacingMatchFlowState(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_BGDKFHEBDFJ_OFFSET))(this);
		}

		::PJFJMEEIOCO* get_CurrentResultSnapshot()
		{
			return ((::PJFJMEEIOCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_GET_CURRENTRESULTSNAPSHOT_OFFSET))(this);
		}

		::System::Void set_CurrentResultSnapshot(::PJFJMEEIOCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFJMEEIOCO*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH_SET_CURRENTRESULTSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void _QuitMatch_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH__QUITMATCH_B__20_0_OFFSET))(this);
		}

		::System::Void _Settle_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH__SETTLE_B__21_0_OFFSET))(this);
		}

		::System::Void _ReturnAfterSeasonMatchFailed_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH__RETURNAFTERSEASONMATCHFAILED_B__26_0_OFFSET))(this);
		}

	};
