#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeSpeakerPolicy.h"
#include "unitysdk/RPG/GameCore/CakeValidAreaType.h"
#include "unitysdk/System/Object.h"
class ACPGJEEJBPB;
class AGMKEJJJGFM;
class ALEAKDBNMKC;
class BOFBMGNNCMA;
class FDPOCBGDLGA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFEKHDCLFAA_AHDBEHBDHPH_OFFSET UNITYSDK_OFFSET(0x1BC0B890)
#define IFEKHDCLFAA_ALOEFOIMDHK_OFFSET UNITYSDK_OFFSET(0x1BC0ABD0)
#define IFEKHDCLFAA_BPJNCLFGNOB_OFFSET UNITYSDK_OFFSET(0x1BC0AE10)
#define IFEKHDCLFAA_CEDICDCHAOM_OFFSET UNITYSDK_OFFSET(0x1BC0B920)
#define IFEKHDCLFAA_COIBKJEJDKA_OFFSET UNITYSDK_OFFSET(0x1BC0AEA0)
#define IFEKHDCLFAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0C850)
#define IFEKHDCLFAA_DJDFLGPHNPO_OFFSET UNITYSDK_OFFSET(0x1BC09BC0)
#define IFEKHDCLFAA_DMNGGIHPHLC_OFFSET UNITYSDK_OFFSET(0x1BC0C080)
#define IFEKHDCLFAA_DNALJJAKNOH_OFFSET UNITYSDK_OFFSET(0x1BC0A750)
#define IFEKHDCLFAA_FCGPIGHKOGJ_OFFSET UNITYSDK_OFFSET(0x1BC0C560)
#define IFEKHDCLFAA_FINKFHJAMAH_OFFSET UNITYSDK_OFFSET(0x1BC09380)
#define IFEKHDCLFAA_GCHHKOKDKNO_OFFSET UNITYSDK_OFFSET(0x1BC0AF50)
#define IFEKHDCLFAA_GET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x1BC0C830)
#define IFEKHDCLFAA_GGHALOCLGCJ_OFFSET UNITYSDK_OFFSET(0x1BC0BD10)
#define IFEKHDCLFAA_GPDMGPODIML_OFFSET UNITYSDK_OFFSET(0x1BC087F0)
#define IFEKHDCLFAA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1BC08720)
#define IFEKHDCLFAA_HKPOIBANHLM_OFFSET UNITYSDK_OFFSET(0x1BC0AB40)
#define IFEKHDCLFAA_IEGDBDDJLGF_OFFSET UNITYSDK_OFFSET(0x1BC088A0)
#define IFEKHDCLFAA_IEJEIGCBMML_OFFSET UNITYSDK_OFFSET(0x1BC09E50)
#define IFEKHDCLFAA_JJBHODIOEMH_OFFSET UNITYSDK_OFFSET(0x1BC09530)
#define IFEKHDCLFAA_JKOKLMLAFBO_OFFSET UNITYSDK_OFFSET(0x1BC0C130)
#define IFEKHDCLFAA_KCBKBLGBOAP_OFFSET UNITYSDK_OFFSET(0x1BC0B350)
#define IFEKHDCLFAA_KFJIFKOAAKG_OFFSET UNITYSDK_OFFSET(0x1BC08E10)
#define IFEKHDCLFAA_KHALBKPBFLM_OFFSET UNITYSDK_OFFSET(0x1BC0A1F0)
#define IFEKHDCLFAA_KOIPPOLDAAC_OFFSET UNITYSDK_OFFSET(0x1BC0B500)
#define IFEKHDCLFAA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1BC085A0)
#define IFEKHDCLFAA_LCKLOICCGAO_OFFSET UNITYSDK_OFFSET(0x1BC0C6A0)
#define IFEKHDCLFAA_LINGOJIFEBI_OFFSET UNITYSDK_OFFSET(0x1BC0A8A0)
#define IFEKHDCLFAA_LKEJDCAKGNI_OFFSET UNITYSDK_OFFSET(0x1BC0A6C0)
#define IFEKHDCLFAA_MACKJKDIAKA_OFFSET UNITYSDK_OFFSET(0x1BC0BB70)
#define IFEKHDCLFAA_MFLLBIEEINF_OFFSET UNITYSDK_OFFSET(0x1BC0C1B0)
#define IFEKHDCLFAA_NENKHGPPLNF_OFFSET UNITYSDK_OFFSET(0x1BC09410)
#define IFEKHDCLFAA_ODCPGNFPLPA_OFFSET UNITYSDK_OFFSET(0x1BC095C0)
#define IFEKHDCLFAA_OJKJNMLNOPP_OFFSET UNITYSDK_OFFSET(0x1BC0A560)
#define IFEKHDCLFAA_ONACACBFJMH_OFFSET UNITYSDK_OFFSET(0x1BC0B060)
#define IFEKHDCLFAA_PABDFCGLLNI_OFFSET UNITYSDK_OFFSET(0x1BC0B750)
#define IFEKHDCLFAA_PDIJHAEBBBN_OFFSET UNITYSDK_OFFSET(0x1BC09EB0)
#define IFEKHDCLFAA_PKCLEJDFEHF_OFFSET UNITYSDK_OFFSET(0x1BC0B610)
#define IFEKHDCLFAA_PLKECDLKCMH_OFFSET UNITYSDK_OFFSET(0x1BC0C2E0)
#define IFEKHDCLFAA_SET_ISPLAYERINRANGE_OFFSET UNITYSDK_OFFSET(0x1BC0C840)

