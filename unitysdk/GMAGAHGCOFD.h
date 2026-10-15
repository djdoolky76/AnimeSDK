#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CNCNFGFMKLN;
class GHMGGIHEHJE;
class HJJAAKKPEPP;
class IOGNBKGNPFD;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
class MFIMCKDKDKG;
class OIMEGOHPNFI;
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectileCast; }
namespace RPG::Client { class RoadRashGameAbility_Slam; }
namespace RPG::Client { class RoadRashGameAbility_SlamParams; }
namespace RPG::Client { class RoadRashGameAbility_Ultimate; }
namespace RPG::Client { class RoadRashGameAbility_UltimateV2; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityTaskConfig; }
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class RoadRashGameModifierConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define GMAGAHGCOFD_ABANMDBFJBH_OFFSET UNITYSDK_OFFSET(0x15ABB4C0)
#define GMAGAHGCOFD_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x15AB7280)
#define GMAGAHGCOFD_ADHLCCEPNBD_OFFSET UNITYSDK_OFFSET(0x15ABD650)
#define GMAGAHGCOFD_AGJKNPMFCMB_OFFSET UNITYSDK_OFFSET(0x15AB8A60)
#define GMAGAHGCOFD_AGPAELAPKNE_OFFSET UNITYSDK_OFFSET(0x15AB8890)
#define GMAGAHGCOFD_AHDLCAJDBPD_OFFSET UNITYSDK_OFFSET(0x15ABC630)
#define GMAGAHGCOFD_APGFEANJGHH_OFFSET UNITYSDK_OFFSET(0x15AB8730)
#define GMAGAHGCOFD_BFAHPOGHLPL_OFFSET UNITYSDK_OFFSET(0x15ABAD00)
#define GMAGAHGCOFD_BJADBACAHPB_OFFSET UNITYSDK_OFFSET(0x15AB9470)
#define GMAGAHGCOFD_BJEPLKBCDLM_OFFSET UNITYSDK_OFFSET(0x15AB7490)
#define GMAGAHGCOFD_BKCBOIBCDJM_OFFSET UNITYSDK_OFFSET(0x15ABBA50)
#define GMAGAHGCOFD_CABFHICIMDP_OFFSET UNITYSDK_OFFSET(0x15AB83C0)
#define GMAGAHGCOFD_CEMFAKMFHLK_OFFSET UNITYSDK_OFFSET(0x15AB9C30)
#define GMAGAHGCOFD_CFOFIPLJALM_OFFSET UNITYSDK_OFFSET(0x15AB8ED0)
#define GMAGAHGCOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB6970)
#define GMAGAHGCOFD_DDHNCLBFLDB_OFFSET UNITYSDK_OFFSET(0x15ABA280)
#define GMAGAHGCOFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AB6B80)
#define GMAGAHGCOFD_DKDPLINEOIP_OFFSET UNITYSDK_OFFSET(0x15ABD500)
#define GMAGAHGCOFD_DOBGJLABEAO_OFFSET UNITYSDK_OFFSET(0x15AB7F50)
#define GMAGAHGCOFD_EGBILIMMMFD_OFFSET UNITYSDK_OFFSET(0x15ABC690)
#define GMAGAHGCOFD_EGHLLDKNIIF_OFFSET UNITYSDK_OFFSET(0x15ABA8B0)
#define GMAGAHGCOFD_EGIKOPILOEA_OFFSET UNITYSDK_OFFSET(0x15AB9020)
#define GMAGAHGCOFD_EIJCIBIEBAB_OFFSET UNITYSDK_OFFSET(0x15AB84C0)
#define GMAGAHGCOFD_ENFBHFPACNM_OFFSET UNITYSDK_OFFSET(0x15ABC930)
#define GMAGAHGCOFD_FBCDOINMFNG_OFFSET UNITYSDK_OFFSET(0x15ABA120)
#define GMAGAHGCOFD_GEBJHAIGEKC_OFFSET UNITYSDK_OFFSET(0x15AB91A0)
#define GMAGAHGCOFD_GENHMCLNGDF_OFFSET UNITYSDK_OFFSET(0x15ABBEF0)
#define GMAGAHGCOFD_GNPLNAEBNGL_OFFSET UNITYSDK_OFFSET(0x15ABA550)
#define GMAGAHGCOFD_GPDAOCJAIGE_OFFSET UNITYSDK_OFFSET(0x15ABB0B0)
#define GMAGAHGCOFD_HDIGNKIDEBH_OFFSET UNITYSDK_OFFSET(0x15ABA780)
#define GMAGAHGCOFD_HFILMNFGKDA_OFFSET UNITYSDK_OFFSET(0x15AB8600)
#define GMAGAHGCOFD_HOKOEJGCKEG_OFFSET UNITYSDK_OFFSET(0x15AB9300)
#define GMAGAHGCOFD_HPMIIHEDDAO_OFFSET UNITYSDK_OFFSET(0x15ABB000)
#define GMAGAHGCOFD_IAMBPBPDAIC_OFFSET UNITYSDK_OFFSET(0x15ABCD60)
#define GMAGAHGCOFD_IBCCNOKKECP_OFFSET UNITYSDK_OFFSET(0x15AB6D20)
#define GMAGAHGCOFD_ICNBMICDIEH_OFFSET UNITYSDK_OFFSET(0x15ABAE20)
#define GMAGAHGCOFD_IKFAGCBFPJJ_OFFSET UNITYSDK_OFFSET(0x15AB8920)
#define GMAGAHGCOFD_IMBMGBHNCDC_OFFSET UNITYSDK_OFFSET(0x15AB7610)
#define GMAGAHGCOFD_IMHBNLBHGLI_OFFSET UNITYSDK_OFFSET(0x15AB6C90)
#define GMAGAHGCOFD_JCCBNBBLABD_OFFSET UNITYSDK_OFFSET(0x15ABB6D0)
#define GMAGAHGCOFD_JHCCJPOFPKG_OFFSET UNITYSDK_OFFSET(0x15ABA6A0)
#define GMAGAHGCOFD_JJGGPEGAGJO_OFFSET UNITYSDK_OFFSET(0x15ABC360)
#define GMAGAHGCOFD_JKPBOGAEKKM_OFFSET UNITYSDK_OFFSET(0x15AB8130)
#define GMAGAHGCOFD_KDOHNACJFMG_OFFSET UNITYSDK_OFFSET(0x15ABB580)
#define GMAGAHGCOFD_LCGMFDFJNIF_OFFSET UNITYSDK_OFFSET(0x15ABB640)
#define GMAGAHGCOFD_LFGNLMGHHLI_1_OFFSET UNITYSDK_OFFSET(0x15ABBC20)
#define GMAGAHGCOFD_LFGNLMGHHLI_OFFSET UNITYSDK_OFFSET(0x15ABBBB0)
#define GMAGAHGCOFD_LIPPLKNPNAL_OFFSET UNITYSDK_OFFSET(0x15AB7A80)
#define GMAGAHGCOFD_LKJMMPECCBN_OFFSET UNITYSDK_OFFSET(0x15ABB380)
#define GMAGAHGCOFD_LNOKAEMEAKK_OFFSET UNITYSDK_OFFSET(0x15AB7050)
#define GMAGAHGCOFD_MCDCDNIFNOE_OFFSET UNITYSDK_OFFSET(0x15AB76D0)
#define GMAGAHGCOFD_NAALBKPJFKB_OFFSET UNITYSDK_OFFSET(0x15ABB260)
#define GMAGAHGCOFD_NCGDOMCPLBC_OFFSET UNITYSDK_OFFSET(0x15AB7550)
#define GMAGAHGCOFD_NFDKEIFGOJA_OFFSET UNITYSDK_OFFSET(0x15AB8CC0)
#define GMAGAHGCOFD_NLCNAMPKDNG_OFFSET UNITYSDK_OFFSET(0x15ABC130)
#define GMAGAHGCOFD_NLLKIJHIDAC_OFFSET UNITYSDK_OFFSET(0x15AB9790)
#define GMAGAHGCOFD_OBLMBBMGFNE_OFFSET UNITYSDK_OFFSET(0x15ABA5C0)
#define GMAGAHGCOFD_OGLEMDIGDDH_OFFSET UNITYSDK_OFFSET(0x15AB98F0)
#define GMAGAHGCOFD_OKBGEPGPAJG_OFFSET UNITYSDK_OFFSET(0x15AB9AF0)
#define GMAGAHGCOFD_OLFPBMOBFGH_OFFSET UNITYSDK_OFFSET(0x15AB6E30)
#define GMAGAHGCOFD_ONNMPKKFDNJ_OFFSET UNITYSDK_OFFSET(0x15ABB930)
#define GMAGAHGCOFD_PCNJDCKKDMJ_OFFSET UNITYSDK_OFFSET(0x15AB6F40)
#define GMAGAHGCOFD_PGEDFNLLFLH_OFFSET UNITYSDK_OFFSET(0x15ABD6E0)
#define GMAGAHGCOFD_PHEMNJKGMDD_OFFSET UNITYSDK_OFFSET(0x15ABB800)
#define GMAGAHGCOFD_PIJCPLKLCNB_OFFSET UNITYSDK_OFFSET(0x15ABD360)
#define GMAGAHGCOFD_PMFEAMMKFJB_OFFSET UNITYSDK_OFFSET(0x15ABAC40)
#define GMAGAHGCOFD_PMGKNBDBJGK_OFFSET UNITYSDK_OFFSET(0x15AB7790)
#define GMAGAHGCOFD_PMJMPDLKKFA_OFFSET UNITYSDK_OFFSET(0x15ABBE60)
#define GMAGAHGCOFD_PPLMPHOGGKL_OFFSET UNITYSDK_OFFSET(0x15AB8420)

