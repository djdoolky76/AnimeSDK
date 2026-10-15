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

#define CFEFOGNGCMH_AJDHMJLKKHL_OFFSET UNITYSDK_OFFSET(0xCA11240)
#define CFEFOGNGCMH_BCIBFJAAMBF_OFFSET UNITYSDK_OFFSET(0xCA10D50)
#define CFEFOGNGCMH_BDCDDHEDIEH_OFFSET UNITYSDK_OFFSET(0xCA0CA70)
#define CFEFOGNGCMH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xCA0D870)
#define CFEFOGNGCMH_BIDJNIPEDCE_OFFSET UNITYSDK_OFFSET(0xCA10E70)
#define CFEFOGNGCMH_BLMLBHNNGPB_OFFSET UNITYSDK_OFFSET(0xCA0D990)
#define CFEFOGNGCMH_BODGCAPOMNG_OFFSET UNITYSDK_OFFSET(0xCA10F00)
#define CFEFOGNGCMH_BPDPDODJKLO_OFFSET UNITYSDK_OFFSET(0xCA0FC90)
#define CFEFOGNGCMH_CBNBIMGONEF_OFFSET UNITYSDK_OFFSET(0xCA0D010)
#define CFEFOGNGCMH_CEBIMHPOONE_OFFSET UNITYSDK_OFFSET(0xCA0FA50)
#define CFEFOGNGCMH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xCA0EBD0)
#define CFEFOGNGCMH_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xCA0DFF0)
#define CFEFOGNGCMH_CJNMPGDHCDJ_OFFSET UNITYSDK_OFFSET(0xCA0E3C0)
#define CFEFOGNGCMH_CPIGPNOELDN_OFFSET UNITYSDK_OFFSET(0xCA10860)
#define CFEFOGNGCMH_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0BFF0)
#define CFEFOGNGCMH_DINNLOJGKEK_OFFSET UNITYSDK_OFFSET(0xCA0CAC0)
#define CFEFOGNGCMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA104E0)
#define CFEFOGNGCMH_DKAFAJBFFBI_OFFSET UNITYSDK_OFFSET(0xCA0FC20)
#define CFEFOGNGCMH_DNOGADBCNNB_OFFSET UNITYSDK_OFFSET(0xCA10A40)
#define CFEFOGNGCMH_DPIEKEDLECJ_OFFSET UNITYSDK_OFFSET(0xCA0C190)
#define CFEFOGNGCMH_ENELLPEBGBH_OFFSET UNITYSDK_OFFSET(0xCA0EB40)
#define CFEFOGNGCMH_FAHDDBIGPJD_OFFSET UNITYSDK_OFFSET(0xCA0FB40)
#define CFEFOGNGCMH_FGDDKOGPEMI_OFFSET UNITYSDK_OFFSET(0xCA10200)
#define CFEFOGNGCMH_FPMLPEAOONK_OFFSET UNITYSDK_OFFSET(0xCA10040)
#define CFEFOGNGCMH_GEKGNEMGMEH_OFFSET UNITYSDK_OFFSET(0xCA0DAD0)
#define CFEFOGNGCMH_GET_CURRENTMATCHPARAMS_OFFSET UNITYSDK_OFFSET(0xCA11460)
#define CFEFOGNGCMH_GET_CURRENTRESULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCA11480)
#define CFEFOGNGCMH_GET_EXITDESTINATION_OFFSET UNITYSDK_OFFSET(0xCA0FB90)
#define CFEFOGNGCMH_GHADGIAFECO_OFFSET UNITYSDK_OFFSET(0xCA100F0)
#define CFEFOGNGCMH_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xCA0CC30)
#define CFEFOGNGCMH_GNDOHABHBOM_OFFSET UNITYSDK_OFFSET(0xCA10BB0)
#define CFEFOGNGCMH_HAGACKJBENB_OFFSET UNITYSDK_OFFSET(0xCA10710)
#define CFEFOGNGCMH_HFFNDDKMOKM_OFFSET UNITYSDK_OFFSET(0xCA0C740)
#define CFEFOGNGCMH_HHLFBGDPKBG_OFFSET UNITYSDK_OFFSET(0xCA0F120)
#define CFEFOGNGCMH_IAGKNMIDOFC_OFFSET UNITYSDK_OFFSET(0xCA10C80)
#define CFEFOGNGCMH_IBIDCELNLMC_OFFSET UNITYSDK_OFFSET(0xCA0C6F0)
#define CFEFOGNGCMH_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xCA0DEA0)
#define CFEFOGNGCMH_IJHNIEFEHKA_OFFSET UNITYSDK_OFFSET(0xCA102A0)
#define CFEFOGNGCMH_IMBCJHKINHF_OFFSET UNITYSDK_OFFSET(0xCA11410)
#define CFEFOGNGCMH_JJHPLAFPBOO_OFFSET UNITYSDK_OFFSET(0xCA0CED0)
#define CFEFOGNGCMH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCA0FD00)
#define CFEFOGNGCMH_JMFFMLCLIMP_OFFSET UNITYSDK_OFFSET(0xCA0FBB0)
#define CFEFOGNGCMH_KNCPNMCCMBB_OFFSET UNITYSDK_OFFSET(0xCA0C890)
#define CFEFOGNGCMH_LAJOKHOLMPE_OFFSET UNITYSDK_OFFSET(0xCA111B0)
#define CFEFOGNGCMH_LAOFNMGBEGG_OFFSET UNITYSDK_OFFSET(0xCA0CB70)
#define CFEFOGNGCMH_LHANMGPPBOL_OFFSET UNITYSDK_OFFSET(0xCA0C5D0)
#define CFEFOGNGCMH_LINBGOPHGLA_OFFSET UNITYSDK_OFFSET(0xCA0D620)
#define CFEFOGNGCMH_LJBEEFNMFKD_OFFSET UNITYSDK_OFFSET(0xCA10790)
#define CFEFOGNGCMH_LPDKNHAKBIB_OFFSET UNITYSDK_OFFSET(0xCA10810)
#define CFEFOGNGCMH_LPHDNCDGJHM_OFFSET UNITYSDK_OFFSET(0xCA0F7A0)
#define CFEFOGNGCMH_MCACDCOJGJN_OFFSET UNITYSDK_OFFSET(0xCA0E4D0)
#define CFEFOGNGCMH_MGAFGFIHNIF_OFFSET UNITYSDK_OFFSET(0xCA0C8E0)
#define CFEFOGNGCMH_MLAIMLLEMPA_OFFSET UNITYSDK_OFFSET(0xCA0E720)
#define CFEFOGNGCMH_MNLJGDAHDAN_1_OFFSET UNITYSDK_OFFSET(0xCA10CE0)
#define CFEFOGNGCMH_MNLJGDAHDAN_OFFSET UNITYSDK_OFFSET(0xCA0EA30)
#define CFEFOGNGCMH_MPPBLDPPBDD_OFFSET UNITYSDK_OFFSET(0xCA110F0)
#define CFEFOGNGCMH_NAMEEJKPAGM_OFFSET UNITYSDK_OFFSET(0xCA10930)
#define CFEFOGNGCMH_NBDEIKBNBLB_OFFSET UNITYSDK_OFFSET(0xCA0EE00)
#define CFEFOGNGCMH_NBPEKLPKDEC_OFFSET UNITYSDK_OFFSET(0xCA0EF80)
#define CFEFOGNGCMH_NCBCLKFIPKI_OFFSET UNITYSDK_OFFSET(0xCA11370)
#define CFEFOGNGCMH_NMLEGEEIBGA_OFFSET UNITYSDK_OFFSET(0xCA0F0B0)
#define CFEFOGNGCMH_NOPFBGBHEFM_OFFSET UNITYSDK_OFFSET(0xCA0F380)
#define CFEFOGNGCMH_NPOBMPJKIAP_OFFSET UNITYSDK_OFFSET(0xCA0E1D0)
#define CFEFOGNGCMH_OBPCJGHFBEP_OFFSET UNITYSDK_OFFSET(0xCA106C0)
#define CFEFOGNGCMH_ODIECDJHPAK_OFFSET UNITYSDK_OFFSET(0xCA102F0)
#define CFEFOGNGCMH_ODJGBIDAACN_OFFSET UNITYSDK_OFFSET(0xCA0C580)
#define CFEFOGNGCMH_ODLOMCEEDEP_OFFSET UNITYSDK_OFFSET(0xCA0C1E0)
#define CFEFOGNGCMH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xCA0DD50)
#define CFEFOGNGCMH_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xCA0D3D0)
#define CFEFOGNGCMH_OLFCHEANHOA_OFFSET UNITYSDK_OFFSET(0xCA0E480)
#define CFEFOGNGCMH_ONHHEPDFHBI_OFFSET UNITYSDK_OFFSET(0xCA0D510)
#define CFEFOGNGCMH_PCJPLPNPKDH_OFFSET UNITYSDK_OFFSET(0xCA0F4F0)
#define CFEFOGNGCMH_PDFKKEBCMAB_OFFSET UNITYSDK_OFFSET(0xCA108C0)
#define CFEFOGNGCMH_PECPJNNAEOI_OFFSET UNITYSDK_OFFSET(0xCA10DB0)
#define CFEFOGNGCMH_PEHPHOJMKDN_OFFSET UNITYSDK_OFFSET(0xCA0D330)
#define CFEFOGNGCMH_PIBOFNIKHHH_OFFSET UNITYSDK_OFFSET(0xCA0D8C0)
#define CFEFOGNGCMH_SET_CURRENTMATCHPARAMS_OFFSET UNITYSDK_OFFSET(0xCA11470)
#define CFEFOGNGCMH_SET_CURRENTRESULTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xCA11490)
#define CFEFOGNGCMH_SET_EXITDESTINATION_OFFSET UNITYSDK_OFFSET(0xCA0FBA0)
#define CFEFOGNGCMH__QUITMATCH_B__20_0_OFFSET UNITYSDK_OFFSET(0xCA114A0)
#define CFEFOGNGCMH__RETURNAFTERSEASONMATCHFAILED_B__26_0_OFFSET UNITYSDK_OFFSET(0xCA114C0)
#define CFEFOGNGCMH__SETTLE_B__21_0_OFFSET UNITYSDK_OFFSET(0xCA114B0)

inline static constexpr unsigned int CFEFOGNGCMH_TypeDefinitionIndex = 81865;

	class CFEFOGNGCMH : public ::System::Object
	{
	public:
		::AAKEKBEKPJA* DDGECBHMPJI; // 0x10
		::DCNNAGMLENM* _CurrentMatchParams_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::ENHPOOFIMBB*>* MNDEAGBNFAJ; // 0x20
		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* KGJLJHCIMMJ; // 0x28
		::DCPFKELPBKE* IBBCJPGLBJK; // 0x30
		::COMLBAOIJEA* DJFELOPFGIP; // 0x38
		::HJPABINGLBK* CBIGPGKJAEI; // 0x40
		::CLDCBKKKFPP* PHAGAHGEODP; // 0x48
		::System::IDisposable* IDDCLDHMEEM; // 0x50
		::PJFJMEEIOCO* _CurrentResultSnapshot_k__BackingField; // 0x58
		::System::Boolean OMONMPIJJLE; // 0x60
		::System::Boolean HFPFCCNFFFF; // 0x61
		::System::Byte _padding0[0x2];
		::RPG::Client::B51Racing::B51RacingMatchExitDestination _ExitDestination_k__BackingField; // 0x64
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