inline static constexpr unsigned int IFEKHDCLFAA_TypeDefinitionIndex = 64433;

	class IFEKHDCLFAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*>* KGPAADOACFL; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*>* JOLKMJDCHPK; // 0x18
		::System::Collections::Generic::List_1<::BOFBMGNNCMA*>* DPLKKJJGEMC; // 0x20
		::System::Boolean _IsPlayerInRange_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 GBNGJEDMOBJ; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NENKHGPPLNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_NENKHGPPLNF_OFFSET))(this, a1);
		}

		::System::Void GPDMGPODIML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_GPDMGPODIML_OFFSET))(this);
		}

		::System::Void IEGDBDDJLGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_IEGDBDDJLGF_OFFSET))(this);
		}

		::System::Void KFJIFKOAAKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_KFJIFKOAAKG_OFFSET))(this);
		}

		::System::Void FINKFHJAMAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_FINKFHJAMAH_OFFSET))(this);
		}

		::System::Void JJBHODIOEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_JJBHODIOEMH_OFFSET))(this);
		}

		::System::Void ODCPGNFPLPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_ODCPGNFPLPA_OFFSET))(this);
		}

		::System::Void PDIJHAEBBBN(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::ALEAKDBNMKC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_PDIJHAEBBBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHALBKPBFLM(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2, ::ALEAKDBNMKC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_KHALBKPBFLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DJDFLGPHNPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_DJDFLGPHNPO_OFFSET))(this);
		}

		::System::Void IEJEIGCBMML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_IEJEIGCBMML_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* OJKJNMLNOPP()
		{
			return ((::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_OJKJNMLNOPP_OFFSET))(this);
		}

		::System::Void LINGOJIFEBI(::BOFBMGNNCMA* a1, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOFBMGNNCMA*, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_LINGOJIFEBI_OFFSET))(this, a1, a2);
		}

		::System::Void HKPOIBANHLM(::BOFBMGNNCMA* a1, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOFBMGNNCMA*, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_HKPOIBANHLM_OFFSET))(this, a1, a2);
		}

		::System::Void ALOEFOIMDHK(::BOFBMGNNCMA* a1, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOFBMGNNCMA*, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_ALOEFOIMDHK_OFFSET))(this, a1, a2);
		}

		::System::Void BPJNCLFGNOB(::BOFBMGNNCMA* a1, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOFBMGNNCMA*, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_BPJNCLFGNOB_OFFSET))(this, a1, a2);
		}

		::AGMKEJJJGFM* LKEJDCAKGNI(::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a1)
		{
			return ((::AGMKEJJJGFM*(*)(::PVOID, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_LKEJDCAKGNI_OFFSET))(this, a1);
		}

		::System::Void DNALJJAKNOH(::AGMKEJJJGFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGMKEJJJGFM*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_DNALJJAKNOH_OFFSET))(this, a1);
		}

		::System::Void PKCLEJDFEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_PKCLEJDFEHF_OFFSET))(this);
		}

		::System::Boolean COIBKJEJDKA(::BOFBMGNNCMA* a1, ::RPG::GameCore::CakeValidAreaType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFBMGNNCMA*, ::RPG::GameCore::CakeValidAreaType))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_COIBKJEJDKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean GCHHKOKDKNO(::BOFBMGNNCMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFBMGNNCMA*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_GCHHKOKDKNO_OFFSET))(this, a1);
		}

		::System::Boolean KCBKBLGBOAP(::BOFBMGNNCMA* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFBMGNNCMA*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_KCBKBLGBOAP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KOIPPOLDAAC(::BOFBMGNNCMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOFBMGNNCMA*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_KOIPPOLDAAC_OFFSET))(this, a1);
		}

		::System::Boolean PABDFCGLLNI(::Il2CppArray<::FDPOCBGDLGA*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::FDPOCBGDLGA*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_PABDFCGLLNI_OFFSET))(this, a1, a2);
		}

		::System::UInt32 AHDBEHBDHPH(::Il2CppArray<::FDPOCBGDLGA*>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::FDPOCBGDLGA*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_AHDBEHBDHPH_OFFSET))(this, a1);
		}

		::System::Boolean CEDICDCHAOM(::Il2CppArray<::FDPOCBGDLGA*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::FDPOCBGDLGA*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_CEDICDCHAOM_OFFSET))(this, a1, a2);
		}

		::System::Boolean MACKJKDIAKA(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_MACKJKDIAKA_OFFSET))(this, a1, a2);
		}

		::System::Boolean GGHALOCLGCJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_GGHALOCLGCJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DMNGGIHPHLC(::ALEAKDBNMKC* a1, ::ALEAKDBNMKC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALEAKDBNMKC*, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_DMNGGIHPHLC_OFFSET))(this, a1, a2);
		}

		::System::Boolean JKOKLMLAFBO(::ALEAKDBNMKC* a1, ::ALEAKDBNMKC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALEAKDBNMKC*, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_JKOKLMLAFBO_OFFSET))(this, a1, a2);
		}

		::System::Void ONACACBFJMH(::BOFBMGNNCMA* a1, ::RPG::GameCore::CakeValidAreaType a2, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::BOFBMGNNCMA*, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::List_1<::AGMKEJJJGFM*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_ONACACBFJMH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* MFLLBIEEINF(::RPG::GameCore::CakeValidAreaType a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*(*)(::PVOID, ::RPG::GameCore::CakeValidAreaType, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_MFLLBIEEINF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* PLKECDLKCMH(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_PLKECDLKCMH_OFFSET))(this, a1);
		}

		::ACPGJEEJBPB* FCGPIGHKOGJ(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a4, ::System::UInt32 a5)
		{
			return ((::ACPGJEEJBPB*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_FCGPIGHKOGJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ALEAKDBNMKC* LCKLOICCGAO(::System::UInt32 a1, ::RPG::GameCore::CakeSpeakerPolicy a2, ::RPG::GameCore::CakeValidAreaType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>* a4, ::System::UInt32 a5)
		{
			return ((::ALEAKDBNMKC*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CakeSpeakerPolicy, ::RPG::GameCore::CakeValidAreaType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::ALEAKDBNMKC*>*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_LCKLOICCGAO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsPlayerInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_GET_ISPLAYERINRANGE_OFFSET))(this);
		}

		::System::Void set_IsPlayerInRange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEKHDCLFAA_SET_ISPLAYERINRANGE_OFFSET))(this, a1);
		}

	};