inline static constexpr unsigned int GMAGAHGCOFD_TypeDefinitionIndex = 75911;

	class GMAGAHGCOFD : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* FKINCGODJEP; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* MJOPLOKPMJB; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* OLBDHAKIOGJ; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::OIMEGOHPNFI*>* AHCAEBBFPMD; // 0x28
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x30
		// static const ::System::String* GJCPFMNCEEE; // 0x0
		// static const ::System::String* GNOJIGEELJK; // 0x0
		// static const ::System::String* BDGPJEPHCDE; // 0x0
		// static const ::System::String* EDDEDBGBLPH; // 0x0
		// static const ::System::String* GHPPNEKLBPP; // 0x0
		// static const ::System::String* KGEANFIBLFF; // 0x0
		// static const ::System::String* HEFIAEECMJO; // 0x0
		// static const ::System::String* DKMFCPFJEAE; // 0x0
		// static const ::System::Object KAPKKBNCHKB; // 0x0
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IMHBNLBHGLI(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_IMHBNLBHGLI_OFFSET))(this, a1);
		}

		::System::Void IBCCNOKKECP(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_IBCCNOKKECP_OFFSET))(this, a1);
		}

		::System::Void OLFPBMOBFGH(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_OLFPBMOBFGH_OFFSET))(this, a1);
		}

		::System::Void PCNJDCKKDMJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PCNJDCKKDMJ_OFFSET))(this, a1);
		}

		::System::Single LNOKAEMEAKK(::System::Single a1, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Collections::Generic::SortedSet_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LNOKAEMEAKK_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* BJEPLKBCDLM(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_BJEPLKBCDLM_OFFSET))(this, a1);
		}

		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* NCGDOMCPLBC(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_NCGDOMCPLBC_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* IMBMGBHNCDC(::GHMGGIHEHJE* a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_IMBMGBHNCDC_OFFSET))(this, a1);
		}

		::GHMGGIHEHJE* MCDCDNIFNOE(::GHMGGIHEHJE* a1)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_MCDCDNIFNOE_OFFSET))(this, a1);
		}

		::System::Boolean PMGKNBDBJGK(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PMGKNBDBJGK_OFFSET))(this, a1);
		}

		::System::Boolean DOBGJLABEAO(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_Slam* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_DOBGJLABEAO_OFFSET))(this, a1, a2);
		}

		::System::Boolean AGJKNPMFCMB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_AGJKNPMFCMB_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRashGameAbility_SlamParams* NFDKEIFGOJA(::GHMGGIHEHJE* a1, ::RPG::Client::RoadRashGameAbility_Slam* a2)
		{
			return ((::RPG::Client::RoadRashGameAbility_SlamParams*(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_NFDKEIFGOJA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RoadRashGameAbility_Slam* APGFEANJGHH(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRashGameAbility_Slam*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_APGFEANJGHH_OFFSET))(this, a1);
		}

		::System::Boolean CFOFIPLJALM(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_CFOFIPLJALM_OFFSET))(this, a1);
		}

		::System::Boolean GEBJHAIGEKC(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_GEBJHAIGEKC_OFFSET))(this, a1);
		}

		::System::Boolean HOKOEJGCKEG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_HOKOEJGCKEG_OFFSET))(this, a1);
		}

		::System::Boolean BJADBACAHPB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_BJADBACAHPB_OFFSET))(this, a1);
		}

		::System::Void CEMFAKMFHLK(::GHMGGIHEHJE* a1, ::MFIMCKDKDKG* a2, ::HJJAAKKPEPP* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::MFIMCKDKDKG*, ::HJJAAKKPEPP*, ::System::Int32))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_CEMFAKMFHLK_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::RoadRashGameAbility_FireProjectile* FBCDOINMFNG(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRashGameAbility_FireProjectile*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_FBCDOINMFNG_OFFSET))(this, a1);
		}

		::RPG::Client::RoadRashGameAbility_FireProjectileCast* NLLKIJHIDAC(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRashGameAbility_FireProjectileCast*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_NLLKIJHIDAC_OFFSET))(this, a1);
		}

		::System::Boolean DDHNCLBFLDB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_DDHNCLBFLDB_OFFSET))(this, a1);
		}

		::System::Boolean BFAHPOGHLPL(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_BFAHPOGHLPL_OFFSET))(this, a1);
		}

		::System::Boolean GNPLNAEBNGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_GNPLNAEBNGL_OFFSET))(this);
		}

		::System::Void EGHLLDKNIIF(::GHMGGIHEHJE* a1, ::CNCNFGFMKLN* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::CNCNFGFMKLN*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_EGHLLDKNIIF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LIPPLKNPNAL(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LIPPLKNPNAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKJMMPECCBN(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LKJMMPECCBN_OFFSET))(this, a1);
		}

		::System::Single LCGMFDFJNIF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LCGMFDFJNIF_OFFSET))(this, a1);
		}

		::System::Void PMFEAMMKFJB(::GHMGGIHEHJE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PMFEAMMKFJB_OFFSET))(this, a1, a2);
		}

		::System::Boolean EIJCIBIEBAB(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_EIJCIBIEBAB_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean HPMIIHEDDAO(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_HPMIIHEDDAO_OFFSET))(a1);
		}

		static ::RPG::Client::RoadRashGameAbility_Ultimate* JHCCJPOFPKG(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRashGameAbility_Ultimate*(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_JHCCJPOFPKG_OFFSET))(a1);
		}

		static ::RPG::Client::RoadRashGameAbility_UltimateV2* OBLMBBMGFNE(::GHMGGIHEHJE* a1)
		{
			return ((::RPG::Client::RoadRashGameAbility_UltimateV2*(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_OBLMBBMGFNE_OFFSET))(a1);
		}

		::System::Boolean NAALBKPJFKB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_NAALBKPJFKB_OFFSET))(this, a1);
		}

		::System::Void OKBGEPGPAJG(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_OKBGEPGPAJG_OFFSET))(this, a1, a2);
		}

		::System::Void JCCBNBBLABD(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_JCCBNBBLABD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GPDAOCJAIGE(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_GPDAOCJAIGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean PHEMNJKGMDD(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PHEMNJKGMDD_OFFSET))(this, a1, a2);
		}

		::System::Single ABANMDBFJBH(::GHMGGIHEHJE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ABANMDBFJBH_OFFSET))(this, a1);
		}

		::System::Void HDIGNKIDEBH(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_HDIGNKIDEBH_OFFSET))(this, a1, a2);
		}

		::System::Void ONNMPKKFDNJ(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ONNMPKKFDNJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDOHNACJFMG(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_KDOHNACJFMG_OFFSET))(this, a1);
		}

		::System::Boolean IKFAGCBFPJJ(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_IKFAGCBFPJJ_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RoadRashGameModifierConfig* BKCBOIBCDJM(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::RoadRashGameModifierConfig*(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_BKCBOIBCDJM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LFGNLMGHHLI(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LFGNLMGHHLI_OFFSET))(this, a1, a2);
		}

		::System::Boolean LFGNLMGHHLI_1(::GHMGGIHEHJE* a1, ::RPG::GameCore::RoadRashGameModifierConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_LFGNLMGHHLI_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GENHMCLNGDF(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_GENHMCLNGDF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JKPBOGAEKKM(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_JKPBOGAEKKM_OFFSET))(this, a1, a2);
		}

		::System::Void AHDLCAJDBPD(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_AHDLCAJDBPD_OFFSET))(this, a1, a2);
		}

		::System::Void EGBILIMMMFD(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_EGBILIMMMFD_OFFSET))(this, a1);
		}

		::System::Void PPLMPHOGGKL(::GHMGGIHEHJE* a1, ::System::String* a2, ::CNCNFGFMKLN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::CNCNFGFMKLN*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PPLMPHOGGKL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ENFBHFPACNM(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ENFBHFPACNM_OFFSET))(this, a1, a2);
		}

		::System::Void CABFHICIMDP(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_CABFHICIMDP_OFFSET))(this, a1);
		}

		::System::Void EGIKOPILOEA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_EGIKOPILOEA_OFFSET))(this, a1);
		}

		::System::Void HFILMNFGKDA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_HFILMNFGKDA_OFFSET))(this, a1);
		}

		::System::Void IAMBPBPDAIC(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_IAMBPBPDAIC_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint PIJCPLKLCNB(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PIJCPLKLCNB_OFFSET))(this, a1, a2);
		}

		::System::Void OGLEMDIGDDH(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_OGLEMDIGDDH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AGPAELAPKNE(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_AGPAELAPKNE_OFFSET))(this, a1, a2);
		}

		::MFIMCKDKDKG* DKDPLINEOIP(::GHMGGIHEHJE* a1)
		{
			return ((::MFIMCKDKDKG*(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_DKDPLINEOIP_OFFSET))(this, a1);
		}

		::System::Boolean PMJMPDLKKFA(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::RoadRashGameModifierConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PMJMPDLKKFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NLCNAMPKDNG(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::LittleGameAbilityConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::LittleGameAbilityConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_NLCNAMPKDNG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JJGGPEGAGJO(::GHMGGIHEHJE* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_JJGGPEGAGJO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LittleGameAbilityConfig* ADHLCCEPNBD(::RPG::GameCore::RoadRashGameModifierConfig* a1)
		{
			return ((::RPG::GameCore::LittleGameAbilityConfig*(*)(::PVOID, ::RPG::GameCore::RoadRashGameModifierConfig*))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ADHLCCEPNBD_OFFSET))(this, a1);
		}

		::System::Boolean ICNBMICDIEH(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::LittleGameAbilityConfig* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::LittleGameAbilityConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_ICNBMICDIEH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::GHMGGIHEHJE* PGEDFNLLFLH(::GHMGGIHEHJE* a1, ::System::String* a2, ::RPG::GameCore::LittleGameAbilityConfig* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4, ::System::Boolean a5)
		{
			return ((::GHMGGIHEHJE*(*)(::PVOID, ::GHMGGIHEHJE*, ::System::String*, ::RPG::GameCore::LittleGameAbilityConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAGAHGCOFD_PGEDFNLLFLH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
