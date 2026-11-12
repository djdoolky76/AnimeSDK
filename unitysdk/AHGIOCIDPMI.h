#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AENEFHBMEMJ.h"
#include "unitysdk/IELMGLNMLFN.h"
class AHGIOCIDPMI;
class EFIDOJDHNGJ;
class KLGICPNPKIC;
class MMDJEHCBONC;
class PEFLHOJEIMG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define AHGIOCIDPMI_CLEAR_OFFSET UNITYSDK_OFFSET(0xF13FF40)
#define AHGIOCIDPMI_CTOR_OFFSET UNITYSDK_OFFSET(0xF140D40)
#define AHGIOCIDPMI_HILKKNFIHNF_OFFSET UNITYSDK_OFFSET(0xF1408C0)
#define AHGIOCIDPMI_JMMGLFLLACC_OFFSET UNITYSDK_OFFSET(0xF140C40)
#define AHGIOCIDPMI_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0xF140B10)
#define AHGIOCIDPMI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF13FE40)
#define AHGIOCIDPMI_LAIBKLOMBOA_1_OFFSET UNITYSDK_OFFSET(0xF140BA0)
#define AHGIOCIDPMI_LAIBKLOMBOA_OFFSET UNITYSDK_OFFSET(0xF140B50)
#define AHGIOCIDPMI_LKEFCMNJDJI_OFFSET UNITYSDK_OFFSET(0xF140CB0)
#define AHGIOCIDPMI_NFOKJABPHBM_OFFSET UNITYSDK_OFFSET(0xF140BF0)
#define AHGIOCIDPMI_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0xF140AD0)
#define AHGIOCIDPMI_OKDCEHFFPOM_OFFSET UNITYSDK_OFFSET(0xF13FFA0)

inline static constexpr unsigned int AHGIOCIDPMI_TypeDefinitionIndex = 75539;

	class AHGIOCIDPMI : public ::AENEFHBMEMJ
	{
	public:
		::PEFLHOJEIMG* GKNBCPMJHMN; // 0x10
		::EFIDOJDHNGJ* GEPFFDDHPAI; // 0x18
		::IELMGLNMLFN LHNCBMCKBDJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::EFIDOJDHNGJ* a1, ::IELMGLNMLFN a2, ::PEFLHOJEIMG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::EFIDOJDHNGJ*, ::IELMGLNMLFN, ::PEFLHOJEIMG*))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_CLEAR_OFFSET))(this);
		}

		static ::AHGIOCIDPMI* HILKKNFIHNF(::EFIDOJDHNGJ* a1, ::IELMGLNMLFN a2)
		{
			return ((::AHGIOCIDPMI*(*)(::EFIDOJDHNGJ*, ::IELMGLNMLFN))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_HILKKNFIHNF_OFFSET))(a1, a2);
		}

		::EFIDOJDHNGJ* OACBGCFADMP()
		{
			return ((::EFIDOJDHNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_OACBGCFADMP_OFFSET))(this);
		}

		::KLGICPNPKIC* KBOJFONKFKN()
		{
			return ((::KLGICPNPKIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_KBOJFONKFKN_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MMDJEHCBONC*>* LAIBKLOMBOA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MMDJEHCBONC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_LAIBKLOMBOA_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::MMDJEHCBONC*>* LAIBKLOMBOA_1(::KLGICPNPKIC* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MMDJEHCBONC*>*(*)(::PVOID, ::KLGICPNPKIC*))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_LAIBKLOMBOA_1_OFFSET))(this, a1);
		}

		::System::Void OKDCEHFFPOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_OKDCEHFFPOM_OFFSET))(this);
		}

		::System::String* NFOKJABPHBM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_NFOKJABPHBM_OFFSET))(this);
		}

		::IELMGLNMLFN JMMGLFLLACC()
		{
			return ((::IELMGLNMLFN(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_JMMGLFLLACC_OFFSET))(this);
		}

		::System::Int32 LKEFCMNJDJI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHGIOCIDPMI_LKEFCMNJDJI_OFFSET))(this);
		}

	};
