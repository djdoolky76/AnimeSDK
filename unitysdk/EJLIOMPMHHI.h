#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/ProgressID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/RPG/Client/TextID.h"
class APBALBFNHIN;
class CFAFCENLLLD;
class EDIKPOPFJCM;
class EMILHGPLJHC;
class HGCEOEHGPPE;
class HGDELEAHIJO;
class HIAMBDKHMIJ;
class HPPGIADOJBF;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class LFCKLPMBGGI;
class NMJLMAOJEHN;
class NPKKGCIKGPB;
class OGIPLEMODKE;
namespace RPG::Client { class VersionUpdateProgressInfo; }
namespace RPG::Client { template <typename T> class AsyncActionProgress_1; }
namespace RPG::Client { template <typename T> class DataActionProgress_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJLIOMPMHHI_ABPOGFNENBF_OFFSET UNITYSDK_OFFSET(0x154E5380)
#define EJLIOMPMHHI_ALENIPKCJIO_OFFSET UNITYSDK_OFFSET(0x154E5C20)
#define EJLIOMPMHHI_APFPPKFCPOC_OFFSET UNITYSDK_OFFSET(0x154E99E0)
#define EJLIOMPMHHI_BKECMDJGDHF_OFFSET UNITYSDK_OFFSET(0x154E5D30)
#define EJLIOMPMHHI_BNJPAKLBFAH_OFFSET UNITYSDK_OFFSET(0x154E36B0)
#define EJLIOMPMHHI_BOJAGCJELAD_OFFSET UNITYSDK_OFFSET(0x154E6B50)
#define EJLIOMPMHHI_CEGEEIOINCO_OFFSET UNITYSDK_OFFSET(0x154E50A0)
#define EJLIOMPMHHI_CFIFPNPICBC_OFFSET UNITYSDK_OFFSET(0x154E60C0)
#define EJLIOMPMHHI_CJGCKDENFME_OFFSET UNITYSDK_OFFSET(0x154E5D20)
#define EJLIOMPMHHI_CJMKFNCCGLP_1_OFFSET UNITYSDK_OFFSET(0x154E3D40)
#define EJLIOMPMHHI_CJMKFNCCGLP_OFFSET UNITYSDK_OFFSET(0x154E3A30)
#define EJLIOMPMHHI_CODJJBECHIE_OFFSET UNITYSDK_OFFSET(0x154E5D00)
#define EJLIOMPMHHI_CTOR_OFFSET UNITYSDK_OFFSET(0x154E5EA0)
#define EJLIOMPMHHI_DBGCBIMBHPK_OFFSET UNITYSDK_OFFSET(0x154E5BD0)
#define EJLIOMPMHHI_DDOEPCFNFCJ_OFFSET UNITYSDK_OFFSET(0x154E98E0)
#define EJLIOMPMHHI_DMJEFJHBEPA_OFFSET UNITYSDK_OFFSET(0x154E5CF0)
#define EJLIOMPMHHI_EDAEMNPNDPD_OFFSET UNITYSDK_OFFSET(0x154E46B0)
#define EJLIOMPMHHI_EENINLHIPOG_OFFSET UNITYSDK_OFFSET(0x154E7F40)
#define EJLIOMPMHHI_EFBFJDJGNPL_OFFSET UNITYSDK_OFFSET(0x154E8A30)
#define EJLIOMPMHHI_ELDMPOPFEJL_1_OFFSET UNITYSDK_OFFSET(0x154E4260)
#define EJLIOMPMHHI_ELDMPOPFEJL_2_OFFSET UNITYSDK_OFFSET(0x154E41C0)
#define EJLIOMPMHHI_ELDMPOPFEJL_3_OFFSET UNITYSDK_OFFSET(0x154E42D0)
#define EJLIOMPMHHI_ELDMPOPFEJL_OFFSET UNITYSDK_OFFSET(0x154E4160)
#define EJLIOMPMHHI_EPMINLAECHF_OFFSET UNITYSDK_OFFSET(0x154E97E0)
#define EJLIOMPMHHI_GLGIBAMGFJN_OFFSET UNITYSDK_OFFSET(0x154E5810)
#define EJLIOMPMHHI_HACODLPCOEB_OFFSET UNITYSDK_OFFSET(0x154E6710)
#define EJLIOMPMHHI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x154E7E20)
#define EJLIOMPMHHI_HCEHJLOLDLK_OFFSET UNITYSDK_OFFSET(0x154E9EB0)
#define EJLIOMPMHHI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x154E6C90)
#define EJLIOMPMHHI_HNFDLGNHMIJ_OFFSET UNITYSDK_OFFSET(0x154E4A30)
#define EJLIOMPMHHI_IEDCBCNPHKG_OFFSET UNITYSDK_OFFSET(0x154E5BC0)
#define EJLIOMPMHHI_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0x154E6060)
#define EJLIOMPMHHI_IMHEBAJDKKH_OFFSET UNITYSDK_OFFSET(0x154E4530)
#define EJLIOMPMHHI_IOOHJKKBPKA_OFFSET UNITYSDK_OFFSET(0x154E4DE0)
#define EJLIOMPMHHI_JKMLDLJBCPP_OFFSET UNITYSDK_OFFSET(0x154E6D10)
#define EJLIOMPMHHI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x154E6970)
#define EJLIOMPMHHI_KLNHFKDPFFF_1_OFFSET UNITYSDK_OFFSET(0x154E6A80)
#define EJLIOMPMHHI_KLNHFKDPFFF_OFFSET UNITYSDK_OFFSET(0x154E7FF0)
#define EJLIOMPMHHI_KNFDJKNFOAB_OFFSET UNITYSDK_OFFSET(0x154E9F70)
#define EJLIOMPMHHI_KPEBMHDIDAM_OFFSET UNITYSDK_OFFSET(0x154E9960)
#define EJLIOMPMHHI_LOBMOKDCKMF_OFFSET UNITYSDK_OFFSET(0x154E5E40)
#define EJLIOMPMHHI_MACFFELKHAM_OFFSET UNITYSDK_OFFSET(0x154E9BC0)
#define EJLIOMPMHHI_MBBLMPNKEFC_1_OFFSET UNITYSDK_OFFSET(0x154E8330)
#define EJLIOMPMHHI_MBBLMPNKEFC_OFFSET UNITYSDK_OFFSET(0x154E8180)
#define EJLIOMPMHHI_MPANHLFAPHN_OFFSET UNITYSDK_OFFSET(0x154E6290)
#define EJLIOMPMHHI_NEGLKBEPCPD_OFFSET UNITYSDK_OFFSET(0x154E4000)
#define EJLIOMPMHHI_NGCPGDCFECH_OFFSET UNITYSDK_OFFSET(0x154E5DC0)
#define EJLIOMPMHHI_OCEDMPNPCJP_OFFSET UNITYSDK_OFFSET(0x154E9860)
#define EJLIOMPMHHI_OCGKMGIBKKF_OFFSET UNITYSDK_OFFSET(0x154E7070)
#define EJLIOMPMHHI_OOAMBCEEFLE_OFFSET UNITYSDK_OFFSET(0x154E5D10)
#define EJLIOMPMHHI_PEPIFIANCCE_OFFSET UNITYSDK_OFFSET(0x154E9E50)
#define EJLIOMPMHHI__ADDBATCHDOWNLOAD_B__3_0_OFFSET UNITYSDK_OFFSET(0x154EA0A0)
#define EJLIOMPMHHI__ADDCLEAR_B__11_1_OFFSET UNITYSDK_OFFSET(0x154EA100)
#define EJLIOMPMHHI__ADDSINGLEDOWNLOAD_B__1_0_OFFSET UNITYSDK_OFFSET(0x154E9FE0)
#define EJLIOMPMHHI__ADDSINGLEDOWNLOAD_B__2_0_OFFSET UNITYSDK_OFFSET(0x154EA040)

inline static constexpr unsigned int EJLIOMPMHHI_TypeDefinitionIndex = 59561;

