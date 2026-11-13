#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGNFBMGBDGM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
class CBPHAOJJAMH;
class CPCJHAMKGKC;
class FNINJACLJOH;
class JKEELPBJAPG;
class KELOBMCFHAI;
class LOKOIPOFAHC;
class MJNGFEGNCOA;
class NEOCEOCDEAF;
class OJBMEJCOGID;
class PLODAOIFEJA;
namespace RPG::Client { class MockAnimator; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }
namespace UnityEngine { class Animator; }

#define FJNBODHINDM_AAODBMLHMAC_OFFSET UNITYSDK_OFFSET(0x1AA881D0)
#define FJNBODHINDM_AGLJAHOBLIO_OFFSET UNITYSDK_OFFSET(0x1AA89490)
#define FJNBODHINDM_AKLCDJMBLLK_OFFSET UNITYSDK_OFFSET(0x1AA89DC0)
#define FJNBODHINDM_ANCBCELJOLL_OFFSET UNITYSDK_OFFSET(0x1AA8A470)
#define FJNBODHINDM_BFJEDPMDHLN_OFFSET UNITYSDK_OFFSET(0x1AA8AA10)
#define FJNBODHINDM_CGLANDLDANA_OFFSET UNITYSDK_OFFSET(0x1AA880A0)
#define FJNBODHINDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8B5B0)
#define FJNBODHINDM_DIGFOGNOBKI_OFFSET UNITYSDK_OFFSET(0x1AA88680)
#define FJNBODHINDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA8B230)
#define FJNBODHINDM_DKKJNPPHDPM_1_OFFSET UNITYSDK_OFFSET(0x1AA86DC0)
#define FJNBODHINDM_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0x1AA86ED0)
#define FJNBODHINDM_DMKKLGOIKHO_OFFSET UNITYSDK_OFFSET(0x1AA88AD0)
#define FJNBODHINDM_ELLCJBGJLIC_OFFSET UNITYSDK_OFFSET(0x1AA89440)
#define FJNBODHINDM_EOGOIGBMFFB_OFFSET UNITYSDK_OFFSET(0x1AA899A0)
#define FJNBODHINDM_EOJILPMGHEB_1_OFFSET UNITYSDK_OFFSET(0x1AA869F0)
#define FJNBODHINDM_EOJILPMGHEB_OFFSET UNITYSDK_OFFSET(0x1AA88270)
#define FJNBODHINDM_FCPHOILLMPM_OFFSET UNITYSDK_OFFSET(0x1AA89070)
#define FJNBODHINDM_FFBNBJMDLPM_OFFSET UNITYSDK_OFFSET(0x1AA8A500)
#define FJNBODHINDM_FLJMHDGKOLJ_OFFSET UNITYSDK_OFFSET(0x1AA892C0)
#define FJNBODHINDM_GBBPJHLPGMI_OFFSET UNITYSDK_OFFSET(0x1AA8AD80)
#define FJNBODHINDM_GCPBPEHDFDE_OFFSET UNITYSDK_OFFSET(0x1AA89FA0)
#define FJNBODHINDM_GETUNEVALUATEDNEXTSTATE_OFFSET UNITYSDK_OFFSET(0x1AA89CA0)
#define FJNBODHINDM_GETUNITYANIMATOR_OFFSET UNITYSDK_OFFSET(0x1AA89D30)
#define FJNBODHINDM_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1AA89DA0)
#define FJNBODHINDM_GLHGPLOIGDF_OFFSET UNITYSDK_OFFSET(0x1AA8A240)
#define FJNBODHINDM_GNOIDBBLACO_1_OFFSET UNITYSDK_OFFSET(0x1AA88500)
#define FJNBODHINDM_GNOIDBBLACO_OFFSET UNITYSDK_OFFSET(0x1AA883A0)
#define FJNBODHINDM_HCBDNAKAOGN_OFFSET UNITYSDK_OFFSET(0x1AA862A0)
#define FJNBODHINDM_HDEJAGHKCFE_OFFSET UNITYSDK_OFFSET(0x1AA87D60)
#define FJNBODHINDM_HNPLAANLIFP_OFFSET UNITYSDK_OFFSET(0x1AA871B0)
#define FJNBODHINDM_HOOJOPPKHHD_1_OFFSET UNITYSDK_OFFSET(0x1AA879A0)
#define FJNBODHINDM_HOOJOPPKHHD_OFFSET UNITYSDK_OFFSET(0x1AA878F0)
#define FJNBODHINDM_HPIECKBDOFI_OFFSET UNITYSDK_OFFSET(0x1AA892B0)
#define FJNBODHINDM_IBCFGBOGPDF_OFFSET UNITYSDK_OFFSET(0x1AA86950)
#define FJNBODHINDM_ICDIHDGHMLK_OFFSET UNITYSDK_OFFSET(0x1AA88780)
#define FJNBODHINDM_IDBFCCBCNMB_OFFSET UNITYSDK_OFFSET(0x1AA86350)
#define FJNBODHINDM_JACAKCOBJBO_OFFSET UNITYSDK_OFFSET(0x1AA8A0D0)
#define FJNBODHINDM_JEHAJNGHHDF_OFFSET UNITYSDK_OFFSET(0x1AA88310)
#define FJNBODHINDM_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x1AA8B450)
#define FJNBODHINDM_JPLJDCNKHBB_OFFSET UNITYSDK_OFFSET(0x1AA8B590)
#define FJNBODHINDM_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x1AA8B340)
#define FJNBODHINDM_KDKCMPALIML_OFFSET UNITYSDK_OFFSET(0x1AA87320)
#define FJNBODHINDM_KGCDMFLPKAC_OFFSET UNITYSDK_OFFSET(0x1AA86740)
#define FJNBODHINDM_KINBCDEIBPP_OFFSET UNITYSDK_OFFSET(0x1AA89D90)
#define FJNBODHINDM_KPIKDPHHEHE_OFFSET UNITYSDK_OFFSET(0x1AA89230)
#define FJNBODHINDM_LMCEDCHJKFF_1_OFFSET UNITYSDK_OFFSET(0x1AA8AE50)
#define FJNBODHINDM_LMFILBPIJAL_OFFSET UNITYSDK_OFFSET(0x1AA89F40)
#define FJNBODHINDM_LNCGANJEPNK_OFFSET UNITYSDK_OFFSET(0x1AA89220)
#define FJNBODHINDM_LOLDHFNNNMP_1_OFFSET UNITYSDK_OFFSET(0x1AA87090)
#define FJNBODHINDM_LOLDHFNNNMP_OFFSET UNITYSDK_OFFSET(0x1AA86F80)
#define FJNBODHINDM_MGOBELLGHOG_OFFSET UNITYSDK_OFFSET(0x1AA8A350)
#define FJNBODHINDM_MNGIEGBICGO_OFFSET UNITYSDK_OFFSET(0x1AA85F80)
#define FJNBODHINDM_MNICNFFABOP_OFFSET UNITYSDK_OFFSET(0x1AA86A80)
#define FJNBODHINDM_MOAHHGJJLBE_OFFSET UNITYSDK_OFFSET(0x1AA89150)
#define FJNBODHINDM_NDGNOOIPBEL_OFFSET UNITYSDK_OFFSET(0x1AA890E0)
#define FJNBODHINDM_NHIPMMDOCFO_OFFSET UNITYSDK_OFFSET(0x1AA86C90)
#define FJNBODHINDM_NJDKDHIBHMO_OFFSET UNITYSDK_OFFSET(0x1AA88950)
#define FJNBODHINDM_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0x1AA8B4C0)
#define FJNBODHINDM_NNAODIHHIND_OFFSET UNITYSDK_OFFSET(0x1AA89100)
#define FJNBODHINDM_OACDJNIMEGK_OFFSET UNITYSDK_OFFSET(0x1AA87DD0)
#define FJNBODHINDM_OEALEKAMLCO_OFFSET UNITYSDK_OFFSET(0x1AA86080)
#define FJNBODHINDM_ONHAGIFFKDB_OFFSET UNITYSDK_OFFSET(0x1AA86130)
#define FJNBODHINDM_OPMAHKPEOAC_OFFSET UNITYSDK_OFFSET(0x1AA890F0)
#define FJNBODHINDM_PDCBOAPHCOE_OFFSET UNITYSDK_OFFSET(0x1AA8B5A0)
#define FJNBODHINDM_PKHJHENGJLL_OFFSET UNITYSDK_OFFSET(0x1AA87D10)
#define FJNBODHINDM_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET UNITYSDK_OFFSET(0x1AA89CE0)
#define FJNBODHINDM_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1AA89DB0)
#define FJNBODHINDM_TICK_OFFSET UNITYSDK_OFFSET(0x1AA89C30)
#define FJNBODHINDM__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x1AA8AD90)

