#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvAsyncState.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
class ODGPPIHLOFF;
class OFLBAIOGIMO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKOAMFCJHNH_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xF886720)
#define DKOAMFCJHNH_AFKIKHBAEEP_OFFSET UNITYSDK_OFFSET(0xF885860)
#define DKOAMFCJHNH_AOOCOMCPEFB_OFFSET UNITYSDK_OFFSET(0xF8857C0)
#define DKOAMFCJHNH_BEMHFPJIJME_OFFSET UNITYSDK_OFFSET(0xF886440)
#define DKOAMFCJHNH_BFCKOIEBCDC_OFFSET UNITYSDK_OFFSET(0xF886020)
#define DKOAMFCJHNH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xF885910)
#define DKOAMFCJHNH_BPGMMNCJHKG_OFFSET UNITYSDK_OFFSET(0xF885920)
#define DKOAMFCJHNH_CCTOR_OFFSET UNITYSDK_OFFSET(0xF886A30)
#define DKOAMFCJHNH_CTOR_OFFSET UNITYSDK_OFFSET(0xF8862C0)
#define DKOAMFCJHNH_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0xF885AB0)
#define DKOAMFCJHNH_HEDHBNLIOAK_1_OFFSET UNITYSDK_OFFSET(0xF886990)
#define DKOAMFCJHNH_HEDHBNLIOAK_OFFSET UNITYSDK_OFFSET(0xF886820)
#define DKOAMFCJHNH_HJFLHDHIJCM_OFFSET UNITYSDK_OFFSET(0xF885820)
#define DKOAMFCJHNH_IDMKNFFLMOH_OFFSET UNITYSDK_OFFSET(0xF885810)
#define DKOAMFCJHNH_IJJMIMJMNBN_OFFSET UNITYSDK_OFFSET(0xF886330)
#define DKOAMFCJHNH_JMCDPBLNMLO_OFFSET UNITYSDK_OFFSET(0xF886340)
#define DKOAMFCJHNH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xF8865F0)
#define DKOAMFCJHNH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xF886360)
#define DKOAMFCJHNH_KHJPOPCLBMC_OFFSET UNITYSDK_OFFSET(0xF885760)
#define DKOAMFCJHNH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF885AF0)
#define DKOAMFCJHNH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xF886350)
#define DKOAMFCJHNH_MGNJBJIGMJM_OFFSET UNITYSDK_OFFSET(0xF886570)
#define DKOAMFCJHNH_MJKMPANKMLO_OFFSET UNITYSDK_OFFSET(0xF885A60)
#define DKOAMFCJHNH_NDNCDPBMJDP_OFFSET UNITYSDK_OFFSET(0xF885BD0)
#define DKOAMFCJHNH_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xF8864B0)
#define DKOAMFCJHNH_PFMKHONHPKG_OFFSET UNITYSDK_OFFSET(0xF885EA0)
#define DKOAMFCJHNH_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF885980)

inline static constexpr unsigned int DKOAMFCJHNH_TypeDefinitionIndex = 49196;

	class DKOAMFCJHNH : public ::System::Object
	{
	public:
		::System::String* DLDDHIGMOOE; // 0x10
		::System::Collections::Generic::List_1<::GGJFAFONDHN*>* MAJKOAGAIHF; // 0x18
		::System::Collections::Generic::List_1<::OFLBAIOGIMO*>* CBAEFICDEMB; // 0x20
		::System::Action_1<::System::Boolean>* NMGJBNOAPDI; // 0x28
		::EnviromentSystemV2Space::EnvAsyncState IFJFBBBLCIK; // 0x30
		::System::Boolean IOJPDBKKFCD; // 0x34
		::System::Byte _padding0[0x3];
		::System::Int64 JMIIDOPDOMO; // 0x38
		static ::System::Collections::Generic::List_1<::ODGPPIHLOFF*>** StaticGet_CFLIILEDNMN()
		{
			return (::System::Collections::Generic::List_1<::ODGPPIHLOFF*>**)UnitySDK::FromName("", "DKOAMFCJHNH")->GetStaticField(0x56C50);
		}

		static ::System::Int64* StaticGet_BNNPMGNHOBB()
		{
			return (::System::Int64*)UnitySDK::FromName("", "DKOAMFCJHNH")->GetStaticField(0x13290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKOAMFCJHNH_CCTOR_OFFSET))();
		}

		::System::Void KHJPOPCLBMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_KHJPOPCLBMC_OFFSET))(this, a1);
		}

		::System::Boolean AOOCOMCPEFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_AOOCOMCPEFB_OFFSET))(this);
		}

		::System::Int64 IDMKNFFLMOH()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_IDMKNFFLMOH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::GGJFAFONDHN*>* HJFLHDHIJCM()
		{
			return ((::System::Collections::Generic::List_1<::GGJFAFONDHN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_HJFLHDHIJCM_OFFSET))(this);
		}

		::System::Void AFKIKHBAEEP(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_AFKIKHBAEEP_OFFSET))(this, a1);
		}

		::EnviromentSystemV2Space::EnvAsyncState BGDKFHEBDFJ()
		{
			return ((::EnviromentSystemV2Space::EnvAsyncState(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_BGDKFHEBDFJ_OFFSET))(this);
		}

		static ::System::Int64 BPGMMNCJHKG()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + DKOAMFCJHNH_BPGMMNCJHKG_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_TOSTRING_OFFSET))(this);
		}

		::System::Void MJKMPANKMLO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_MJKMPANKMLO_OFFSET))(this, a1);
		}

		::System::String* DBIELBAPKIK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_DBIELBAPKIK_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		static ::System::Void NDNCDPBMJDP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKOAMFCJHNH_NDNCDPBMJDP_OFFSET))();
		}

		::System::Void PFMKHONHPKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_PFMKHONHPKG_OFFSET))(this);
		}

		::System::Void BFCKOIEBCDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_BFCKOIEBCDC_OFFSET))(this);
		}

		::System::Boolean IJJMIMJMNBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_IJJMIMJMNBN_OFFSET))(this);
		}

		::System::Boolean JMCDPBLNMLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_JMCDPBLNMLO_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void BEMHFPJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_BEMHFPJIJME_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_OIBKPJEGPOK_OFFSET))(this, a1);
		}

		::System::Void MGNJBJIGMJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_MGNJBJIGMJM_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void HEDHBNLIOAK(::OFLBAIOGIMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFLBAIOGIMO*))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_HEDHBNLIOAK_OFFSET))(this, a1);
		}

		::System::Void HEDHBNLIOAK_1(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + DKOAMFCJHNH_HEDHBNLIOAK_1_OFFSET))(this, a1);
		}

	};
