#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GNEEDEDGCOI.h"
class AFNPIPBLFJM;
class BDHINPLKOPK;
class DNIDONCOAEE;
class KBKFLNHFHPF;
class LGKNPHGNNDI;
class MJDKJEIAABG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLHGCJPGNGB_AMMKOBHMPAP_OFFSET UNITYSDK_OFFSET(0x16A37410)
#define GLHGCJPGNGB_BDNOHCNPNCJ_OFFSET UNITYSDK_OFFSET(0x16A36F40)
#define GLHGCJPGNGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x16A39100)
#define GLHGCJPGNGB_CPKBCDHBKFL_OFFSET UNITYSDK_OFFSET(0x16A36BC0)
#define GLHGCJPGNGB_CTOR_OFFSET UNITYSDK_OFFSET(0x16A36990)
#define GLHGCJPGNGB_EPJGKKJGECP_OFFSET UNITYSDK_OFFSET(0x16A37A50)
#define GLHGCJPGNGB_GBMEKMBDMPI_OFFSET UNITYSDK_OFFSET(0x16A39060)
#define GLHGCJPGNGB_GLOGELHGIGD_OFFSET UNITYSDK_OFFSET(0x16A38F00)
#define GLHGCJPGNGB_IKJDKLBGEMN_OFFSET UNITYSDK_OFFSET(0x16A36C20)
#define GLHGCJPGNGB_IKKGNCDIAAC_OFFSET UNITYSDK_OFFSET(0x16A37210)
#define GLHGCJPGNGB_KPAJILDFCGP_OFFSET UNITYSDK_OFFSET(0x16A36B60)
#define GLHGCJPGNGB_LEJPOFAKMDO_1_OFFSET UNITYSDK_OFFSET(0x16A38910)
#define GLHGCJPGNGB_LEJPOFAKMDO_OFFSET UNITYSDK_OFFSET(0x16A385B0)
#define GLHGCJPGNGB_LIFPBPHIMJE_OFFSET UNITYSDK_OFFSET(0x16A38C60)
#define GLHGCJPGNGB_LNEHONCOMBM_OFFSET UNITYSDK_OFFSET(0x16A37050)
#define GLHGCJPGNGB_MDCNAKGKANB_OFFSET UNITYSDK_OFFSET(0x16A369A0)
#define GLHGCJPGNGB_NLKGENNFEBM_OFFSET UNITYSDK_OFFSET(0x16A37E50)
#define GLHGCJPGNGB_OJEBKPFOJKP_OFFSET UNITYSDK_OFFSET(0x16A381B0)
#define GLHGCJPGNGB_PCFACOAGJEF_OFFSET UNITYSDK_OFFSET(0x16A37840)
#define GLHGCJPGNGB_PGFOAKLGFED_OFFSET UNITYSDK_OFFSET(0x16A38130)
#define GLHGCJPGNGB_PKODAOLNAPD_OFFSET UNITYSDK_OFFSET(0x16A369F0)

inline static constexpr unsigned int GLHGCJPGNGB_TypeDefinitionIndex = 84722;

	class GLHGCJPGNGB : public ::System::Object
	{
	public:
		::KBKFLNHFHPF* APIINPIAPFI; // 0x10
		::BDHINPLKOPK* FPNMIGDJBIE; // 0x18
		static ::RPG::Client::TextID* StaticGet_HFCKLJLIANM()
		{
			return (::RPG::Client::TextID*)UnitySDK::FromName("", "GLHGCJPGNGB")->GetStaticField(0x158A0);
		}

		// static const ::System::Object MCHCHOEOHPJ; // 0x0
		// static const ::System::Object KAJAPKFEADN; // 0x0
		// static const ::System::Object HILJFNAIEMD; // 0x0
		::System::Void _ctor(::BDHINPLKOPK* a1, ::KBKFLNHFHPF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BDHINPLKOPK*, ::KBKFLNHFHPF*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLHGCJPGNGB_CCTOR_OFFSET))();
		}

		::System::Int32 MDCNAKGKANB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_MDCNAKGKANB_OFFSET))(this);
		}

		::System::Int32 PKODAOLNAPD(::System::Collections::Generic::IReadOnlyCollection_1<::GNEEDEDGCOI>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::GNEEDEDGCOI>*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_PKODAOLNAPD_OFFSET))(this, a1);
		}

		::System::Int32 KPAJILDFCGP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_KPAJILDFCGP_OFFSET))(this, a1, a2);
		}

		::DNIDONCOAEE* CPKBCDHBKFL(::System::UInt32 a1)
		{
			return ((::DNIDONCOAEE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_CPKBCDHBKFL_OFFSET))(this, a1);
		}

		::DNIDONCOAEE* IKJDKLBGEMN(::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>* a1, ::System::Int32 a2)
		{
			return ((::DNIDONCOAEE*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>*, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_IKJDKLBGEMN_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::DNIDONCOAEE*>* BDNOHCNPNCJ(::MJDKJEIAABG* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::PVOID, ::MJDKJEIAABG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_BDNOHCNPNCJ_OFFSET))(this, a1, a2);
		}

		::LGKNPHGNNDI* PCFACOAGJEF(::MJDKJEIAABG* a1, ::System::Int32 a2, ::DNIDONCOAEE* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::LGKNPHGNNDI*(*)(::PVOID, ::MJDKJEIAABG*, ::System::Int32, ::DNIDONCOAEE*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_PCFACOAGJEF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::LGKNPHGNNDI* PGFOAKLGFED()
		{
			return ((::LGKNPHGNNDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_PGFOAKLGFED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::DNIDONCOAEE*>* LNEHONCOMBM(::MJDKJEIAABG* a1)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::PVOID, ::MJDKJEIAABG*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_LNEHONCOMBM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::DNIDONCOAEE*>* OJEBKPFOJKP(::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>* a1)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::GNEEDEDGCOI>*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_OJEBKPFOJKP_OFFSET))(this, a1);
		}

		static ::System::Boolean LIFPBPHIMJE(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_LIFPBPHIMJE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::DNIDONCOAEE*>* LEJPOFAKMDO(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::AFNPIPBLFJM*>*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_LEJPOFAKMDO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::DNIDONCOAEE*>* LEJPOFAKMDO_1(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_LEJPOFAKMDO_1_OFFSET))(a1);
		}

		static ::System::Void IKKGNCDIAAC(::System::Collections::Generic::List_1<::DNIDONCOAEE*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DNIDONCOAEE*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_IKKGNCDIAAC_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::DNIDONCOAEE*>* AMMKOBHMPAP(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::DNIDONCOAEE*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>*, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_AMMKOBHMPAP_OFFSET))(a1, a2);
		}

		static ::System::String* NLKGENNFEBM(::System::Int32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_NLKGENNFEBM_OFFSET))(a1, a2, a3);
		}

		static ::System::String* EPJGKKJGECP(::MJDKJEIAABG* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::MJDKJEIAABG*, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_EPJGKKJGECP_OFFSET))(a1, a2);
		}

		static ::System::Single GBMEKMBDMPI(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_GBMEKMBDMPI_OFFSET))(a1, a2);
		}

		static ::System::String* GLOGELHGIGD(::System::Single a1)
		{
			return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + GLHGCJPGNGB_GLOGELHGIGD_OFFSET))(a1);
		}

	};