inline static constexpr unsigned int FJNBODHINDM_TypeDefinitionIndex = 55129;

	class FJNBODHINDM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::JGNFBMGBDGM>* OOBEIJPEBHJ; // 0x18
		::CPCJHAMKGKC* HJCGFLELJFN; // 0x20
		::System::Collections::Generic::List_1<::JKEELPBJAPG*>* PHBOMHANOOM; // 0x28
		::System::Collections::Generic::List_1<::CPCJHAMKGKC*>* OCHMMHHIFOK; // 0x30
		::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* CDLDNEGOPDL; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NEOCEOCDEAF*>* INMNMAPFKFJ; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::FixPoint>* AFFCIMCMGHC; // 0x48
		::CPCJHAMKGKC* KANKPNDCABI; // 0x50
		::OJBMEJCOGID* LNLOEIICNMO; // 0x58
		::System::Collections::Generic::List_1<::PLODAOIFEJA*>* DEHHKHNEMKE; // 0x60
		::CBPHAOJJAMH* DOCELMKGNMO; // 0x68
		::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* LABGNEFLMFA; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GCJJPFNPGCF; // 0x78
		::LOKOIPOFAHC* IJLEOHJJHCM; // 0x80
		::RPG::Client::MockAnimator* JDFCDMAPBFJ; // 0x88
		::RPG::GameCore::FixPoint PIKJLANGEJA; // 0x90
		::RPG::GameCore::FixPoint CMKOMADBPCO; // 0x98
		::System::UInt32 NMKKPECEOFL; // 0xA0
		::System::UInt32 MPKJHAPCKIA; // 0xA4
		::RPG::GameCore::FixPoint FBKHFCLBJKP; // 0xA8
		::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0xB0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PEAMDJMFLCA; // 0xB8
		::System::Boolean MEDDNKNNHKF; // 0xC0
		::System::Byte _padding1[0x3];
		::System::Int32 LOLMMLGCHAM; // 0xC4
		static ::Il2CppArray<::System::Int32>** StaticGet_DCFFNFKEEAH()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "FJNBODHINDM")->GetStaticField(0x65FE0);
		}

		static ::System::Collections::Generic::SortedSet_1<::System::Int32>** StaticGet_JLBJJOCBMGC()
		{
			return (::System::Collections::Generic::SortedSet_1<::System::Int32>**)UnitySDK::FromName("", "FJNBODHINDM")->GetStaticField(0x65FE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_CTOR_OFFSET))(this);
		}

		::System::Void MNGIEGBICGO(::JKEELPBJAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEELPBJAPG*))((::PBYTE)hIl2Cpp + FJNBODHINDM_MNGIEGBICGO_OFFSET))(this, a1);
		}

		::System::Void OEALEKAMLCO(::JKEELPBJAPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEELPBJAPG*))((::PBYTE)hIl2Cpp + FJNBODHINDM_OEALEKAMLCO_OFFSET))(this, a1);
		}

		::System::Void ONHAGIFFKDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_ONHAGIFFKDB_OFFSET))(this);
		}

		::System::Void HCBDNAKAOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_HCBDNAKAOGN_OFFSET))(this);
		}

		::System::Void KGCDMFLPKAC(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_KGCDMFLPKAC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHIPMMDOCFO(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_NHIPMMDOCFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DKKJNPPHDPM(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_DKKJNPPHDPM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DKKJNPPHDPM_1(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_DKKJNPPHDPM_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LOLDHFNNNMP(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::System::Single a4, ::CPCJHAMKGKC* a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::System::Single, ::CPCJHAMKGKC*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_LOLDHFNNNMP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LOLDHFNNNMP_1(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::CPCJHAMKGKC* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::CPCJHAMKGKC*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_LOLDHFNNNMP_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HNPLAANLIFP(::System::Int32 a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FJNBODHINDM_HNPLAANLIFP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KDKCMPALIML(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_KDKCMPALIML_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void HOOJOPPKHHD(::System::Int32 a1, ::System::Boolean a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_HOOJOPPKHHD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HOOJOPPKHHD_1(::System::Int32 a1, ::System::Boolean a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_HOOJOPPKHHD_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 PKHJHENGJLL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_PKHJHENGJLL_OFFSET))(this);
		}

		::System::Void HDEJAGHKCFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_HDEJAGHKCFE_OFFSET))(this);
		}

		::System::Void IDBFCCBCNMB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FJNBODHINDM_IDBFCCBCNMB_OFFSET))(this, a1);
		}

		::System::Int32 IBCFGBOGPDF(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJNBODHINDM_IBCFGBOGPDF_OFFSET))(this, a1);
		}

		::System::Void CGLANDLDANA(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FJNBODHINDM_CGLANDLDANA_OFFSET))(this, a1);
		}

		::System::Void AAODBMLHMAC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FJNBODHINDM_AAODBMLHMAC_OFFSET))(this, a1);
		}

		::System::Boolean EOJILPMGHEB(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FJNBODHINDM_EOJILPMGHEB_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint EOJILPMGHEB_1(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJNBODHINDM_EOJILPMGHEB_1_OFFSET))(this, a1);
		}

		::System::Boolean JEHAJNGHHDF(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FJNBODHINDM_JEHAJNGHHDF_OFFSET))(this, a1, a2);
		}

		::System::Void MNICNFFABOP(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + FJNBODHINDM_MNICNFFABOP_OFFSET))(this, a1);
		}

		::System::Boolean GNOIDBBLACO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJNBODHINDM_GNOIDBBLACO_OFFSET))(this, a1);
		}

		::System::Boolean GNOIDBBLACO_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJNBODHINDM_GNOIDBBLACO_1_OFFSET))(this, a1);
		}

		::System::Void DIGFOGNOBKI(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FJNBODHINDM_DIGFOGNOBKI_OFFSET))(this, a1);
		}

		::System::Void ICDIHDGHMLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_ICDIHDGHMLK_OFFSET))(this);
		}

		::System::Void OACDJNIMEGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_OACDJNIMEGK_OFFSET))(this);
		}

		static ::System::Void NJDKDHIBHMO(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FJNBODHINDM_NJDKDHIBHMO_OFFSET))(a1, a2);
		}

		static ::System::Void DMKKLGOIKHO(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FJNBODHINDM_DMKKLGOIKHO_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint FCPHOILLMPM()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_FCPHOILLMPM_OFFSET))(this);
		}

		::System::Int32 NDGNOOIPBEL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_NDGNOOIPBEL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OPMAHKPEOAC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_OPMAHKPEOAC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NNAODIHHIND()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_NNAODIHHIND_OFFSET))(this);
		}

		::System::Boolean MOAHHGJJLBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_MOAHHGJJLBE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LNCGANJEPNK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_LNCGANJEPNK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KPIKDPHHEHE()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_KPIKDPHHEHE_OFFSET))(this);
		}

		::System::UInt32 HPIECKBDOFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_HPIECKBDOFI_OFFSET))(this);
		}

		::System::Void FLJMHDGKOLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_FLJMHDGKOLJ_OFFSET))(this);
		}

		::System::Void ELLCJBGJLIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_ELLCJBGJLIC_OFFSET))(this);
		}

		::System::Void AGLJAHOBLIO(::System::String* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FJNBODHINDM_AGLJAHOBLIO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EOGOIGBMFFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJNBODHINDM_EOGOIGBMFFB_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJNBODHINDM_TICK_OFFSET))(this, a1);
		}

		::System::Int32 GetUnevaluatedNextState()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_GETUNEVALUATEDNEXTSTATE_OFFSET))(this);
		}

		::System::Single QueryStateNoramlizedStartTime(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJNBODHINDM_QUERYSTATENORAMLIZEDSTARTTIME_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* GetUnityAnimator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_GETUNITYANIMATOR_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* KINBCDEIBPP()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_KINBCDEIBPP_OFFSET))(this);
		}

		::System::Int32 get_HitAdditiveLayerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
		}

		::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJNBODHINDM_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
		}

		::System::Void AKLCDJMBLLK(::CPCJHAMKGKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + FJNBODHINDM_AKLCDJMBLLK_OFFSET))(this, a1);
		}

		::System::Void GCPBPEHDFDE(::CPCJHAMKGKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + FJNBODHINDM_GCPBPEHDFDE_OFFSET))(this, a1);
		}

		::System::Void GLHGPLOIGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_GLHGPLOIGDF_OFFSET))(this);
		}

		::System::Void MGOBELLGHOG(::PLODAOIFEJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLODAOIFEJA*))((::PBYTE)hIl2Cpp + FJNBODHINDM_MGOBELLGHOG_OFFSET))(this, a1);
		}

		::System::Void ANCBCELJOLL(::PLODAOIFEJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLODAOIFEJA*))((::PBYTE)hIl2Cpp + FJNBODHINDM_ANCBCELJOLL_OFFSET))(this, a1);
		}

		::System::Void JACAKCOBJBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_JACAKCOBJBO_OFFSET))(this);
		}

		::System::Void LMFILBPIJAL(::CPCJHAMKGKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + FJNBODHINDM_LMFILBPIJAL_OFFSET))(this, a1);
		}

		::System::Void FFBNBJMDLPM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJNBODHINDM_FFBNBJMDLPM_OFFSET))(this, a1);
		}

		::System::Void BFJEDPMDHLN(::CPCJHAMKGKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + FJNBODHINDM_BFJEDPMDHLN_OFFSET))(this, a1);
		}

		::CPCJHAMKGKC* GBBPJHLPGMI()
		{
			return ((::CPCJHAMKGKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_GBBPJHLPGMI_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF_1(::KELOBMCFHAI* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KELOBMCFHAI*, ::System::Object*))((::PBYTE)hIl2Cpp + FJNBODHINDM_LMCEDCHJKFF_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_DISPOSE_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + FJNBODHINDM_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void JIFPPKNBGMH(::RPG::GameCore::RtCharacterState a1, ::FNINJACLJOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + FJNBODHINDM_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RtCharacterState NJDMJODMLFF()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_NJDMJODMLFF_OFFSET))(this);
		}

		::OJBMEJCOGID* JPLJDCNKHBB()
		{
			return ((::OJBMEJCOGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_JPLJDCNKHBB_OFFSET))(this);
		}

		::LOKOIPOFAHC* PDCBOAPHCOE()
		{
			return ((::LOKOIPOFAHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNBODHINDM_PDCBOAPHCOE_OFFSET))(this);
		}

	};