	class EJLIOMPMHHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HGCEOEHGPPE*>* IOOCILNFFND; // 0x10
		::JIAFOPELMJJ* GAIENNLBCMM; // 0x18
		::System::Collections::Generic::List_1<::KGPCBBIOGLB*>* FKCANKLEHFA; // 0x20
		::RPG::Client::VersionUpdateProgressInfo* JFIFPDDHHMP; // 0x28
		::EMILHGPLJHC* FNHMEHJKBEN; // 0x30
		::NPKKGCIKGPB* DJMOEELMDOH; // 0x38
		::System::Int32 CCOIMEHNJMH; // 0x40
		::System::Int32 FFNBLDFFMCN; // 0x44
		::System::Boolean LCAPJJEJNFI; // 0x48
		::System::Boolean EFLEIEELLLI; // 0x49
		::System::Byte _padding0[0x2];
		::RPG::Client::ExeCode KKIGBNKKJHM; // 0x4C
		::System::Void _ctor(::System::String* a1, ::JIAFOPELMJJ* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::JIAFOPELMJJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::NMJLMAOJEHN* BNJPAKLBFAH()
		{
			return ((::NMJLMAOJEHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_BNJPAKLBFAH_OFFSET))(this);
		}

		::OGIPLEMODKE* CJMKFNCCGLP(::RPG::Client::ProgressID a1, ::KGPCBBIOGLB* a2, ::System::String* a3, ::RPG::Client::ByteHash16 a4, ::System::Int64 a5)
		{
			return ((::OGIPLEMODKE*(*)(::PVOID, ::RPG::Client::ProgressID, ::KGPCBBIOGLB*, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CJMKFNCCGLP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::OGIPLEMODKE* CJMKFNCCGLP_1(::RPG::Client::ProgressID a1, ::KGPCBBIOGLB* a2, ::CFAFCENLLLD* a3)
		{
			return ((::OGIPLEMODKE*(*)(::PVOID, ::RPG::Client::ProgressID, ::KGPCBBIOGLB*, ::CFAFCENLLLD*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CJMKFNCCGLP_1_OFFSET))(this, a1, a2, a3);
		}

		::APBALBFNHIN* NEGLKBEPCPD(::RPG::Client::ProgressID a1, ::System::Boolean a2)
		{
			return ((::APBALBFNHIN*(*)(::PVOID, ::RPG::Client::ProgressID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_NEGLKBEPCPD_OFFSET))(this, a1, a2);
		}

		::EDIKPOPFJCM* ELDMPOPFEJL(::System::Boolean a1)
		{
			return ((::EDIKPOPFJCM*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ELDMPOPFEJL_OFFSET))(this, a1);
		}

		::EDIKPOPFJCM* ELDMPOPFEJL_1(::System::Boolean a1, ::RPG::Client::TextID a2)
		{
			return ((::EDIKPOPFJCM*(*)(::PVOID, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ELDMPOPFEJL_1_OFFSET))(this, a1, a2);
		}

		::EDIKPOPFJCM* ELDMPOPFEJL_2(::RPG::Client::ProgressID a1, ::System::Boolean a2)
		{
			return ((::EDIKPOPFJCM*(*)(::PVOID, ::RPG::Client::ProgressID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ELDMPOPFEJL_2_OFFSET))(this, a1, a2);
		}

		::EDIKPOPFJCM* ELDMPOPFEJL_3(::RPG::Client::ProgressID a1, ::System::Boolean a2, ::RPG::Client::TextID a3)
		{
			return ((::EDIKPOPFJCM*(*)(::PVOID, ::RPG::Client::ProgressID, ::System::Boolean, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ELDMPOPFEJL_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IMHEBAJDKKH(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_IMHEBAJDKKH_OFFSET))(this, a1);
		}

		::RPG::Client::DataActionProgress_1<::HGDELEAHIJO*>* EDAEMNPNDPD()
		{
			return ((::RPG::Client::DataActionProgress_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_EDAEMNPNDPD_OFFSET))(this);
		}

		::RPG::Client::DataActionProgress_1<::HGDELEAHIJO*>* HNFDLGNHMIJ()
		{
			return ((::RPG::Client::DataActionProgress_1<::HGDELEAHIJO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_HNFDLGNHMIJ_OFFSET))(this);
		}

		::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* IOOHJKKBPKA(::RPG::Client::ProgressID a1)
		{
			return ((::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_IOOHJKKBPKA_OFFSET))(this, a1);
		}

		::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::HGDELEAHIJO*, ::System::Object*>*>* CEGEEIOINCO(::System::Boolean a1)
		{
			return ((::RPG::Client::AsyncActionProgress_1<::System::Tuple_2<::HGDELEAHIJO*, ::System::Object*>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CEGEEIOINCO_OFFSET))(this, a1);
		}

		::RPG::Client::DataActionProgress_1<::LFCKLPMBGGI*>* ABPOGFNENBF()
		{
			return ((::RPG::Client::DataActionProgress_1<::LFCKLPMBGGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ABPOGFNENBF_OFFSET))(this);
		}

		::RPG::Client::DataActionProgress_1<::HPPGIADOJBF*>* GLGIBAMGFJN()
		{
			return ((::RPG::Client::DataActionProgress_1<::HPPGIADOJBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_GLGIBAMGFJN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KGPCBBIOGLB*>* IEDCBCNPHKG()
		{
			return ((::System::Collections::Generic::List_1<::KGPCBBIOGLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_IEDCBCNPHKG_OFFSET))(this);
		}

		::RPG::Client::VersionUpdateProgressInfo* DBGCBIMBHPK()
		{
			return ((::RPG::Client::VersionUpdateProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_DBGCBIMBHPK_OFFSET))(this);
		}

		::RPG::Client::VersionUpdateProgressInfo* DMJEFJHBEPA()
		{
			return ((::RPG::Client::VersionUpdateProgressInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_DMJEFJHBEPA_OFFSET))(this);
		}

		::NPKKGCIKGPB* CODJJBECHIE()
		{
			return ((::NPKKGCIKGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CODJJBECHIE_OFFSET))(this);
		}

		::EMILHGPLJHC* OOAMBCEEFLE()
		{
			return ((::EMILHGPLJHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_OOAMBCEEFLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::HGCEOEHGPPE*>* CJGCKDENFME()
		{
			return ((::System::Collections::Generic::List_1<::HGCEOEHGPPE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CJGCKDENFME_OFFSET))(this);
		}

		::HGCEOEHGPPE* BKECMDJGDHF()
		{
			return ((::HGCEOEHGPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_BKECMDJGDHF_OFFSET))(this);
		}

		::HGCEOEHGPPE* NGCPGDCFECH()
		{
			return ((::HGCEOEHGPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_NGCPGDCFECH_OFFSET))(this);
		}

		::System::Boolean LOBMOKDCKMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_LOBMOKDCKMF_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Boolean CFIFPNPICBC(::KGPCBBIOGLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_CFIFPNPICBC_OFFSET))(this, a1);
		}

		::KGPCBBIOGLB* MPANHLFAPHN(::System::String* a1)
		{
			return ((::KGPCBBIOGLB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_MPANHLFAPHN_OFFSET))(this, a1);
		}

		::HGCEOEHGPPE* HACODLPCOEB(::RPG::Client::ProgressID a1)
		{
			return ((::HGCEOEHGPPE*(*)(::PVOID, ::RPG::Client::ProgressID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_HACODLPCOEB_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void BOJAGCJELAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_BOJAGCJELAD_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JKMLDLJBCPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_JKMLDLJBCPP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void EENINLHIPOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_EENINLHIPOG_OFFSET))(this);
		}

		::System::Void KLNHFKDPFFF(::RPG::Client::NotifyType a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_KLNHFKDPFFF_OFFSET))(this, a1, a2);
		}

		::System::Void KLNHFKDPFFF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_KLNHFKDPFFF_1_OFFSET))(this);
		}

		::System::Void MBBLMPNKEFC(::RPG::Client::NotifyType a1, ::System::String* a2, ::RPG::Client::TextID a3, ::System::Int64 a4, ::System::Int64 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID, ::System::Int64, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_MBBLMPNKEFC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void MBBLMPNKEFC_1(::HGCEOEHGPPE* a1, ::RPG::Client::NotifyType a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::Int64 a5, ::System::Int64 a6, ::System::Int64 a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::RPG::Client::NotifyType, ::System::String*, ::RPG::Client::TextID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_MBBLMPNKEFC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void ALENIPKCJIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_ALENIPKCJIO_OFFSET))(this);
		}

		::System::Void OCGKMGIBKKF(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_OCGKMGIBKKF_OFFSET))(this, a1);
		}

		::System::Void EFBFJDJGNPL(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_EFBFJDJGNPL_OFFSET))(this, a1);
		}

		::System::Void EPMINLAECHF(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_EPMINLAECHF_OFFSET))(this, a1, a2);
		}

		::System::Void OCEDMPNPCJP(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_OCEDMPNPCJP_OFFSET))(this, a1);
		}

		::System::Void DDOEPCFNFCJ(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_DDOEPCFNFCJ_OFFSET))(this, a1, a2);
		}

		::System::Void KPEBMHDIDAM(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_KPEBMHDIDAM_OFFSET))(this, a1);
		}

		::System::Void APFPPKFCPOC(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_APFPPKFCPOC_OFFSET))(this, a1);
		}

		::System::Void MACFFELKHAM(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_MACFFELKHAM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PEPIFIANCCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_PEPIFIANCCE_OFFSET))(this);
		}

		::System::Void HCEHJLOLDLK(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_HCEHJLOLDLK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KNFDJKNFOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI_KNFDJKNFOAB_OFFSET))(this);
		}

		::System::Void _AddSingleDownload_b__1_0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI__ADDSINGLEDOWNLOAD_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _AddSingleDownload_b__2_0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI__ADDSINGLEDOWNLOAD_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _AddBatchDownload_b__3_0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI__ADDBATCHDOWNLOAD_B__3_0_OFFSET))(this, a1);
		}

		::System::Void _AddClear_b__11_1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI__ADDCLEAR_B__11_1_OFFSET))(this, a1);
		}

	};
