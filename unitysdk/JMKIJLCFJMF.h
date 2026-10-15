#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/JMKIJLCFJMF_KJJPEFMPJOF.h"
#include "unitysdk/RPG/GameCore/EMatchAIState.h"
#include "unitysdk/JMKIJLCFJMF_POCEDKGCANA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CGBECAKCLFD;
class GHMGGIHEHJE;
class KPDKCEAFBHI;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashGameModifier_MatchLevelAI; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define JMKIJLCFJMF_ALAKLGCMBOL_OFFSET UNITYSDK_OFFSET(0xB26C730)
#define JMKIJLCFJMF_AMADAEBEEPF_OFFSET UNITYSDK_OFFSET(0xB26D790)
#define JMKIJLCFJMF_CANKGIEOFGL_OFFSET UNITYSDK_OFFSET(0xB26CC80)
#define JMKIJLCFJMF_CBCJMFAEJNB_OFFSET UNITYSDK_OFFSET(0xB26D1E0)
#define JMKIJLCFJMF_CPCIDNPNJAL_OFFSET UNITYSDK_OFFSET(0xB26C560)
#define JMKIJLCFJMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB26A070)
#define JMKIJLCFJMF_DEPGDKJBCJO_OFFSET UNITYSDK_OFFSET(0xB26CF40)
#define JMKIJLCFJMF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26A180)
#define JMKIJLCFJMF_DPKEPELPKJP_OFFSET UNITYSDK_OFFSET(0xB26A2D0)
#define JMKIJLCFJMF_EMFBFBBNLCD_OFFSET UNITYSDK_OFFSET(0xB26BDF0)
#define JMKIJLCFJMF_EOHLJNJEODK_OFFSET UNITYSDK_OFFSET(0xB26CAE0)
#define JMKIJLCFJMF_FICDPBPINOM_OFFSET UNITYSDK_OFFSET(0xB26D720)
#define JMKIJLCFJMF_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB26D670)
#define JMKIJLCFJMF_GGJOFDJKPBB_1_OFFSET UNITYSDK_OFFSET(0xB26BA60)
#define JMKIJLCFJMF_GGJOFDJKPBB_OFFSET UNITYSDK_OFFSET(0xB26A530)
#define JMKIJLCFJMF_HNGGDFGOLPA_OFFSET UNITYSDK_OFFSET(0xB26DDC0)
#define JMKIJLCFJMF_IDOBBOEHGLO_OFFSET UNITYSDK_OFFSET(0xB26DC20)
#define JMKIJLCFJMF_IMMNFNPOMID_OFFSET UNITYSDK_OFFSET(0xB26D0C0)
#define JMKIJLCFJMF_KFIADLABNJJ_OFFSET UNITYSDK_OFFSET(0xB26D6B0)
#define JMKIJLCFJMF_LKMPJGMLMCE_OFFSET UNITYSDK_OFFSET(0xB26D7F0)
#define JMKIJLCFJMF_LOHOCFABIFC_OFFSET UNITYSDK_OFFSET(0xB26D5F0)
#define JMKIJLCFJMF_NBADOCHEDIF_OFFSET UNITYSDK_OFFSET(0xB26DCE0)
#define JMKIJLCFJMF_NGCEDGIMAHH_OFFSET UNITYSDK_OFFSET(0xB26A670)
#define JMKIJLCFJMF_NKNDPMNGKJN_1_OFFSET UNITYSDK_OFFSET(0xB26BC90)
#define JMKIJLCFJMF_NKNDPMNGKJN_OFFSET UNITYSDK_OFFSET(0xB26A470)
#define JMKIJLCFJMF_OAIEIJAHJCM_OFFSET UNITYSDK_OFFSET(0xB26DF30)
#define JMKIJLCFJMF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB26A5F0)
#define JMKIJLCFJMF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB26AD90)
#define JMKIJLCFJMF_OONGLIEGHGC_OFFSET UNITYSDK_OFFSET(0xB26A1E0)
#define JMKIJLCFJMF_TICK_OFFSET UNITYSDK_OFFSET(0xB26AE90)

	class JMKIJLCFJMF : public ::GELIALJDFBL
	{
	public:
		::JMKIJLCFJMF_KJJPEFMPJOF KEFHBMIBBIC; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::RPG::Client::RoadRashGameModifier_MatchLevelAI* OFKGLJOAMLD; // 0x48
		::System::Single FHIPFHGCGKH; // 0x50
		::System::Single IHAAGLCDMGK; // 0x54
		::System::UInt32 DJPPJJCHCHE; // 0x58
		::System::Single MKCHHFMKCFP; // 0x5C
		::System::Single DCIBNEKENPN; // 0x60
		::System::Single BCFHFMJNMCF; // 0x64
		::System::Int32 NCDPMNOPPHJ; // 0x68
		::System::Boolean DPMPGPAHNLJ; // 0x6C
		::System::Boolean LAODGODMBKG; // 0x6D
		::System::Boolean ALADCDEMINO; // 0x6E
		::System::Boolean KCOGALCECDM; // 0x6F
		::System::Boolean JKHCAIANNNL; // 0x70
		::System::Boolean IENDFFHOECA; // 0x71
		::System::Byte _padding0[0x2];
		::RPG::GameCore::EMatchAIState LMPDFBOMMDB; // 0x74
		// static const ::System::String* PGLMJKMOGNO; // 0x0
		// static const ::System::Object PBEEEIPJBHA; // 0x0
		// static const ::System::Object OAAPGDFGELE; // 0x0
		// static const ::System::Object IABFGCLGKBF; // 0x0
		// static const ::System::Object NCMHHOKKFNI; // 0x0
		// static const ::System::Object HLPLCAIDBJM; // 0x0
		// static const ::System::Object EMKPNDCGCNE; // 0x0
		// static const ::System::Object ADEEALDNCJC; // 0x0
		// static const ::System::Object JCFBHBABBKN; // 0x0
		// static const ::System::Object MFGOMEPGBCO; // 0x0
		// static const ::System::Object ICAANGJNJHH; // 0x0
		// static const ::System::Object JNNMIPKMCGK; // 0x0
		// static const ::System::Object GJJFABAJLHC; // 0x0
		// static const ::System::Object JHHGNPNBBFP; // 0x0
		// static const ::System::Object KKMKKDONAOO; // 0x0
		// static const ::System::Object OFKFGIPLANP; // 0x0
		// static const ::System::Object GLDPLDHFNLJ; // 0x0
		// static const ::System::Object LEJNPJAEPNO; // 0x0
		// static const ::System::Object CHLPOPFECHI; // 0x0
		// static const ::System::Object LFMAOOLKKOI; // 0x0
		// static const ::System::Object ODMLLCLKJBF; // 0x0
		// static const ::System::Object OLPCMMANADH; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_MatchLevelAI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_MatchLevelAI*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_GETCONFIG_OFFSET))(this);
		}

		::JMKIJLCFJMF_POCEDKGCANA EMFBFBBNLCD()
		{
			return ((::JMKIJLCFJMF_POCEDKGCANA(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_EMFBFBBNLCD_OFFSET))(this);
		}

		static ::System::Void AMADAEBEEPF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_AMADAEBEEPF_OFFSET))(a1, a2);
		}

		static ::System::Void KFIADLABNJJ(::System::Single a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_KFIADLABNJJ_OFFSET))(a1, a2);
		}

		static ::System::Void FICDPBPINOM(::System::Single a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_FICDPBPINOM_OFFSET))(a1, a2);
		}

		::System::Void NGCEDGIMAHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_NGCEDGIMAHH_OFFSET))(this);
		}

		static ::System::Int32 LKMPJGMLMCE(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_LKMPJGMLMCE_OFFSET))(a1, a2);
		}

		::System::Void CPCIDNPNJAL(::GHMGGIHEHJE* a1, ::KPDKCEAFBHI* a2, ::JMKIJLCFJMF_POCEDKGCANA a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::KPDKCEAFBHI*, ::JMKIJLCFJMF_POCEDKGCANA))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_CPCIDNPNJAL_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean IDOBBOEHGLO(::MFIMCKDKDKG* a1)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_IDOBBOEHGLO_OFFSET))(a1);
		}

		::System::Void CANKGIEOFGL(::GHMGGIHEHJE* a1, ::System::Single a2, ::System::Single a3, ::JMKIJLCFJMF_POCEDKGCANA a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single, ::System::Single, ::JMKIJLCFJMF_POCEDKGCANA, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_CANKGIEOFGL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EOHLJNJEODK(::GHMGGIHEHJE* a1, ::RPG::GameCore::EMatchAIState a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::EMatchAIState, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_EOHLJNJEODK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single DEPGDKJBCJO(::System::Single a1, ::System::Single a2, ::JMKIJLCFJMF_POCEDKGCANA a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::JMKIJLCFJMF_POCEDKGCANA, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_DEPGDKJBCJO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Single IMMNFNPOMID(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::System::Single a3, ::JMKIJLCFJMF_POCEDKGCANA a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::System::Single, ::JMKIJLCFJMF_POCEDKGCANA, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_IMMNFNPOMID_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Single LOHOCFABIFC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_LOHOCFABIFC_OFFSET))(this, a1);
		}

		::System::Single HNGGDFGOLPA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_HNGGDFGOLPA_OFFSET))(this, a1);
		}

		::System::Void ALAKLGCMBOL(::GHMGGIHEHJE* a1, ::KPDKCEAFBHI* a2, ::System::Single a3, ::JMKIJLCFJMF_POCEDKGCANA a4)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::KPDKCEAFBHI*, ::System::Single, ::JMKIJLCFJMF_POCEDKGCANA))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_ALAKLGCMBOL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OAIEIJAHJCM(::GHMGGIHEHJE* a1, ::CGBECAKCLFD* a2, ::JMKIJLCFJMF_POCEDKGCANA a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::CGBECAKCLFD*, ::JMKIJLCFJMF_POCEDKGCANA, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_OAIEIJAHJCM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DPKEPELPKJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_DPKEPELPKJP_OFFSET))(this);
		}

		::System::Void NKNDPMNGKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_NKNDPMNGKJN_OFFSET))(this);
		}

		static ::System::Void NKNDPMNGKJN_1(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_NKNDPMNGKJN_1_OFFSET))(a1);
		}

		::System::Void CBCJMFAEJNB(::GHMGGIHEHJE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Single))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_CBCJMFAEJNB_OFFSET))(this, a1, a2);
		}

		::System::Void GGJOFDJKPBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_GGJOFDJKPBB_OFFSET))(this);
		}

		::System::Void GGJOFDJKPBB_1(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_GGJOFDJKPBB_1_OFFSET))(this, a1);
		}

		::System::Void NBADOCHEDIF(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_NBADOCHEDIF_OFFSET))(this, a1);
		}

		::System::Void OONGLIEGHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMKIJLCFJMF_OONGLIEGHGC_OFFSET))(this);
		}

	};
