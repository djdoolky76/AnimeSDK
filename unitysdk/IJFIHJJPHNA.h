#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/EAIState.h"
class AEAGFGMOICG;
class AKHGJJKOKHO;
class APMBHNMOONK;
class BFAANIPGJEB;
class BJAPDDEENCN;
class CJCHKDLALDN;
class EDNNEIEIDJP;
class EEKIILDAMOL;
class EIDNNMMCGKK;
class FFMGMJBLCDH;
class GFCOHGKHIPJ;
class GGGIAPOEPLP;
class GHNMNFHDCME;
class GLPPDCIBMIH;
class IGCHGCICEBA;
class KDFPMEOOBCA;
class KDOFOHHENPK;
class MANONNCJAPN;
class MLOAJFMEDHJ;
class NIMCJKKDGNG;
class OEGDBPLMIAE;
class PKEDKJMGAII;
class PNPEAAAFLAA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJFIHJJPHNA_ABAJGNEOMGL_OFFSET UNITYSDK_OFFSET(0x1C6D9F40)
#define IJFIHJJPHNA_ABKJJPCMAKH_OFFSET UNITYSDK_OFFSET(0x1C6D8DE0)
#define IJFIHJJPHNA_ADCPPJNMGJP_OFFSET UNITYSDK_OFFSET(0x1C6DA5D0)
#define IJFIHJJPHNA_AFFLKOPDOGN_OFFSET UNITYSDK_OFFSET(0x1C6DB8A0)
#define IJFIHJJPHNA_AKJADEABFDB_OFFSET UNITYSDK_OFFSET(0x1C6DAA60)
#define IJFIHJJPHNA_ALPKOPMPNCC_OFFSET UNITYSDK_OFFSET(0x1C6DB7B0)
#define IJFIHJJPHNA_ANJMHNDINPN_OFFSET UNITYSDK_OFFSET(0x1C6D9760)
#define IJFIHJJPHNA_BBPOCOGDMLB_OFFSET UNITYSDK_OFFSET(0x1C6D8D30)
#define IJFIHJJPHNA_BCAHAKHJHDL_OFFSET UNITYSDK_OFFSET(0x1C6DAEE0)
#define IJFIHJJPHNA_BDKADJMJJPF_OFFSET UNITYSDK_OFFSET(0x1C6DC6A0)
#define IJFIHJJPHNA_BENIPCHNAHL_OFFSET UNITYSDK_OFFSET(0x1C6DA060)
#define IJFIHJJPHNA_CGAKHPJPGOG_OFFSET UNITYSDK_OFFSET(0x1C6DC860)
#define IJFIHJJPHNA_CHCKLJECLAK_OFFSET UNITYSDK_OFFSET(0x1C6DAB60)
#define IJFIHJJPHNA_CKGEBJODOFD_OFFSET UNITYSDK_OFFSET(0x1C6D9660)
#define IJFIHJJPHNA_CLNGFDPINDB_OFFSET UNITYSDK_OFFSET(0x1C6D96B0)
#define IJFIHJJPHNA_CNIEGDIPGEG_OFFSET UNITYSDK_OFFSET(0x1C6DABC0)
#define IJFIHJJPHNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DC9D0)
#define IJFIHJJPHNA_DBGHCLCPPMJ_OFFSET UNITYSDK_OFFSET(0x1C6DBED0)
#define IJFIHJJPHNA_DCCEJJDFPGP_OFFSET UNITYSDK_OFFSET(0x1C6DBA00)
#define IJFIHJJPHNA_DDPCMLLJCFG_OFFSET UNITYSDK_OFFSET(0x1C6DB8F0)
#define IJFIHJJPHNA_DEKMCEKEFKN_OFFSET UNITYSDK_OFFSET(0x1C6DC530)
#define IJFIHJJPHNA_DJNJDJIJDDL_OFFSET UNITYSDK_OFFSET(0x1C6DB5B0)
#define IJFIHJJPHNA_DPEDDFKNJLM_OFFSET UNITYSDK_OFFSET(0x1C6DC640)
#define IJFIHJJPHNA_EAMOIMJBKBO_OFFSET UNITYSDK_OFFSET(0x1C6DC590)
#define IJFIHJJPHNA_EHHMIAOPDNO_OFFSET UNITYSDK_OFFSET(0x1C6D9EE0)
#define IJFIHJJPHNA_ELPNJLFKPNI_OFFSET UNITYSDK_OFFSET(0x1C6DC420)
#define IJFIHJJPHNA_FOCANIKBHED_OFFSET UNITYSDK_OFFSET(0x1C6DC750)
#define IJFIHJJPHNA_FOJLFMFJNAE_OFFSET UNITYSDK_OFFSET(0x1C6DC7B0)
#define IJFIHJJPHNA_GEKEEJNKBIA_OFFSET UNITYSDK_OFFSET(0x1C6DC310)
#define IJFIHJJPHNA_GGDPBMNKFGI_OFFSET UNITYSDK_OFFSET(0x1C6DC040)
#define IJFIHJJPHNA_GKMKLDHLGOH_OFFSET UNITYSDK_OFFSET(0x1C6DC0F0)
#define IJFIHJJPHNA_GNLAGMCLFFI_OFFSET UNITYSDK_OFFSET(0x1C6D9E30)
#define IJFIHJJPHNA_GONMNDEHJFJ_OFFSET UNITYSDK_OFFSET(0x1C6DACA0)
#define IJFIHJJPHNA_HBFAEFEDJFH_OFFSET UNITYSDK_OFFSET(0x1C6DB420)
#define IJFIHJJPHNA_HBPOJMBDHKC_OFFSET UNITYSDK_OFFSET(0x1C6DB9A0)
#define IJFIHJJPHNA_HDGGNOJBPNL_OFFSET UNITYSDK_OFFSET(0x1C6D8B40)
#define IJFIHJJPHNA_HFDMILCHLLK_OFFSET UNITYSDK_OFFSET(0x1C6DB660)
#define IJFIHJJPHNA_HOAKNOCGFKK_OFFSET UNITYSDK_OFFSET(0x1C6DA680)
#define IJFIHJJPHNA_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0x1C6DADD0)
#define IJFIHJJPHNA_ICMDJMKELKI_OFFSET UNITYSDK_OFFSET(0x1C6D9200)
#define IJFIHJJPHNA_IFIKMAMHFJO_OFFSET UNITYSDK_OFFSET(0x1C6DBD10)
#define IJFIHJJPHNA_IFLPGJOOAHF_OFFSET UNITYSDK_OFFSET(0x1C6DC970)
#define IJFIHJJPHNA_IIEEALGIJGH_OFFSET UNITYSDK_OFFSET(0x1C6DA580)
#define IJFIHJJPHNA_IIKOAGEKADA_OFFSET UNITYSDK_OFFSET(0x1C6DB030)
#define IJFIHJJPHNA_IJJAEKNBNJM_OFFSET UNITYSDK_OFFSET(0x1C6DA8A0)
#define IJFIHJJPHNA_ILMGIOKFOBH_OFFSET UNITYSDK_OFFSET(0x1C6DB6C0)
#define IJFIHJJPHNA_IMICNEFJMJN_OFFSET UNITYSDK_OFFSET(0x1C6DAAB0)
#define IJFIHJJPHNA_JEHGANPGOGO_OFFSET UNITYSDK_OFFSET(0x1C6D90F0)
#define IJFIHJJPHNA_JFBOFPBFLGL_OFFSET UNITYSDK_OFFSET(0x1C6DBF30)
#define IJFIHJJPHNA_JHBPHPNNCJC_OFFSET UNITYSDK_OFFSET(0x1C6D8E40)
#define IJFIHJJPHNA_JJHOCHGHBML_OFFSET UNITYSDK_OFFSET(0x1C6D90A0)
#define IJFIHJJPHNA_JKONLCGMNBD_OFFSET UNITYSDK_OFFSET(0x1C6DBCC0)
#define IJFIHJJPHNA_KAAIMIJFIOK_OFFSET UNITYSDK_OFFSET(0x1C6DC8C0)
#define IJFIHJJPHNA_KANNPJNMJBI_OFFSET UNITYSDK_OFFSET(0x1C6DBB60)
#define IJFIHJJPHNA_KBLLDMEFMGK_OFFSET UNITYSDK_OFFSET(0x1C6DA280)
#define IJFIHJJPHNA_KFOMLGFFPBM_OFFSET UNITYSDK_OFFSET(0x1C6D97C0)
#define IJFIHJJPHNA_KLFAHFBEKMM_OFFSET UNITYSDK_OFFSET(0x1C6DB560)
#define IJFIHJJPHNA_KNPCOLMELFE_OFFSET UNITYSDK_OFFSET(0x1C6DAD80)
#define IJFIHJJPHNA_KOJKAOMMFJK_OFFSET UNITYSDK_OFFSET(0x1C6D9430)
#define IJFIHJJPHNA_LDBMKMIEHMO_OFFSET UNITYSDK_OFFSET(0x1C6DB180)
#define IJFIHJJPHNA_LEHBICOAMAA_OFFSET UNITYSDK_OFFSET(0x1C6DB2E0)
#define IJFIHJJPHNA_LGGNLLLHKIN_OFFSET UNITYSDK_OFFSET(0x1C6DA6E0)
#define IJFIHJJPHNA_LHEHPHPBMAE_OFFSET UNITYSDK_OFFSET(0x1C6DBDC0)
#define IJFIHJJPHNA_LKPKCMIGANA_OFFSET UNITYSDK_OFFSET(0x1C6D91A0)
#define IJFIHJJPHNA_LNJODMAFKAM_OFFSET UNITYSDK_OFFSET(0x1C6DC150)
#define IJFIHJJPHNA_MMDOIJBHAKJ_OFFSET UNITYSDK_OFFSET(0x1C6DA2E0)
#define IJFIHJJPHNA_NAPKFAMPBMA_OFFSET UNITYSDK_OFFSET(0x1C6DA180)
#define IJFIHJJPHNA_NBBHPGFAPCL_OFFSET UNITYSDK_OFFSET(0x1C6DA430)
#define IJFIHJJPHNA_NEHIMBHLLKD_OFFSET UNITYSDK_OFFSET(0x1C6DC200)
#define IJFIHJJPHNA_NIHDMJECPEN_OFFSET UNITYSDK_OFFSET(0x1C6DBFE0)
#define IJFIHJJPHNA_NLOGGLPFHOG_OFFSET UNITYSDK_OFFSET(0x1C6DC480)
#define IJFIHJJPHNA_NMGAJKCCJKO_OFFSET UNITYSDK_OFFSET(0x1C6D8A30)
#define IJFIHJJPHNA_NMKMMAIGELD_OFFSET UNITYSDK_OFFSET(0x1C6DB1D0)
#define IJFIHJJPHNA_ODGHEOBJHCD_OFFSET UNITYSDK_OFFSET(0x1C6DB280)
#define IJFIHJJPHNA_ODICOKFGEKH_OFFSET UNITYSDK_OFFSET(0x1C6D8C10)
#define IJFIHJJPHNA_OEFIMDCLEHK_OFFSET UNITYSDK_OFFSET(0x1C6D9DE0)
#define IJFIHJJPHNA_OHOIAFKHDHM_OFFSET UNITYSDK_OFFSET(0x1C6D9AD0)
#define IJFIHJJPHNA_OKEPOBBKHII_OFFSET UNITYSDK_OFFSET(0x1C6DBE20)
#define IJFIHJJPHNA_ONDKNAEJHED_OFFSET UNITYSDK_OFFSET(0x1C6DC370)
#define IJFIHJJPHNA_PCPFIECCKNJ_OFFSET UNITYSDK_OFFSET(0x1C6D8F70)
#define IJFIHJJPHNA_PHJOKPKBEMN_OFFSET UNITYSDK_OFFSET(0x1C6D8CE0)
#define IJFIHJJPHNA_PIGKGMGCGEA_OFFSET UNITYSDK_OFFSET(0x1C6DAE80)
#define IJFIHJJPHNA_PMGNJJCNEHG_OFFSET UNITYSDK_OFFSET(0x1C6D8AE0)
#define IJFIHJJPHNA_POJHKDKMIOG_OFFSET UNITYSDK_OFFSET(0x1C6DC260)
#define IJFIHJJPHNA_PPKODAGEEDL_OFFSET UNITYSDK_OFFSET(0x1C6DA1D0)

	class IJFIHJJPHNA : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CTOR_OFFSET))(this);
		}

		::AKHGJJKOKHO* NMGAJKCCJKO()
		{
			return ((::AKHGJJKOKHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NMGAJKCCJKO_OFFSET))(this);
		}

		::System::Boolean PMGNJJCNEHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_PMGNJJCNEHG_OFFSET))(this);
		}

		::System::Void HDGGNOJBPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HDGGNOJBPNL_OFFSET))(this, a1);
		}

		::System::Void ODICOKFGEKH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ODICOKFGEKH_OFFSET))(this, a1);
		}

		::System::Void PHJOKPKBEMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_PHJOKPKBEMN_OFFSET))(this);
		}

		::APMBHNMOONK* BBPOCOGDMLB()
		{
			return ((::APMBHNMOONK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_BBPOCOGDMLB_OFFSET))(this);
		}

		::System::Boolean ABKJJPCMAKH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ABKJJPCMAKH_OFFSET))(this);
		}

		::System::Void JHBPHPNNCJC(::System::Int32 a1, ::System::Single a2, ::RPG::LittleGameShare::DiceCombatCore::EAIState a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::LittleGameShare::DiceCombatCore::EAIState, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_JHBPHPNNCJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PCPFIECCKNJ(::System::Int32 a1, ::System::Single a2, ::RPG::LittleGameShare::DiceCombatCore::EAIState a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::LittleGameShare::DiceCombatCore::EAIState, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_PCPFIECCKNJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JJHOCHGHBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_JJHOCHGHBML_OFFSET))(this);
		}

		::EIDNNMMCGKK* JEHGANPGOGO()
		{
			return ((::EIDNNMMCGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_JEHGANPGOGO_OFFSET))(this);
		}

		::System::Boolean LKPKCMIGANA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LKPKCMIGANA_OFFSET))(this);
		}

		::System::Void ICMDJMKELKI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::GHNMNFHDCME*>* a7, ::PKEDKJMGAII* a8, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* a9, ::KDOFOHHENPK* a10, ::KDOFOHHENPK* a11, ::System::UInt32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::GHNMNFHDCME*>*, ::PKEDKJMGAII*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>*, ::KDOFOHHENPK*, ::KDOFOHHENPK*, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ICMDJMKELKI_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void KOJKAOMMFJK(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::GHNMNFHDCME*>* a7, ::PKEDKJMGAII* a8, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* a9, ::KDOFOHHENPK* a10, ::KDOFOHHENPK* a11, ::System::UInt32 a12)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::GHNMNFHDCME*>*, ::PKEDKJMGAII*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>*, ::KDOFOHHENPK*, ::KDOFOHHENPK*, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KOJKAOMMFJK_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		::System::Void CKGEBJODOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CKGEBJODOFD_OFFSET))(this);
		}

		::OEGDBPLMIAE* CLNGFDPINDB()
		{
			return ((::OEGDBPLMIAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CLNGFDPINDB_OFFSET))(this);
		}

		::System::Boolean ANJMHNDINPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ANJMHNDINPN_OFFSET))(this);
		}

		::System::Void KFOMLGFFPBM(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::FFMGMJBLCDH* a16, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a17)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::FFMGMJBLCDH*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KFOMLGFFPBM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void OHOIAFKHDHM(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Boolean a15, ::FFMGMJBLCDH* a16, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a17)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BJAPDDEENCN*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::FFMGMJBLCDH*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_OHOIAFKHDHM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void OEFIMDCLEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_OEFIMDCLEHK_OFFSET))(this);
		}

		::PNPEAAAFLAA* GNLAGMCLFFI()
		{
			return ((::PNPEAAAFLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_GNLAGMCLFFI_OFFSET))(this);
		}

		::System::Boolean EHHMIAOPDNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_EHHMIAOPDNO_OFFSET))(this);
		}

		::System::Void ABAJGNEOMGL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ABAJGNEOMGL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BENIPCHNAHL(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_BENIPCHNAHL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NAPKFAMPBMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NAPKFAMPBMA_OFFSET))(this);
		}

		::GFCOHGKHIPJ* PPKODAGEEDL()
		{
			return ((::GFCOHGKHIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_PPKODAGEEDL_OFFSET))(this);
		}

		::System::Boolean KBLLDMEFMGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KBLLDMEFMGK_OFFSET))(this);
		}

		::System::Void MMDOIJBHAKJ(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::AEAGFGMOICG* a5, ::EDNNEIEIDJP* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::AEAGFGMOICG*, ::EDNNEIEIDJP*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_MMDOIJBHAKJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NBBHPGFAPCL(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::AEAGFGMOICG* a5, ::EDNNEIEIDJP* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::AEAGFGMOICG*, ::EDNNEIEIDJP*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NBBHPGFAPCL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IIEEALGIJGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IIEEALGIJGH_OFFSET))(this);
		}

		::NIMCJKKDGNG* ADCPPJNMGJP()
		{
			return ((::NIMCJKKDGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ADCPPJNMGJP_OFFSET))(this);
		}

		::System::Boolean HOAKNOCGFKK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HOAKNOCGFKK_OFFSET))(this);
		}

		::System::Void LGGNLLLHKIN(::IGCHGCICEBA* a1, ::GGGIAPOEPLP* a2, ::System::UInt32 a3, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a4, ::System::Single a5, ::System::UInt32 a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a7, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::IGCHGCICEBA*, ::GGGIAPOEPLP*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::Single, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LGGNLLLHKIN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void IJJAEKNBNJM(::IGCHGCICEBA* a1, ::GGGIAPOEPLP* a2, ::System::UInt32 a3, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a4, ::System::Single a5, ::System::UInt32 a6, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a7, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a8, ::System::Single a9)
		{
			return ((::System::Void(*)(::PVOID, ::IGCHGCICEBA*, ::GGGIAPOEPLP*, ::System::UInt32, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::System::Single, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IJJAEKNBNJM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AKJADEABFDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_AKJADEABFDB_OFFSET))(this);
		}

		::MANONNCJAPN* IMICNEFJMJN()
		{
			return ((::MANONNCJAPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IMICNEFJMJN_OFFSET))(this);
		}

		::System::Boolean CHCKLJECLAK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CHCKLJECLAK_OFFSET))(this);
		}

		::System::Void CNIEGDIPGEG(::CJCHKDLALDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CNIEGDIPGEG_OFFSET))(this, a1);
		}

		::System::Void GONMNDEHJFJ(::CJCHKDLALDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_GONMNDEHJFJ_OFFSET))(this, a1);
		}

		::System::Void KNPCOLMELFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KNPCOLMELFE_OFFSET))(this);
		}

		::MLOAJFMEDHJ* HOEKDHBPGAI()
		{
			return ((::MLOAJFMEDHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Boolean PIGKGMGCGEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_PIGKGMGCGEA_OFFSET))(this);
		}

		::System::Void BCAHAKHJHDL(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::String*>* a4, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::String*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_BCAHAKHJHDL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void IIKOAGEKADA(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::String*>* a4, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::String*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IIKOAGEKADA_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LDBMKMIEHMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LDBMKMIEHMO_OFFSET))(this);
		}

		::EEKIILDAMOL* NMKMMAIGELD()
		{
			return ((::EEKIILDAMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NMKMMAIGELD_OFFSET))(this);
		}

		::System::Boolean ODGHEOBJHCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ODGHEOBJHCD_OFFSET))(this);
		}

		::System::Void LEHBICOAMAA(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LEHBICOAMAA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HBFAEFEDJFH(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HBFAEFEDJFH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KLFAHFBEKMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KLFAHFBEKMM_OFFSET))(this);
		}

		::BFAANIPGJEB* DJNJDJIJDDL()
		{
			return ((::BFAANIPGJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DJNJDJIJDDL_OFFSET))(this);
		}

		::System::Boolean HFDMILCHLLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HFDMILCHLLK_OFFSET))(this);
		}

		::System::Void ILMGIOKFOBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ILMGIOKFOBH_OFFSET))(this, a1);
		}

		::System::Void ALPKOPMPNCC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ALPKOPMPNCC_OFFSET))(this, a1);
		}

		::System::Void AFFLKOPDOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_AFFLKOPDOGN_OFFSET))(this);
		}

		::KDFPMEOOBCA* DDPCMLLJCFG()
		{
			return ((::KDFPMEOOBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DDPCMLLJCFG_OFFSET))(this);
		}

		::System::Boolean HBPOJMBDHKC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_HBPOJMBDHKC_OFFSET))(this);
		}

		::System::Void DCCEJJDFPGP(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DCCEJJDFPGP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KANNPJNMJBI(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KANNPJNMJBI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKONLCGMNBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_JKONLCGMNBD_OFFSET))(this);
		}

		::APMBHNMOONK* IFIKMAMHFJO()
		{
			return ((::APMBHNMOONK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IFIKMAMHFJO_OFFSET))(this);
		}

		::System::Boolean LHEHPHPBMAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LHEHPHPBMAE_OFFSET))(this);
		}

		::AKHGJJKOKHO* OKEPOBBKHII()
		{
			return ((::AKHGJJKOKHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_OKEPOBBKHII_OFFSET))(this);
		}

		::System::Boolean DBGHCLCPPMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DBGHCLCPPMJ_OFFSET))(this);
		}

		::EIDNNMMCGKK* JFBOFPBFLGL()
		{
			return ((::EIDNNMMCGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_JFBOFPBFLGL_OFFSET))(this);
		}

		::System::Boolean NIHDMJECPEN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NIHDMJECPEN_OFFSET))(this);
		}

		::OEGDBPLMIAE* GGDPBMNKFGI()
		{
			return ((::OEGDBPLMIAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_GGDPBMNKFGI_OFFSET))(this);
		}

		::System::Boolean GKMKLDHLGOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_GKMKLDHLGOH_OFFSET))(this);
		}

		::PNPEAAAFLAA* LNJODMAFKAM()
		{
			return ((::PNPEAAAFLAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_LNJODMAFKAM_OFFSET))(this);
		}

		::System::Boolean NEHIMBHLLKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NEHIMBHLLKD_OFFSET))(this);
		}

		::GFCOHGKHIPJ* POJHKDKMIOG()
		{
			return ((::GFCOHGKHIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_POJHKDKMIOG_OFFSET))(this);
		}

		::System::Boolean GEKEEJNKBIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_GEKEEJNKBIA_OFFSET))(this);
		}

		::NIMCJKKDGNG* ONDKNAEJHED()
		{
			return ((::NIMCJKKDGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ONDKNAEJHED_OFFSET))(this);
		}

		::System::Boolean ELPNJLFKPNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_ELPNJLFKPNI_OFFSET))(this);
		}

		::MANONNCJAPN* NLOGGLPFHOG()
		{
			return ((::MANONNCJAPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_NLOGGLPFHOG_OFFSET))(this);
		}

		::System::Boolean DEKMCEKEFKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DEKMCEKEFKN_OFFSET))(this);
		}

		::MLOAJFMEDHJ* EAMOIMJBKBO()
		{
			return ((::MLOAJFMEDHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_EAMOIMJBKBO_OFFSET))(this);
		}

		::System::Boolean DPEDDFKNJLM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_DPEDDFKNJLM_OFFSET))(this);
		}

		::EEKIILDAMOL* BDKADJMJJPF()
		{
			return ((::EEKIILDAMOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_BDKADJMJJPF_OFFSET))(this);
		}

		::System::Boolean FOCANIKBHED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_FOCANIKBHED_OFFSET))(this);
		}

		::KDFPMEOOBCA* FOJLFMFJNAE()
		{
			return ((::KDFPMEOOBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_FOJLFMFJNAE_OFFSET))(this);
		}

		::System::Boolean CGAKHPJPGOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_CGAKHPJPGOG_OFFSET))(this);
		}

		::BFAANIPGJEB* KAAIMIJFIOK()
		{
			return ((::BFAANIPGJEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_KAAIMIJFIOK_OFFSET))(this);
		}

		::System::Boolean IFLPGJOOAHF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFIHJJPHNA_IFLPGJOOAHF_OFFSET))(this);
		}

	};
