#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLLLACFEBJF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/EPIDGNEOKGM.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC;
class ANOKJGCCGAO;
class DMOHECEJHAB;
class EJHHPFFPFOJ;
class IECDFLHPLOE;
class NAIIOGFMJAN;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKFCOMPHBLJ_ANMNJPAHCAF_ABFNHGPJKFL_OFFSET UNITYSDK_OFFSET(0x142233F0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_AJBKLFEKKFB_OFFSET UNITYSDK_OFFSET(0x14222230)
#define AKFCOMPHBLJ_ANMNJPAHCAF_APBKKCKNNIE_OFFSET UNITYSDK_OFFSET(0x14220210)
#define AKFCOMPHBLJ_ANMNJPAHCAF_APIAPJGBKLN_OFFSET UNITYSDK_OFFSET(0x14221180)
#define AKFCOMPHBLJ_ANMNJPAHCAF_APMFLFFLBDL_OFFSET UNITYSDK_OFFSET(0x14220B10)
#define AKFCOMPHBLJ_ANMNJPAHCAF_BCDMHJLHPIC_OFFSET UNITYSDK_OFFSET(0x14220990)
#define AKFCOMPHBLJ_ANMNJPAHCAF_BDJGADFANPG_OFFSET UNITYSDK_OFFSET(0x1421DB80)
#define AKFCOMPHBLJ_ANMNJPAHCAF_BFENNMNJNNN_OFFSET UNITYSDK_OFFSET(0x142218B0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_BNOHCPICCIN_OFFSET UNITYSDK_OFFSET(0x1421CB20)
#define AKFCOMPHBLJ_ANMNJPAHCAF_BPPFEKIHGEI_OFFSET UNITYSDK_OFFSET(0x1421FD20)
#define AKFCOMPHBLJ_ANMNJPAHCAF_DIMCMOGJGAB_OFFSET UNITYSDK_OFFSET(0x1421C110)
#define AKFCOMPHBLJ_ANMNJPAHCAF_DMDAMNLKBON_OFFSET UNITYSDK_OFFSET(0x142208E0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_DPOCPALAKGC_OFFSET UNITYSDK_OFFSET(0x1421F480)
#define AKFCOMPHBLJ_ANMNJPAHCAF_EBAIOCLLFJD_OFFSET UNITYSDK_OFFSET(0x1421C300)
#define AKFCOMPHBLJ_ANMNJPAHCAF_EHEMPKAGILC_OFFSET UNITYSDK_OFFSET(0x142205D0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_EJADCKNPIJI_OFFSET UNITYSDK_OFFSET(0x1421DDF0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_EKKKALCHBIH_OFFSET UNITYSDK_OFFSET(0x1421C880)
#define AKFCOMPHBLJ_ANMNJPAHCAF_FAHGFNMKHCI_OFFSET UNITYSDK_OFFSET(0x1421B300)
#define AKFCOMPHBLJ_ANMNJPAHCAF_FCJPDBHDPCG_OFFSET UNITYSDK_OFFSET(0x14223090)
#define AKFCOMPHBLJ_ANMNJPAHCAF_FFOLMHGJKPJ_OFFSET UNITYSDK_OFFSET(0x1421B210)
#define AKFCOMPHBLJ_ANMNJPAHCAF_GAMONPLLMPP_OFFSET UNITYSDK_OFFSET(0x14222700)
#define AKFCOMPHBLJ_ANMNJPAHCAF_GGGNKOPPAOF_OFFSET UNITYSDK_OFFSET(0x1421CD00)
#define AKFCOMPHBLJ_ANMNJPAHCAF_GNIGPGCEBCF_OFFSET UNITYSDK_OFFSET(0x1421F400)
#define AKFCOMPHBLJ_ANMNJPAHCAF_HHOFAPDLHED_OFFSET UNITYSDK_OFFSET(0x14222780)
#define AKFCOMPHBLJ_ANMNJPAHCAF_HKLKGCDIGPE_OFFSET UNITYSDK_OFFSET(0x14220650)
#define AKFCOMPHBLJ_ANMNJPAHCAF_HMHENPNKGFO_OFFSET UNITYSDK_OFFSET(0x1421D030)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IDCOKDFBBEB_OFFSET UNITYSDK_OFFSET(0x14220BB0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IEOKPAIDDPI_OFFSET UNITYSDK_OFFSET(0x142203B0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_1_OFFSET UNITYSDK_OFFSET(0x14220820)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_2_OFFSET UNITYSDK_OFFSET(0x1421BE00)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_OFFSET UNITYSDK_OFFSET(0x1421BD00)
#define AKFCOMPHBLJ_ANMNJPAHCAF_IJHPIGABKFN_OFFSET UNITYSDK_OFFSET(0x14220760)
#define AKFCOMPHBLJ_ANMNJPAHCAF_JIFHPJJFHJL_OFFSET UNITYSDK_OFFSET(0x1421B090)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KBNPOFAJAAP_OFFSET UNITYSDK_OFFSET(0x1421F810)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KGJMHGLDELN_1_OFFSET UNITYSDK_OFFSET(0x1421C040)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KGJMHGLDELN_OFFSET UNITYSDK_OFFSET(0x1421BFE0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KJBHIJHDCEC_OFFSET UNITYSDK_OFFSET(0x14221ED0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KLDDBFCKLIF_OFFSET UNITYSDK_OFFSET(0x14221840)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KNFFOCJJGAL_OFFSET UNITYSDK_OFFSET(0x1421B960)
#define AKFCOMPHBLJ_ANMNJPAHCAF_KOLKMDJKAJH_OFFSET UNITYSDK_OFFSET(0x14221760)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LCFAHPAPBFO_1_OFFSET UNITYSDK_OFFSET(0x14223260)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LCFAHPAPBFO_OFFSET UNITYSDK_OFFSET(0x14223210)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LCJPBPOKNAM_1_OFFSET UNITYSDK_OFFSET(0x1421E350)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LCJPBPOKNAM_OFFSET UNITYSDK_OFFSET(0x1421E250)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LEMGPMLADFE_OFFSET UNITYSDK_OFFSET(0x1421C6E0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LLPEPMOPJEJ_OFFSET UNITYSDK_OFFSET(0x1421F700)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LMALJEBAJMK_1_OFFSET UNITYSDK_OFFSET(0x1421CEE0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LMALJEBAJMK_OFFSET UNITYSDK_OFFSET(0x1421CE30)
#define AKFCOMPHBLJ_ANMNJPAHCAF_LMBKFKJMFIE_OFFSET UNITYSDK_OFFSET(0x1421B5C0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NAOJPNADKEE_OFFSET UNITYSDK_OFFSET(0x14222610)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NCPPPIJCOGP_OFFSET UNITYSDK_OFFSET(0x1421E800)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NDHLDDGJLND_OFFSET UNITYSDK_OFFSET(0x1421C450)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NDNBHLEEBLF_OFFSET UNITYSDK_OFFSET(0x1421C9D0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NMFEJOEONEN_OFFSET UNITYSDK_OFFSET(0x14223470)
#define AKFCOMPHBLJ_ANMNJPAHCAF_NMFOEGONHBM_OFFSET UNITYSDK_OFFSET(0x1421E300)
#define AKFCOMPHBLJ_ANMNJPAHCAF_OBDHEHPAECK_OFFSET UNITYSDK_OFFSET(0x1421D5F0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_OMLGFIDPIFE_OFFSET UNITYSDK_OFFSET(0x1421DA20)
#define AKFCOMPHBLJ_ANMNJPAHCAF_PDNEPAIHKCO_1_OFFSET UNITYSDK_OFFSET(0x142235F0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_PIGCLFJJIBM_OFFSET UNITYSDK_OFFSET(0x1421FDE0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_PKKNEMCEMLP_OFFSET UNITYSDK_OFFSET(0x14222DF0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_PPNECOAGDCI_OFFSET UNITYSDK_OFFSET(0x142215E0)
#define AKFCOMPHBLJ_ANMNJPAHCAF_PPOFBMEJMMB_OFFSET UNITYSDK_OFFSET(0x14222560)

inline static constexpr unsigned int AKFCOMPHBLJ_ANMNJPAHCAF_TypeDefinitionIndex = 77046;

class AKFCOMPHBLJ_ANMNJPAHCAF : public ::System::Object
{
public:
	static ::AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC** StaticGet_LPCNKPGCHNE()
	{
		return (::AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC**)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_ANMNJPAHCAF_TypeDefinitionIndex)->GetStaticField(0x47B60);
	}
	static ::System::Int32* StaticGet_AAKCPBOIAKP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_ANMNJPAHCAF_TypeDefinitionIndex)->GetStaticField(0x108A0);
	}
	static ::System::Int32* StaticGet_ODNMIKKLGPM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AKFCOMPHBLJ_ANMNJPAHCAF_TypeDefinitionIndex)->GetStaticField(0x108A4);
	}
	// static const ::System::Single LAKPEJCIPLP; // 0x0
	// static const ::System::Single AEONPEAMNOJ; // 0x0
	// static const ::System::Single PFDGPNCAGIL; // 0x0
	// static const ::System::Int32 FLPFGMMLFGA = 0x10; // 0x0
	// static const ::System::Single OBINKKBFIKM; // 0x0
	// static const ::System::Single IHOAEOJDDGN; // 0x0
	// static const ::System::Single EOOJMLOJEFO; // 0x0

	static ::System::Boolean JIFHPJJFHJL(::System::Collections::Generic::List_1<::System::Int32>* DNCICLIKGPL, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_JIFHPJJFHJL_OFFSET))(DNCICLIKGPL, OBIPHBKODPP, BJPMDMGEENK, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::System::Boolean FAHGFNMKHCI(::DMOHECEJHAB* IBDADOPEBFC, ::ANOKJGCCGAO* KHILBNJIAKA, ::NAIIOGFMJAN* DIBAIJOCBBH, ::Foundation::ViewObject::SuiteInfo DOJFEJPBANP, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* FKFOCMAMJLF)
	{
		return ((::System::Boolean(*)(::DMOHECEJHAB*, ::ANOKJGCCGAO*, ::NAIIOGFMJAN*, ::Foundation::ViewObject::SuiteInfo, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_FAHGFNMKHCI_OFFSET))(IBDADOPEBFC, KHILBNJIAKA, DIBAIJOCBBH, DOJFEJPBANP, FKFOCMAMJLF);
	}

	static ::MoleMole::EntityHandle IHBAKNKEANI(::System::UInt32 KMMGKJPAOMF, ::System::UInt32 OLAHFMECDAI, ::Foundation::ViewObject::ViewObjectHandle& EOJOGGEFMFC)
	{
		return ((::MoleMole::EntityHandle(*)(::System::UInt32, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_OFFSET))(KMMGKJPAOMF, OLAHFMECDAI, EOJOGGEFMFC);
	}

	static ::EJHHPFFPFOJ* KGJMHGLDELN(::System::UInt32 MODAECOCCBC, ::System::UInt32 KMMGKJPAOMF, ::System::String* KAGKEDIGALF)
	{
		return ((::EJHHPFFPFOJ*(*)(::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KGJMHGLDELN_OFFSET))(MODAECOCCBC, KMMGKJPAOMF, KAGKEDIGALF);
	}

	static ::System::Boolean DIMCMOGJGAB(::Foundation::ViewObject::ViewObjectHandle JCJDKCLCKKH, ::System::UInt32& AOCOIDIMLIH, ::System::UInt32& NKIPEHLEECP)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DIMCMOGJGAB_OFFSET))(JCJDKCLCKKH, AOCOIDIMLIH, NKIPEHLEECP);
	}

	static ::EJHHPFFPFOJ* KGJMHGLDELN_1(::System::Int32 MODAECOCCBC, ::System::Int32 KMMGKJPAOMF, ::System::String* KAGKEDIGALF)
	{
		return ((::EJHHPFFPFOJ*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KGJMHGLDELN_1_OFFSET))(MODAECOCCBC, KMMGKJPAOMF, KAGKEDIGALF);
	}

	static ::System::Boolean EBAIOCLLFJD(::DMOHECEJHAB* IBDADOPEBFC, ::ANOKJGCCGAO* KHILBNJIAKA, ::NAIIOGFMJAN* DIBAIJOCBBH, ::Foundation::ViewObject::SuiteInfo DOJFEJPBANP, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK)
	{
		return ((::System::Boolean(*)(::DMOHECEJHAB*, ::ANOKJGCCGAO*, ::NAIIOGFMJAN*, ::Foundation::ViewObject::SuiteInfo, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_EBAIOCLLFJD_OFFSET))(IBDADOPEBFC, KHILBNJIAKA, DIBAIJOCBBH, DOJFEJPBANP, OBIPHBKODPP, BJPMDMGEENK);
	}

	static ::AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC* NDHLDDGJLND()
	{
		return ((::AKFCOMPHBLJ_ANMNJPAHCAF_JJBGPFIPFAC*(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NDHLDDGJLND_OFFSET))();
	}

	static ::System::Boolean EKKKALCHBIH(::System::UInt32 AOCOIDIMLIH, ::System::Int32& NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_EKKKALCHBIH_OFFSET))(AOCOIDIMLIH, NACGJJKHEJE);
	}

	static ::System::Void NDNBHLEEBLF(::DMOHECEJHAB* IBDADOPEBFC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Void(*)(::DMOHECEJHAB*, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NDNBHLEEBLF_OFFSET))(IBDADOPEBFC, OBIPHBKODPP, BJPMDMGEENK, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::MoleMole::EntityHandle GGGNKOPPAOF(::Foundation::ViewObject::ViewObjectHandle JCJDKCLCKKH)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_GGGNKOPPAOF_OFFSET))(JCJDKCLCKKH);
	}

	static ::Foundation::ViewObject::ViewObjectHandle LMALJEBAJMK(::System::String* CLACNEMIOBA)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LMALJEBAJMK_OFFSET))(CLACNEMIOBA);
	}

	static ::System::Void LEMGPMLADFE(::System::String* KJEILIMIFJD, ::System::Single& ONEIBILJLBP, ::System::Single& ECPKMCHMDMD)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LEMGPMLADFE_OFFSET))(KJEILIMIFJD, ONEIBILJLBP, ECPKMCHMDMD);
	}

	static ::System::Void FFOLMHGJKPJ(::DMOHECEJHAB* IBDADOPEBFC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Void(*)(::DMOHECEJHAB*, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_FFOLMHGJKPJ_OFFSET))(IBDADOPEBFC, OBIPHBKODPP, BJPMDMGEENK, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::System::Boolean LMBKFKJMFIE(::System::Collections::Generic::List_1<::System::String*>* JMDOANHOEJG, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* MPAIPGNECBJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LMBKFKJMFIE_OFFSET))(JMDOANHOEJG, MPAIPGNECBJ);
	}

	static ::System::Boolean OBDHEHPAECK(::UnityEngine::Vector3 KLILFBFAELK, ::UnityEngine::Vector3 AOIFOJKGGFP, ::UnityEngine::Vector3& NFOPONCIANK, ::UnityEngine::Vector3& LPLMPAFAJIP)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_OBDHEHPAECK_OFFSET))(KLILFBFAELK, AOIFOJKGGFP, NFOPONCIANK, LPLMPAFAJIP);
	}

	static ::System::Int32 OMLGFIDPIFE(::System::Int32 MODAECOCCBC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_OMLGFIDPIFE_OFFSET))(MODAECOCCBC);
	}

	static ::System::Void BNOHCPICCIN(::DMOHECEJHAB* IBDADOPEBFC, ::ANOKJGCCGAO* KHILBNJIAKA, ::NAIIOGFMJAN* DIBAIJOCBBH, ::Foundation::ViewObject::SuiteInfo DOJFEJPBANP, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Void(*)(::DMOHECEJHAB*, ::ANOKJGCCGAO*, ::NAIIOGFMJAN*, ::Foundation::ViewObject::SuiteInfo, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_BNOHCPICCIN_OFFSET))(IBDADOPEBFC, KHILBNJIAKA, DIBAIJOCBBH, DOJFEJPBANP, OBIPHBKODPP, BJPMDMGEENK, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::System::Boolean BDJGADFANPG(::UnityEngine::Vector3 KLILFBFAELK, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3& NFOPONCIANK, ::UnityEngine::Vector3& LPLMPAFAJIP)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_BDJGADFANPG_OFFSET))(KLILFBFAELK, NCCDJLDKFGA, NFOPONCIANK, LPLMPAFAJIP);
	}

	static ::System::Int32 EJADCKNPIJI(::System::Int32 DBMEHBMAALJ, ::System::Int32 MODAECOCCBC)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_EJADCKNPIJI_OFFSET))(DBMEHBMAALJ, MODAECOCCBC);
	}

	static ::IECDFLHPLOE* LCJPBPOKNAM(::UnityEngine::Vector3 MPLDDNMCECG)
	{
		return ((::IECDFLHPLOE*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LCJPBPOKNAM_OFFSET))(MPLDDNMCECG);
	}

	static ::System::Int32 NCPPPIJCOGP(::System::UInt32 EEIKIEMDJJL, ::System::Int32 EJELCLFMNKP, ::System::Boolean ALLBACBKCNC, ::System::Int32 DBMEHBMAALJ, ::System::Int32 MODAECOCCBC)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NCPPPIJCOGP_OFFSET))(EEIKIEMDJJL, EJELCLFMNKP, ALLBACBKCNC, DBMEHBMAALJ, MODAECOCCBC);
	}

	static ::Foundation::ViewObject::ViewObjectHandle LMALJEBAJMK_1(::Foundation::ViewObject::GroupMemberIdentifier HLDBBGGLNKP)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LMALJEBAJMK_1_OFFSET))(HLDBBGGLNKP);
	}

	static ::System::Boolean GNIGPGCEBCF(::System::Int32 MODAECOCCBC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_GNIGPGCEBCF_OFFSET))(MODAECOCCBC, OBIPHBKODPP, DJKODBDIPPH);
	}

	static ::System::Boolean LLPEPMOPJEJ(::System::Int32 MODAECOCCBC, ::System::Collections::Generic::List_1<::System::Int32>*& DNCICLIKGPL)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LLPEPMOPJEJ_OFFSET))(MODAECOCCBC, DNCICLIKGPL);
	}

	static ::System::Boolean KBNPOFAJAAP(::UnityEngine::Vector3 KLILFBFAELK, ::UnityEngine::Vector3 AOIFOJKGGFP, ::System::Single ONEIBILJLBP, ::System::Single ECPKMCHMDMD, ::System::Single ONNCAHGKBCI, ::System::Int32 PBMCANEAGEN, ::UnityEngine::Vector3& NFOPONCIANK, ::UnityEngine::Vector3& LPLMPAFAJIP)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KBNPOFAJAAP_OFFSET))(KLILFBFAELK, AOIFOJKGGFP, ONEIBILJLBP, ECPKMCHMDMD, ONNCAHGKBCI, PBMCANEAGEN, NFOPONCIANK, LPLMPAFAJIP);
	}

	static ::System::Boolean BPPFEKIHGEI(::System::Int32 MODAECOCCBC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_BPPFEKIHGEI_OFFSET))(MODAECOCCBC, OBIPHBKODPP, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* PIGCLFJJIBM(::System::Int32 PCKKBPBDJCI, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* IGAAKDOIPNN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_PIGCLFJJIBM_OFFSET))(PCKKBPBDJCI, IGAAKDOIPNN);
	}

	static ::EJHHPFFPFOJ* APBKKCKNNIE(::System::Int32 KMMGKJPAOMF, ::System::String* KAGKEDIGALF)
	{
		return ((::EJHHPFFPFOJ*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_APBKKCKNNIE_OFFSET))(KMMGKJPAOMF, KAGKEDIGALF);
	}

	static ::System::Boolean IEOKPAIDDPI(::UnityEngine::Vector3& CKPGOKHECCH, ::UnityEngine::Vector3& GJNLCLDFFIN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IEOKPAIDDPI_OFFSET))(CKPGOKHECCH, GJNLCLDFFIN);
	}

	static ::System::Boolean EHEMPKAGILC(::System::Collections::Generic::List_1<::System::Int32>*& DNCICLIKGPL)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_EHEMPKAGILC_OFFSET))(DNCICLIKGPL);
	}

	static ::System::Int32 IJHPIGABKFN()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IJHPIGABKFN_OFFSET))();
	}

	static ::MoleMole::EntityHandle IHBAKNKEANI_1(::System::String* EKGEJPDGMLE, ::Foundation::ViewObject::ViewObjectHandle& EOJOGGEFMFC)
	{
		return ((::MoleMole::EntityHandle(*)(::System::String*, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_1_OFFSET))(EKGEJPDGMLE, EOJOGGEFMFC);
	}

	static ::System::Int32 DMDAMNLKBON()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DMDAMNLKBON_OFFSET))();
	}

	static ::System::Int32 BCDMHJLHPIC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_BCDMHJLHPIC_OFFSET))();
	}

	static ::System::Void APMFLFFLBDL(::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_APMFLFFLBDL_OFFSET))(FCNPOKNKMOD, FPNKBIPMBCA);
	}

	static ::System::Boolean APIAPJGBKLN(::UnityEngine::Vector3& NFOPONCIANK, ::UnityEngine::Vector3& LPLMPAFAJIP)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_APIAPJGBKLN_OFFSET))(NFOPONCIANK, LPLMPAFAJIP);
	}

	static ::System::Boolean HKLKGCDIGPE(::System::Int32 MODAECOCCBC, ::System::Collections::Generic::List_1<::System::Int32>*& DNCICLIKGPL)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_HKLKGCDIGPE_OFFSET))(MODAECOCCBC, DNCICLIKGPL);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>* PPNECOAGDCI(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Foundation::ViewObject::ViewObjectHandle>*(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_PPNECOAGDCI_OFFSET))(IFHEOPLLDGC);
	}

	static ::IECDFLHPLOE* LCJPBPOKNAM_1(::System::Int32 MODAECOCCBC, ::UnityEngine::Vector3 MPLDDNMCECG)
	{
		return ((::IECDFLHPLOE*(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LCJPBPOKNAM_1_OFFSET))(MODAECOCCBC, MPLDDNMCECG);
	}

	static ::System::Void IDCOKDFBBEB(::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 FPNKBIPMBCA, ::System::Boolean IMMAJAKDCFO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IDCOKDFBBEB_OFFSET))(FCNPOKNKMOD, FPNKBIPMBCA, IMMAJAKDCFO);
	}

	static ::System::Int32 KOLKMDJKAJH(::Il2CppArray<::System::String*>* FKFOCMAMJLF)
	{
		return ((::System::Int32(*)(::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KOLKMDJKAJH_OFFSET))(FKFOCMAMJLF);
	}

	static ::System::Void BFENNMNJNNN(::Foundation::ViewObject::ViewObjectHandle EAPIEMGDDMM, ::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 FPNKBIPMBCA)
	{
		return ((::System::Void(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_BFENNMNJNNN_OFFSET))(EAPIEMGDDMM, FCNPOKNKMOD, FPNKBIPMBCA);
	}

	static ::EPIDGNEOKGM KJBHIJHDCEC(::System::String* LDLLELFJHPG, ::System::Collections::Generic::List_1<::System::String*>* FFDLPLHMMEE, ::System::Boolean LHPEBLHEIIA)
	{
		return ((::EPIDGNEOKGM(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KJBHIJHDCEC_OFFSET))(LDLLELFJHPG, FFDLPLHMMEE, LHPEBLHEIIA);
	}

	static ::System::Void AJBKLFEKKFB(::System::Int32 MODAECOCCBC, ::System::Int32 KMMGKJPAOMF, ::System::Collections::Generic::List_1<::EJHHPFFPFOJ*>*& AOAEJNBGNNH)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::EJHHPFFPFOJ*>*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_AJBKLFEKKFB_OFFSET))(MODAECOCCBC, KMMGKJPAOMF, AOAEJNBGNNH);
	}

	static ::Foundation::ViewObject::ViewObjectHandle PPOFBMEJMMB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_PPOFBMEJMMB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Int32 NAOJPNADKEE(::System::Int32 MODAECOCCBC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP)
	{
		return ((::System::Int32(*)(::System::Int32, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NAOJPNADKEE_OFFSET))(MODAECOCCBC, OBIPHBKODPP);
	}

	static ::Foundation::ViewObject::ViewObjectHandle GAMONPLLMPP(::DJCHCMEFPIF HNPGPDCCPEF)
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_GAMONPLLMPP_OFFSET))(HNPGPDCCPEF);
	}

	static ::System::Void HHOFAPDLHED(::System::Action* EDNJGMKPFHG, ::System::Action_1<::System::Int32>* IFKOKLCPMNF)
	{
		return ((::System::Void(*)(::System::Action*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_HHOFAPDLHED_OFFSET))(EDNJGMKPFHG, IFKOKLCPMNF);
	}

	static ::System::Boolean PKKNEMCEMLP(::System::Int32 MODAECOCCBC, ::System::Collections::Generic::List_1<::DMOHECEJHAB*>*& IBDADOPEBFC)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::DMOHECEJHAB*>*&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_PKKNEMCEMLP_OFFSET))(MODAECOCCBC, IBDADOPEBFC);
	}

	static ::System::Int32 NMFOEGONHBM()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NMFOEGONHBM_OFFSET))();
	}

	static ::System::Void FCJPDBHDPCG(::UnityEngine::Vector3& EIIDOADGOIF)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_FCJPDBHDPCG_OFFSET))(EIIDOADGOIF);
	}

	static ::System::Boolean DPOCPALAKGC(::System::Int32 MODAECOCCBC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_DPOCPALAKGC_OFFSET))(MODAECOCCBC, OBIPHBKODPP, IGAAKDOIPNN, DJKODBDIPPH);
	}

	static ::System::Boolean LCFAHPAPBFO(::System::Int32 MODAECOCCBC, ::System::Int32& ACAPJGHNDDE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LCFAHPAPBFO_OFFSET))(MODAECOCCBC, ACAPJGHNDDE);
	}

	static ::UnityEngine::Vector3 ABFNHGPJKFL()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_ABFNHGPJKFL_OFFSET))();
	}

	static ::System::Boolean KNFFOCJJGAL(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* JMDOANHOEJG, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* MPAIPGNECBJ)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KNFFOCJJGAL_OFFSET))(JMDOANHOEJG, MPAIPGNECBJ);
	}

	static ::System::Boolean NMFEJOEONEN(::UnityEngine::Vector3 KDEHMPGOCEP, ::UnityEngine::Vector3 PADJNMGMGHO)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_NMFEJOEONEN_OFFSET))(KDEHMPGOCEP, PADJNMGMGHO);
	}

	static ::System::Boolean LCFAHPAPBFO_1(::System::Int32 MODAECOCCBC, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* FKFOCMAMJLF, ::System::Int32& ACAPJGHNDDE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_LCFAHPAPBFO_1_OFFSET))(MODAECOCCBC, FKFOCMAMJLF, ACAPJGHNDDE);
	}

	static ::MoleMole::EntityHandle IHBAKNKEANI_2(::Foundation::ViewObject::GroupMemberIdentifier PLCALBLENED, ::Foundation::ViewObject::ViewObjectHandle& EOJOGGEFMFC)
	{
		return ((::MoleMole::EntityHandle(*)(::Foundation::ViewObject::GroupMemberIdentifier, ::Foundation::ViewObject::ViewObjectHandle&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_IHBAKNKEANI_2_OFFSET))(PLCALBLENED, EOJOGGEFMFC);
	}

	static ::System::Void PDNEPAIHKCO_1(::DLLLACFEBJF JPJBIBPBODE, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::DLLLACFEBJF, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_PDNEPAIHKCO_1_OFFSET))(JPJBIBPBODE, KECKGDFIALJ);
	}

	static ::System::Int32 KLDDBFCKLIF(::System::Int32 MODAECOCCBC, ::Il2CppArray<::System::String*>* FKFOCMAMJLF)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_KLDDBFCKLIF_OFFSET))(MODAECOCCBC, FKFOCMAMJLF);
	}

	static ::System::Void HMHENPNKGFO(::DMOHECEJHAB* IBDADOPEBFC, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP OBIPHBKODPP, ::System::Collections::Generic::HashSet_1<::System::UInt64>* BJPMDMGEENK, ::System::Collections::Generic::List_1<::System::Object*>* IGAAKDOIPNN, ::System::Int32& DJKODBDIPPH)
	{
		return ((::System::Void(*)(::DMOHECEJHAB*, ::AKFCOMPHBLJ_ANMNJPAHCAF_MALBCCFOGOP, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_ANMNJPAHCAF_HMHENPNKGFO_OFFSET))(IBDADOPEBFC, OBIPHBKODPP, BJPMDMGEENK, IGAAKDOIPNN, DJKODBDIPPH);
	}
};
