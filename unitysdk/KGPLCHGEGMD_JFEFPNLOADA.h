#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KGPLCHGEGMD_JFEFPNLOADA_BPAFGGEJKII_OFFSET UNITYSDK_OFFSET(0xB3FAE70)
#define KGPLCHGEGMD_JFEFPNLOADA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F9A10)
#define KGPLCHGEGMD_JFEFPNLOADA_EBDNNOJKODA_OFFSET UNITYSDK_OFFSET(0xB3FAF50)
#define KGPLCHGEGMD_JFEFPNLOADA_EBNAIHPGHEM_OFFSET UNITYSDK_OFFSET(0xB3F9A20)
#define KGPLCHGEGMD_JFEFPNLOADA_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xB3FA1D0)
#define KGPLCHGEGMD_JFEFPNLOADA_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB3FAF70)
#define KGPLCHGEGMD_JFEFPNLOADA_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xB3FAF60)
#define KGPLCHGEGMD_JFEFPNLOADA_IKCEPANFDMH_OFFSET UNITYSDK_OFFSET(0xB3FAA90)
#define KGPLCHGEGMD_JFEFPNLOADA_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0xB3FA4A0)
#define KGPLCHGEGMD_JFEFPNLOADA_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xB3FA3F0)
#define KGPLCHGEGMD_JFEFPNLOADA_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB3FA180)
#define KGPLCHGEGMD_JFEFPNLOADA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB3FB000)

	class KGPLCHGEGMD_JFEFPNLOADA : public ::System::Object
	{
	public:
		::System::Int32 EDIEODKIHBH; // 0x10
		::System::Int32 BLGCIEBLPCD; // 0x14
		::PVOID IMNBFNDPFGN; // 0x18
		// static const ::System::Object EKOIJDNNNHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_CTOR_OFFSET))(this);
		}

		::System::Span_1_0C0D59FF8BC7380B<::System::Int32> BPAFGGEJKII()
		{
			return ((::System::Span_1_0C0D59FF8BC7380B<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_BPAFGGEJKII_OFFSET))(this);
		}

		::System::Int32 EBDNNOJKODA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_EBDNNOJKODA_OFFSET))(this);
		}

		::System::Void EBNAIHPGHEM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_EBNAIHPGHEM_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Int32 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void IKCEPANFDMH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_IKCEPANFDMH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPLCHGEGMD_JFEFPNLOADA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
