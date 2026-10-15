#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/LNMEGEABJHF.h"
class EFIDOJDHNGJ;
namespace System { class String; }

#define KDFOAKHBHEH_CTOR_OFFSET UNITYSDK_OFFSET(0x3C286B0)
#define KDFOAKHBHEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C286C0)
#define KDFOAKHBHEH_FJECEHNBPIA_1_OFFSET UNITYSDK_OFFSET(0x3C28910)
#define KDFOAKHBHEH_FJECEHNBPIA_OFFSET UNITYSDK_OFFSET(0x3C28900)
#define KDFOAKHBHEH_FMNLCELIDPG_OFFSET UNITYSDK_OFFSET(0x3C28960)
#define KDFOAKHBHEH_GCFLBAKNFHP_OFFSET UNITYSDK_OFFSET(0x1D40)
#define KDFOAKHBHEH_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xAD20)
#define KDFOAKHBHEH_HLLCBMOFAKG_OFFSET UNITYSDK_OFFSET(0x3C28950)
#define KDFOAKHBHEH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C28740)
#define KDFOAKHBHEH_KMOLCDEOKGD_OFFSET UNITYSDK_OFFSET(0x3C28930)
#define KDFOAKHBHEH_OACBGCFADMP_OFFSET UNITYSDK_OFFSET(0x3C28920)
#define KDFOAKHBHEH_OGEPDPNEJBI_1_OFFSET UNITYSDK_OFFSET(0x3C28880)
#define KDFOAKHBHEH_OGEPDPNEJBI_OFFSET UNITYSDK_OFFSET(0x3C287D0)
#define KDFOAKHBHEH_OPLAHPEOPDA_OFFSET UNITYSDK_OFFSET(0x3C288F0)
#define KDFOAKHBHEH_PCPCIFMHDKM_OFFSET UNITYSDK_OFFSET(0x3C28940)
#define KDFOAKHBHEH_PFOAOOKOHME_OFFSET UNITYSDK_OFFSET(0x3C286D0)

inline static constexpr unsigned int KDFOAKHBHEH_TypeDefinitionIndex = 41622;

	struct alignas(8) KDFOAKHBHEH
	{
		::System::Boolean PPIGLCIEIIM; // 0x10
		::System::Byte _padding0[0x7];
		::EFIDOJDHNGJ* GEPFFDDHPAI; // 0x18
		::System::Int32 BCFKJFNBGLA; // 0x20
		::System::Byte _padding1[0x4];
		::System::ArraySegment_1<::System::Char> OLIEPAPBFPP; // 0x28
		::System::Byte _padding2[0x8];
		::System::Int32 IDMBDECDDPO; // 0x38
		::System::Int32 JPFLAAPGBGB; // 0x3C
		// static const ::System::Object DGOHJJLBIMG; // 0x0
		// static const ::System::Object OCCOGCNEEGC; // 0x0
		::System::Void _ctor(::EFIDOJDHNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFIDOJDHNGJ*))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PFOAOOKOHME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_PFOAOOKOHME_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_KHGIKBFDLFB_OFFSET))(this, a1);
		}

		::System::Void OGEPDPNEJBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_OGEPDPNEJBI_OFFSET))(this);
		}

		::System::Void OGEPDPNEJBI_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_OGEPDPNEJBI_1_OFFSET))(this, a1);
		}

		::System::Boolean OPLAHPEOPDA(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_OPLAHPEOPDA_OFFSET))(this, a1);
		}

		::System::Char FJECEHNBPIA()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_FJECEHNBPIA_OFFSET))(this);
		}

		::System::Char FJECEHNBPIA_1(::System::Int32 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_FJECEHNBPIA_1_OFFSET))(this, a1);
		}

		::System::String* OACBGCFADMP(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_OACBGCFADMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KMOLCDEOKGD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_KMOLCDEOKGD_OFFSET))(this, a1);
		}

		::System::Boolean PCPCIFMHDKM(::LNMEGEABJHF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNMEGEABJHF))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_PCPCIFMHDKM_OFFSET))(this, a1);
		}

		::System::Void HLLCBMOFAKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_HLLCBMOFAKG_OFFSET))(this, a1);
		}

		::EFIDOJDHNGJ* GCFLBAKNFHP()
		{
			return ((::EFIDOJDHNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_GCFLBAKNFHP_OFFSET))(this);
		}

		::System::Int32 HHMFILFAMNA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Int32 FMNLCELIDPG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFOAKHBHEH_FMNLCELIDPG_OFFSET))(this);
		}

	};
