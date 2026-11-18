#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCCJJOFALCD.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_DOWNLOADFILEINFO_CPIGJKJDJEM_OFFSET UNITYSDK_OFFSET(0x165542C0)
#define MOLEMOLE_DOWNLOADFILEINFO_DDBNCNKFJKL_OFFSET UNITYSDK_OFFSET(0x16554560)
#define MOLEMOLE_DOWNLOADFILEINFO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16554280)
#define MOLEMOLE_DOWNLOADFILEINFO_EJOAEOMJJBP_OFFSET UNITYSDK_OFFSET(0x16553690)
#define MOLEMOLE_DOWNLOADFILEINFO_EOJIPFHMCIE_OFFSET UNITYSDK_OFFSET(0x165544A0)
#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16553450)
#define MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x165533A0)
#define MOLEMOLE_DOWNLOADFILEINFO_FFHJDELFLKI_OFFSET UNITYSDK_OFFSET(0x165548E0)
#define MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16553510)
#define MOLEMOLE_DOWNLOADFILEINFO_HCAEBNBEFJK_OFFSET UNITYSDK_OFFSET(0x165536F0)
#define MOLEMOLE_DOWNLOADFILEINFO_HLCLEADLDCL_OFFSET UNITYSDK_OFFSET(0x16553C90)
#define MOLEMOLE_DOWNLOADFILEINFO_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x16553C80)
#define MOLEMOLE_DOWNLOADFILEINFO_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0x16553850)
#define MOLEMOLE_DOWNLOADFILEINFO_JEIGJFHLHAB_OFFSET UNITYSDK_OFFSET(0x16553E50)
#define MOLEMOLE_DOWNLOADFILEINFO_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x165539F0)
#define MOLEMOLE_DOWNLOADFILEINFO_KODMDMKGJFI_OFFSET UNITYSDK_OFFSET(0x16554700)
#define MOLEMOLE_DOWNLOADFILEINFO_OFPIDFLONMJ_OFFSET UNITYSDK_OFFSET(0x16553DF0)
#define MOLEMOLE_DOWNLOADFILEINFO_OHCJCNOFLGM_OFFSET UNITYSDK_OFFSET(0x16553A00)
#define MOLEMOLE_DOWNLOADFILEINFO_PJECJEEALMD_OFFSET UNITYSDK_OFFSET(0x16553B60)
#define MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16553080)
#define MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16553050)

namespace MoleMole
{
	inline static constexpr unsigned int DownloadFileInfo_TypeDefinitionIndex = 91751;

	class DownloadFileInfo : public ::System::Object
	{
	public:
		::System::String* remoteName; // 0x10
		::System::String* md5; // 0x18
		::System::Int64 fileSize; // 0x20
		::System::Boolean isPatch; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::FCCJJOFALCD>* tags; // 0x30
		::Il2CppArray<::GPNHHGBPCGM>* packages; // 0x38
		::System::String* remoteParentDir; // 0x40

		::System::Void _ctor(::System::String* OLALJFPFOIA, ::System::Int64 BFIHLDODPNN, ::System::String* CBIEJMBPAIC, ::System::Boolean BBNBFFIOBEC, ::System::String* EJMLOOPIBOH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO__CTOR_OFFSET))(this, OLALJFPFOIA, BFIHLDODPNN, CBIEJMBPAIC, BBNBFFIOBEC, EJMLOOPIBOH);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Boolean Equals_1(::MoleMole::DownloadFileInfo* LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EQUALS_1_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean EJOAEOMJJBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EJOAEOMJJBP_OFFSET))(this);
		}

		::System::Boolean HCAEBNBEFJK(::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*& CMFKANNJEIN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_HCAEBNBEFJK_OFFSET))(this, CMFKANNJEIN);
		}

		::System::Void HNFAPPAHNKF(::FCCJJOFALCD IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::FCCJJOFALCD))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_HNFAPPAHNKF_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Boolean OHCJCNOFLGM(::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*& EJHDJBKJMEC)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_OHCJCNOFLGM_OFFSET))(this, EJHDJBKJMEC);
		}

		::System::Boolean PJECJEEALMD(::System::String* CJBJONJDOLI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_PJECJEEALMD_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_HLPHPBAODIF_OFFSET))(this);
		}

		::System::Boolean HLCLEADLDCL(::Il2CppArray<::FCCJJOFALCD>*& CMFKANNJEIN)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::FCCJJOFALCD>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_HLCLEADLDCL_OFFSET))(this, CMFKANNJEIN);
		}

		::System::Boolean OFPIDFLONMJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_OFPIDFLONMJ_OFFSET))(this);
		}

		::System::Boolean JEIGJFHLHAB(::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*& CMFKANNJEIN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_JEIGJFHLHAB_OFFSET))(this, CMFKANNJEIN);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Void CPIGJKJDJEM(::Il2CppArray<::GPNHHGBPCGM>* IBGBKPADGJO)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::GPNHHGBPCGM>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_CPIGJKJDJEM_OFFSET))(this, IBGBKPADGJO);
		}

		::System::Boolean EOJIPFHMCIE(::FCCJJOFALCD IMLLDOHDCNC)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCCJJOFALCD))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_EOJIPFHMCIE_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Void DDBNCNKFJKL(::GPNHHGBPCGM IMLLDOHDCNC)
		{
			return ((::System::Void(*)(::PVOID, ::GPNHHGBPCGM))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_DDBNCNKFJKL_OFFSET))(this, IMLLDOHDCNC);
		}

		::System::Void KODMDMKGJFI(::Il2CppArray<::FCCJJOFALCD>* IBGBKPADGJO)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FCCJJOFALCD>*))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_KODMDMKGJFI_OFFSET))(this, IBGBKPADGJO);
		}

		::System::Boolean FFHJDELFLKI(::Il2CppArray<::FCCJJOFALCD>*& KEMFICIHIGH)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::FCCJJOFALCD>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_DOWNLOADFILEINFO_FFHJDELFLKI_OFFSET))(this, KEMFICIHIGH);
		}
	};
}
